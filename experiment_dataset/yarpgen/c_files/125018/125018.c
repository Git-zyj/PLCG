/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((-((var_6 ? 2826776104 : (~2826776090)))));
    var_13 ^= ((-((min(-847572368, 2660611381)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((min(97, (min((arr_2 [0]), 4201547820))))))));
                var_15 = (max(((max((arr_5 [i_0 - 1] [i_0]), 22))), (max((max(1, 93419469)), (arr_3 [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((min((min((arr_7 [i_0] [i_2 - 1] [0] [0]), 64)), (((!(((-(arr_3 [4]))))))))))));
                                var_17 = (max(((((max(2891030082, (arr_9 [i_1])))) ? 101 : -4187114322706735855)), (((!(arr_10 [i_1] [i_0] [i_2 - 2] [i_4] [i_4] [i_4] [6]))))));
                                var_18 = (arr_3 [i_0]);
                                var_19 = (max((((-(arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2])))), (max((max(4294967295, 50898)), ((max(17, (arr_7 [i_0] [i_1] [i_0] [i_1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, ((~(min(((min(246, 156))), (max(var_9, var_5))))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {

                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        var_21 -= (max((arr_18 [i_8 + 2] [i_6 - 2] [i_7]), (arr_21 [i_6 + 1] [i_8 + 2] [i_5] [8])));
                        arr_25 [i_6] = (arr_17 [i_6 + 2] [i_6 + 2]);

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_22 -= (arr_24 [i_6 - 1] [i_6 - 2] [i_9] [i_8 + 2]);
                            arr_28 [i_7] [i_6] [i_9] = (arr_14 [i_5]);
                        }
                        for (int i_10 = 2; i_10 < 14;i_10 += 1)
                        {
                            arr_32 [i_5] [1] [i_6] [i_7] [1] [i_10 - 1] [1] = -104;
                            arr_33 [10] [i_5] [i_6] [11] [i_8] [i_8] [i_8] = min(((((max(2891030082, 1623517487))) ? 100 : ((max((arr_19 [i_5] [i_5]), -1357735119))))), ((((~(arr_30 [i_5] [i_5] [12] [i_6] [i_5] [11]))))));
                            arr_34 [i_8] [i_8] [i_6] = ((((!(arr_16 [i_5] [i_5] [i_5]))) ? -8226959884324106061 : (min(-2826776090, ((((arr_14 [i_5]) ? (arr_17 [i_7] [i_7]) : 1470710124)))))));
                            var_23 = ((3344710276 ? 0 : 1));
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            arr_37 [i_5] [i_6] [i_7] [i_5] = (max(1, (arr_13 [i_5])));
                            var_24 = ((!(arr_23 [i_5])));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_25 = ((!(arr_29 [i_12] [17] [i_7] [i_6 + 1] [i_5])));
                            var_26 = 113;
                            var_27 *= 55;
                        }
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        var_28 = (((~(arr_23 [i_13]))));
                        arr_42 [i_5] [i_5] [i_5] [15] [i_7] [i_6] = (((!55) ? (min(2826776091, (max(4201547822, 82961511)))) : 210));
                        var_29 = ((1 ? 1 : (min(93419476, 5673794698397605571))));
                    }
                    var_30 += (((((-(arr_29 [i_5] [5] [i_6] [i_7] [i_7])))) ? (arr_16 [i_6] [i_6 + 1] [i_6]) : (arr_35 [i_5])));
                }
            }
        }
    }
    #pragma endscop
}
