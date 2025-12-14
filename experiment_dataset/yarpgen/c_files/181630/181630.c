/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_1] [i_1] = (min(1, (max(var_5, (min((arr_1 [i_2]), var_1))))));
                                var_12 = (((arr_0 [i_0]) ? ((((max((arr_2 [i_0]), var_5))) ? ((-32747 ? 7854753439705163388 : 32763)) : (~953))) : (((3533399687 * (arr_0 [i_0]))))));
                            }
                        }
                    }
                }
                var_13 = (arr_10 [i_1] [i_1] [i_1 + 1] [0] [i_1 + 1]);
                var_14 ^= arr_7 [i_0] [i_0];
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_15 ^= max((((max((arr_14 [4]), (arr_15 [1] [i_6] [0]))) ^ (min((arr_14 [8]), var_9)))), ((((min((arr_19 [i_5] [i_5] [i_5] [i_5] [10] [10]), (arr_13 [i_5] [10]))) ^ -954))));

                            for (int i_9 = 2; i_9 < 20;i_9 += 1)
                            {
                                var_16 -= (((arr_15 [i_5] [i_5] [i_5]) ? 953 : 2097151));
                                arr_24 [i_5] [i_5] [i_5] [i_5] [i_6] [i_5] = var_4;
                                arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] = (max(1073741823, ((min((var_4 < 953), (arr_14 [i_5]))))));
                            }
                        }
                    }
                }
                arr_26 [i_5] [i_5] = 701527705;
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            arr_32 [8] [i_5] [10] = (-953 & 1);

                            for (int i_12 = 0; i_12 < 22;i_12 += 1)
                            {
                                var_17 = (((max(((1073741823 ? (arr_28 [2] [i_10] [i_10]) : var_2)), ((((arr_19 [i_5] [i_5] [i_5] [12] [i_5] [i_12]) >= var_6)))))) ? (((((var_11 - (arr_33 [i_5] [i_5] [i_10])))) ? (arr_20 [i_5] [i_5] [i_10 + 1] [i_5] [i_5] [14]) : (((arr_33 [i_12] [i_6] [i_5]) ? 32746 : var_11)))) : (((var_3 * var_2) ? (var_0 | var_11) : var_9)));
                                arr_35 [i_5] [i_5] [i_5] [7] [i_6] [i_5] = ((((arr_20 [i_5] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [9]) || (arr_34 [i_5] [i_5] [i_5] [16] [i_12] [i_5] [i_5]))));
                            }
                            arr_36 [i_11] [i_5] [i_5] [1] [i_5] [1] = (max((max((arr_23 [i_5] [i_6] [i_5] [1] [i_5]), (arr_22 [i_5] [i_5] [i_6] [i_5] [20]))), 694402451440022934));

                            for (int i_13 = 0; i_13 < 22;i_13 += 1)
                            {
                                var_18 = ((-(arr_20 [i_5] [i_5] [i_11] [12] [12] [i_5])));
                                arr_39 [i_5] = (4294967295 <= 32);
                                arr_40 [i_5] [i_5] [i_5] [i_5] [i_5] = (min(2989987789, -25422));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 20;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 22;i_16 += 1)
                        {
                            {
                                arr_51 [i_5] [i_5] [i_5] = 1073741809;
                                var_19 ^= (arr_33 [i_5] [17] [i_15 - 1]);
                                arr_52 [i_5] [i_5] [i_5] [i_5] [1] = ((1073741829 ? 4891233509497813706 : 63));
                                arr_53 [i_5] [i_5] [i_5] [i_5] = ((((((121 ? 60 : (arr_48 [1] [i_6] [i_6] [1] [i_6] [i_6]))))) ? (arr_45 [i_5]) : (min((max(1235839592, (arr_46 [i_5] [9] [i_5]))), var_7))));
                                arr_54 [i_5] [i_5] [17] [17] [17] = ((!(((((1946623402 ? 2989987789 : (arr_29 [1] [i_5] [20] [i_5])))) || ((min(1619719135, -32747)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, -var_6));
    #pragma endscop
}
