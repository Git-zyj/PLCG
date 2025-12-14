/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((max(((3521854456 ? var_13 : var_2)), ((var_8 ? 12007 : var_13)))), var_10));
    var_20 = 14070288904527567480;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_21 = (min(var_21, 53507));
        arr_3 [i_0] = ((~(arr_0 [i_0])));
        var_22 -= (!51847);
        arr_4 [i_0] = 12253;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_23 = min(1, 1);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_24 ^= (arr_13 [1] [7] [1] [i_3] [1] [7]);
                                var_25 = (max(var_25, -1));
                            }
                        }
                    }
                    var_26 = ((((((arr_6 [i_1] [i_3]) + var_5))) ? ((((arr_14 [10] [1] [10] [i_3]) + (arr_14 [i_1] [i_1] [i_3] [i_2])))) : (min((arr_8 [i_1] [i_2] [i_3]), (2534257336 + 65535)))));
                    var_27 = ((!(arr_9 [i_1] [i_2] [i_3] [i_3])));

                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {

                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            var_28 = (max(-53507, (2054395698 * -18)));
                            var_29 = (min(var_29, (min(((((((3953 ? var_11 : 1))) < (min(3348327836714704840, 9223372036854775807))))), (arr_6 [5] [24])))));
                            arr_22 [i_1] [i_2] [i_3] [11] [i_6 + 1] [19] [7] = (((17659467624339853017 ? 252 : 892898060)));
                            var_30 = (min((arr_21 [15]), 45));
                        }
                        var_31 -= (458752 || 787276449369698598);
                    }

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_32 -= ((((((arr_21 [i_3]) != (arr_21 [i_8])))) < (((min(1, 18446744073709551612))))));
                        arr_25 [i_1] = -274877874176;
                        var_33 ^= 0;
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            arr_28 [i_1] &= ((((min((arr_19 [i_1] [i_9]), 36)) >> (-var_10 - 16630708994627374563))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    {
                        arr_35 [i_1] = ((var_18 ? (arr_29 [0] [i_10]) : 1961294803));

                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            arr_38 [8] [9] [i_10] [i_11] [i_10] [22] |= (((3402069211 ? (arr_23 [i_1] [i_9] [i_10] [i_11] [24]) : 4577)));
                            arr_39 [6] [1] [i_10] [1] [i_10] = (max((((arr_19 [i_1] [i_1]) & (max(117, 3402069211)))), 3402069209));
                            var_34 = (max(var_34, var_9));
                        }
                    }
                }
            }
            var_35 = ((min((arr_19 [i_9] [i_1]), 8191)));
        }
        arr_40 [i_1] [i_1] = ((6054635788746670714 != ((min((((var_6 + 2147483647) >> (((arr_12 [1] [i_1] [1]) + 84)))), 120)))));
    }
    #pragma endscop
}
