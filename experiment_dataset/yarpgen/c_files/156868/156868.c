/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        var_20 += 1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = var_16;
                    arr_11 [i_0] [14] [4] = ((var_6 ? var_13 : ((max(var_5, (min(1, -25029)))))));
                    var_21 = (max(var_21, ((max((((((~(arr_8 [i_2])))) ? (10496417315478356652 <= 32256) : (max(var_18, 7950326758231194963)))), (((arr_5 [i_0]) * -10496417315478356642)))))));
                }
            }
        }
        arr_12 [i_0] = ((((((arr_2 [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0])))) || (arr_5 [i_0])));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_22 += ((((((((arr_14 [i_3]) < (arr_0 [i_3]))) ? (((min((arr_6 [i_3] [i_3] [i_3] [i_3]), var_9)))) : ((-(arr_15 [i_3] [0])))))) ? (arr_15 [18] [20]) : (((arr_13 [i_3] [i_3]) ? (arr_14 [i_3]) : var_3))));
        var_23 = (min((arr_7 [i_3] [i_3] [10] [i_3]), 0));
        var_24 = (min(var_24, ((((((var_9 ? (((var_17 ? (arr_0 [i_3]) : var_4))) : (min((arr_15 [i_3] [18]), (arr_5 [i_3])))))) ? (min(64, 9007061815787520)) : ((min((min((arr_8 [i_3]), 216172782113783808)), (((var_6 == (arr_2 [i_3]))))))))))));
    }
    var_25 = var_10;
    var_26 = var_17;
    #pragma endscop
}
