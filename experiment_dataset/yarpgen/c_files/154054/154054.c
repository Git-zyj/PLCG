/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((15 / 1), (min(var_3, var_4))));
    var_15 = var_11;
    var_16 = (((((min(var_4, ((0 ? var_2 : var_2)))) + 9223372036854775807)) >> var_9));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [1] &= var_4;
                    var_17 = ((!(arr_5 [12])));
                }
            }
        }
        var_18 = ((((((0 == -20) / 20))) || ((((arr_2 [i_0] [i_0]) + (!-20))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        var_19 = (max(var_19, ((((arr_0 [i_3]) & 19)))));
        var_20 = var_1;
        arr_12 [i_3] &= ((!(~var_6)));
        var_21 = (~var_11);
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_16 [i_4] = ((((max(var_1, var_5))) >> var_13));
        var_22 += -6160033477572495815;
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        var_23 = ((((min((((arr_7 [i_5]) / -17657)), ((min(1, -21)))))) ? (var_7 * var_13) : (((((var_4 ? 15 : var_9))) ? (min((arr_18 [i_5]), var_5)) : (arr_0 [i_5 - 1])))));
        var_24 = ((var_4 ? (7340032 < -1) : ((~((max(var_9, (arr_6 [6] [4]))))))));
        arr_19 [3] [7] = (((arr_8 [i_5 + 1]) * (min(((var_12 ? var_11 : var_3)), var_12))));
        var_25 = ((-((var_11 ? (min(var_3, var_8)) : (arr_8 [i_5 - 2])))));
        var_26 = ((-(arr_8 [i_5])));
    }
    #pragma endscop
}
