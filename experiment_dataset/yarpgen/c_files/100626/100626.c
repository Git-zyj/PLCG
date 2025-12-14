/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((var_5 ? (((min(1, var_6)))) : ((var_4 ? var_0 : var_8)))), (((1847659295 ? -1847659296 : -1847659296)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = (arr_0 [i_2 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = (arr_3 [1]);
                                var_12 = 10685829689506361375;
                            }
                        }
                    }
                    var_13 = (arr_5 [16] [i_0]);
                    var_14 = 1847659295;
                    arr_15 [i_2] = (((arr_5 [i_2] [i_1]) / ((-1847659309 ? -37 : 1539606553643398424))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_15 = ((+(((arr_3 [i_5]) ? (((max(1, (arr_0 [16]))))) : (max(-2090425552656028690, 1))))));
        var_16 = -1847659301;
        arr_20 [1] [i_5] = (min((((!(!1)))), (min((((65515 ? (arr_13 [10] [i_5] [i_5] [i_5] [i_5]) : (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5])))), (max(1513035896083610189, 0))))));

        /* vectorizable */
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            var_17 = ((0 ? (-32767 - 1) : ((((arr_7 [1]) < (arr_3 [i_6]))))));
            var_18 *= (((arr_10 [i_6 + 1] [i_6] [17] [i_6] [i_6]) - (arr_5 [i_5] [i_5])));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_19 = ((~(arr_6 [i_6] [i_8] [3] [i_8])));
                            var_20 = ((1688176257 ? (((arr_23 [i_5] [i_5] [i_6]) ? 1 : 1)) : (arr_0 [i_5])));
                            var_21 = (((arr_29 [i_6 - 2] [i_6]) && (arr_29 [i_6] [i_6])));
                            var_22 &= (arr_23 [i_5] [i_6] [i_5]);
                            var_23 = (-((0 ? 18446744073709551615 : 39872)));
                        }

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_24 = -25639;
                            var_25 = ((!(((851059508 ? 1847659294 : 4018293208102219493)))));
                            arr_34 [i_6] [i_6] = (2665200432306398018 < 0);
                            var_26 = (((((4018293208102219488 ? 43886 : 3384475606))) ? ((0 ? 1 : 4294967282)) : (((21509 ? 1 : 20)))));
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_39 [1] [i_5] [i_6] [1] [i_8] [i_6] = (arr_19 [10] [i_8 - 1]);
                            var_27 = ((52687 ? (arr_33 [i_6] [i_6]) : -851059512));
                            var_28 = ((~(((arr_21 [i_5] [i_11]) ? (arr_18 [12]) : (arr_12 [9] [9] [1])))));
                        }
                    }
                }
            }
            var_29 = (((~1) ? (((4333 ? 192 : (arr_3 [1])))) : (((arr_23 [i_6] [i_5] [i_6]) ? (arr_2 [i_6]) : 0))));
        }
    }
    #pragma endscop
}
