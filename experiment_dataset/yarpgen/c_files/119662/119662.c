/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_19 += (((arr_2 [i_0 + 1]) && (arr_3 [i_0 + 1])));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_20 ^= (((arr_0 [i_0 + 1]) ? var_14 : ((var_15 ? (arr_5 [i_0] [6] [i_1]) : (-9223372036854775807 - 1)))));
            var_21 = (max(var_21, 0));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_0] [i_2] [i_2] = ((-5755491159472427704 ? (arr_5 [i_0 + 1] [i_0 - 1] [5]) : (arr_3 [i_2])));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_22 &= ((var_4 ? (((arr_7 [i_3]) ? 1 : (arr_10 [i_0] [3] [i_0] [i_0]))) : ((((arr_0 [i_0]) ? var_10 : var_11)))));
                        arr_14 [i_0] [i_0] [i_0] [0] [i_4] [i_4] &= ((var_0 ? (arr_5 [i_3 - 1] [i_0 + 1] [i_0 - 1]) : (arr_5 [i_3 - 1] [i_0 + 1] [i_4])));
                        var_23 = var_14;
                    }
                }
            }
            var_24 = (min(var_24, (((arr_13 [1] [i_0 + 1] [i_0 + 1]) ? ((var_9 | (arr_12 [i_0] [i_0 - 1] [i_0] [i_2]))) : (!var_3)))));
            var_25 ^= (((arr_5 [i_2] [15] [i_0 + 1]) >= ((var_3 ? var_16 : var_4))));
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            arr_17 [i_0 - 1] [i_5] = (((((arr_12 [i_5] [i_5 + 1] [11] [i_0]) & (arr_9 [i_0]))) + -2355));
            var_26 = var_0;
            var_27 = (var_2 | var_15);
        }
    }
    var_28 = (((max(var_16, 5073190732233409805)) >= (((0 % ((var_4 ? 65524 : var_10)))))));
    var_29 = ((-((var_5 ? ((-5755491159472427704 ? var_5 : var_13)) : var_3))));
    #pragma endscop
}
