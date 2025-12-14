/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(160, var_6);
    var_12 &= ((!(4294967295 > 9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((-((((255 / 36) < ((117 ? 254 : (arr_1 [i_0]))))))));
                var_13 -= (88 & -173);
                arr_8 [19] [6] [0] = (((((min((arr_0 [i_1]), 1)))) << ((((min(var_3, 536870911))) - 177))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [19] = (1338859746 >= 120);
                            arr_14 [i_1] [i_2] [13] = 136;
                            var_14 -= var_3;
                            var_15 = ((181 ? ((~((min(163, 83))))) : 112));

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_16 -= 255;
                                var_17 *= max(1166947849, 120);
                                arr_18 [3] [1] [18] [2] &= (max(1430626057, ((4 ? 1 : 1358376005))));
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 19;i_5 += 1)
                            {
                                var_18 *= 192;
                                var_19 = (((118 == var_3) <= 255));
                                arr_22 [i_0] = (var_4 ^ 2956107549);
                            }
                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 20;i_6 += 1)
                            {
                                arr_26 [i_0] [9] [i_2] [2] [i_6] [12] = (((arr_24 [i_6 - 1] [19] [19] [9] [i_3 + 4] [7] [i_1]) ? 0 : (arr_24 [i_0] [i_0] [17] [4] [9] [12] [9])));
                                arr_27 [17] [14] [i_2] [i_2] [12] [i_6] = var_9;
                                var_20 *= ((-(((!(arr_10 [i_0] [16]))))));
                                arr_28 [3] [19] [2] [i_2] [i_2] [7] [i_6] = (941583596 < var_7);
                            }
                            for (int i_7 = 0; i_7 < 21;i_7 += 1)
                            {
                                arr_32 [10] [2] [i_1] [5] [i_7] [i_7] = ((+((var_6 ? (arr_21 [i_0] [14] [i_3 + 1] [i_3] [i_7]) : ((var_1 ? 8 : 24))))));
                                var_21 -= (!255);
                                arr_33 [14] [i_1] [i_7] [i_2] [12] [i_7] [4] = (min((~251), (min(0, (2956107547 | 19)))));
                                var_22 = ((max((arr_20 [i_1] [i_3 - 1] [20] [11] [i_7] [i_7]), (var_5 * 221))) >> (var_3 - 176));
                                var_23 = (((arr_11 [i_0] [6] [14] [14]) * (arr_21 [2] [20] [15] [i_3] [i_3 + 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
