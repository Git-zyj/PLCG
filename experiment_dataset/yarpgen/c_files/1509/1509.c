/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_10;
    var_12 = var_1;
    var_13 += var_2;
    var_14 ^= ((~((var_1 ? 30249 : ((max(var_5, var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (min((~var_6), (max(((((arr_3 [i_0] [i_0] [i_1]) ? var_1 : var_9))), 30249))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = (~var_0);
                                var_17 -= ((!(arr_11 [i_1] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 3])));
                                var_18 *= (((((35279 ? -3134801314175212888 : (((((arr_7 [i_0] [i_1] [i_2] [i_3] [i_0]) && 18965))))))) ? (!var_8) : (arr_2 [i_0] [4])));
                            }
                        }
                    }
                    var_19 |= ((((((1 ? 45534 : -3134801314175212888)) ? ((min(0, 30249))) : -8970))));
                    var_20 = (min(var_20, ((((2194587795 % 44040) ? (((arr_11 [i_1 + 2] [i_0 - 1] [i_0 - 3] [i_0 - 2] [i_0 - 2]) ? (arr_11 [i_1 + 2] [i_0 + 2] [i_0 - 3] [i_0 + 2] [i_0 - 3]) : (arr_11 [i_1 - 1] [i_0 - 2] [i_0 - 3] [i_0 - 4] [i_0 - 1]))) : (((arr_11 [i_1 + 1] [i_0 - 4] [i_0 - 2] [i_0 - 3] [i_0 - 4]) ? (arr_11 [i_1 + 2] [i_0 - 4] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_11 [i_1 + 2] [i_0 - 2] [i_0 + 1] [i_0 - 4] [i_0 - 2]))))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_21 = (min(var_21, (((arr_12 [8] [i_1 - 1] [8]) ? (arr_12 [4] [i_1 - 3] [4]) : var_4))));
                        var_22 = (max(var_22, (arr_1 [i_0] [i_0 - 2])));
                    }
                    arr_18 [i_5] [i_5] [i_1] [i_5] = var_8;
                }
                var_23 = (((min(92, (((arr_7 [i_0] [18] [i_1] [i_1] [i_1]) % (arr_6 [i_1]))))) & var_3));
                var_24 = ((((((arr_17 [i_1] [i_1 - 3] [i_1] [i_0 - 2]) >= (arr_17 [i_0] [i_1 - 2] [i_0] [i_0 - 2])))) >> ((((~(arr_17 [i_1] [i_1 + 1] [i_0 - 3] [i_0 - 3]))) - 3538788975))));
            }
        }
    }
    #pragma endscop
}
