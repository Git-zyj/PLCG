/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_19 ^= -5;
                            var_20 = (min(var_20, 97));
                        }
                        var_21 -= (arr_9 [14] [i_1]);
                        var_22 ^= max((max((max((arr_0 [i_0] [7]), 0)), -3409134136431950286)), -32);
                        arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] &= (max((arr_3 [i_1]), (max((arr_1 [i_0] [i_1]), 48616))));
                        var_23 &= (max((arr_8 [i_0] [i_1] [i_2] [i_3] [11]), (arr_8 [i_0] [i_1] [i_2] [i_3] [i_3])));
                    }
                    var_24 = (max(var_24, ((max((arr_6 [i_1]), (arr_6 [i_0]))))));
                    var_25 = (min(var_25, 29));
                }
            }
        }
    }
    var_26 = (max(var_26, (~var_3)));
    var_27 -= (-9223372036854775807 - 1);
    var_28 ^= 4155315649668177099;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_29 ^= (max((max(-25, (arr_19 [i_6] [i_6]))), 0));

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_30 += ((((max(6, (arr_18 [i_6] [i_7] [i_7])))) ? (min(32767, -238)) : (min(((~(arr_21 [19] [19]))), ((-23 ? 32 : 6))))));
                        var_31 *= (arr_18 [i_6] [i_7] [i_8]);
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_31 [i_5] [0] [i_6] [i_7] [i_6] [i_10] &= (arr_24 [5] [i_6] [5] [i_6]);
                                var_32 = (max(var_32, (~6)));
                                var_33 ^= max(((-(arr_23 [i_10 - 3] [i_6] [i_10 + 1] [i_10 - 2]))), (arr_21 [i_10] [i_10 + 1]));
                            }
                        }
                    }
                    var_34 ^= (max((arr_23 [i_5] [i_7] [i_7] [8]), (-2147483647 - 1)));
                }
            }
        }
    }
    #pragma endscop
}
