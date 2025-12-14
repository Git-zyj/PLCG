/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((!((max(((min(var_1, var_14))), var_3)))));
    var_20 -= (!((((((var_1 ? var_4 : var_3))) ? var_16 : var_13))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_3 [0] [i_0 + 1]);
        var_21 = (((var_4 + var_5) ? ((var_15 ? var_10 : var_5)) : (arr_1 [i_0])));
        var_22 = arr_0 [i_0 + 1];

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            arr_8 [i_0] [i_1 + 1] [i_1 + 1] = ((var_17 ? (((arr_7 [i_1]) ? var_11 : var_8)) : (((var_15 ? (arr_0 [i_0 - 1]) : (arr_2 [i_0] [i_0]))))));
            var_23 = var_13;
        }
    }
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_24 = (((min((arr_7 [i_3]), ((((arr_3 [i_4] [i_3]) ? (arr_3 [i_2 - 1] [i_2]) : (arr_1 [i_3])))))) | (((min((arr_0 [i_2 - 2]), (arr_0 [i_2 - 2])))))));
                    var_25 = (((arr_9 [i_3]) & var_10));
                    var_26 = (min(var_26, var_5));
                    var_27 ^= (arr_17 [i_3] [i_3] [i_2]);
                }
            }
        }
        var_28 = (min(var_28, (((((((arr_14 [2]) ? (arr_14 [4]) : var_0))) ? (((((var_11 ? var_7 : var_9))) ? var_10 : (arr_6 [i_2]))) : ((-(((arr_0 [i_2]) ? (arr_3 [i_2] [i_2]) : var_9)))))))));
        arr_20 [i_2] = (max(-var_7, var_0));
    }
    for (int i_5 = 4; i_5 < 13;i_5 += 1)
    {
        var_29 -= ((((-(arr_12 [10]))) >> ((((arr_9 [i_5 + 2]) < (arr_9 [i_5 + 2]))))));
        var_30 = (min(var_30, ((min((min((arr_7 [i_5 + 2]), (arr_7 [i_5 + 1]))), (((arr_7 [i_5 - 3]) ? (arr_7 [i_5 + 2]) : (arr_7 [i_5 - 1]))))))));
        arr_24 [i_5] = ((arr_2 [i_5] [i_5]) ? (((((max(var_6, var_1))) ? (((arr_9 [0]) ? var_12 : (arr_19 [i_5]))) : var_18))) : ((-((~(arr_10 [12]))))));
    }
    var_31 = var_1;
    #pragma endscop
}
