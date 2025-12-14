/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 = (((~var_6) && 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = var_14;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_19 = ((((((1759782501 ^ -16811) ? ((-(arr_1 [14] [14]))) : (((-16805 <= (arr_5 [i_0] [i_0] [i_2]))))))) ? (((((((arr_6 [i_1]) ? var_13 : (arr_7 [6] [6] [5] [i_3 - 2]))) != 244)))) : (arr_5 [i_0] [i_0] [i_2])));

                            for (int i_4 = 2; i_4 < 14;i_4 += 1)
                            {
                                var_20 = (min(var_20, (((21206 >= -21207) / ((max((max((arr_13 [0] [i_2] [0] [i_2] [i_0] [0]), 21202)), -16797)))))));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [8] [10] [0] &= ((((((21220 ? -16796 : (arr_9 [i_0] [i_1] [4] [i_2]))) >= ((((arr_0 [i_2] [i_3]) <= 78))))) ? (arr_6 [i_0]) : -1));
                            }
                            for (int i_5 = 2; i_5 < 12;i_5 += 1)
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_1] = ((3229519610 ? 4095 : (arr_4 [13])));
                                arr_18 [i_1] = (((max(((min(-16811, var_6))), 706576527)) ^ (((((arr_16 [i_1] [13]) != (arr_7 [i_3] [i_1] [5] [i_0])))))));
                                var_21 = (arr_9 [8] [9] [11] [i_5]);
                                var_22 ^= ((((var_14 ? 95 : (arr_4 [i_0]))) ^ ((~(arr_4 [i_2])))));
                                var_23 = (((((arr_13 [4] [i_5] [i_5] [i_5] [i_1] [12]) ? (((-1 != (arr_5 [i_0] [i_2] [i_0])))) : -1))) ? ((min((arr_1 [i_3 + 2] [i_5 + 2]), var_15))) : (((arr_8 [i_0] [i_0] [i_0] [i_0]) % -21218)));
                            }
                            arr_19 [i_0] |= (((arr_6 [i_0]) != (arr_16 [i_0] [3])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_24 = (min(var_24, -32748));
                            var_25 = arr_15 [i_0] [5] [i_6] [i_7 - 1] [i_7] [i_1];
                            arr_25 [i_0] [i_1] [i_1] = var_5;
                            var_26 = ((-2147483647 - 1) + 1);
                            var_27 = 16831;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
