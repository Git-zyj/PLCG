/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_9 ? ((((4 == 18014398509449216) ? var_16 : (var_9 + var_17)))) : (max((((var_10 ? var_3 : var_3))), -18014398509449216))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_20 *= ((-83 ^ (((!(((-(arr_3 [7] [i_1 + 1] [i_0])))))))));

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_21 = ((((max((min(18380, 4294967295)), (min((arr_4 [i_0] [1] [i_2]), 0))))) ? (arr_7 [2] [i_1] [i_2 + 1] [i_1]) : (max(14, (((-(arr_7 [i_2] [i_2 - 1] [i_1] [i_0]))))))));
                    var_22 ^= (min(((((arr_6 [i_0 + 1] [i_0 + 3] [i_0 - 1]) > 4294967284))), (arr_2 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_23 = 22831;
                                var_24 += ((~(arr_7 [i_0] [i_0 + 2] [i_2 + 1] [i_2 - 1])));
                                arr_14 [i_0] [1] [i_2] [i_3] [i_4] |= ((~(((arr_6 [i_1] [i_4] [i_2 - 1]) % ((max(38, (arr_9 [11] [i_1] [i_2 - 1] [i_3] [12]))))))));
                                var_25 = -1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_26 = ((-22835 && (arr_11 [i_5] [5] [i_1 + 2])));
                                var_27 = ((((max(-22835, (arr_10 [i_0 - 2] [3] [i_0 - 3] [i_6] [i_0 - 2])))) ? (((((-(arr_6 [i_2 + 1] [i_5] [i_2]))) >= (arr_1 [i_1 + 2])))) : (~-22825)));
                                var_28 ^= (arr_2 [i_1 - 2]);
                                var_29 ^= (((arr_11 [i_6] [i_2 + 1] [i_1 + 2]) ^ ((-((24184 << (((arr_7 [i_0] [12] [i_2 - 1] [14]) - 12407359))))))));
                                var_30 = 7764620465258607134;
                            }
                        }
                    }
                    var_31 = (max(var_31, (((((9223372036854775807 - (arr_18 [i_0 + 2] [i_1] [i_1])))) <= -3947))));
                }
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    var_32 = ((((4100819853 >> (((arr_9 [i_1] [i_1 + 1] [i_7 - 1] [i_7 + 1] [i_7 + 4]) - 51246)))) | ((((arr_9 [i_0] [i_1 + 1] [i_1 + 1] [10] [i_7]) << (((arr_9 [i_1] [i_1 + 1] [i_7] [i_7 + 2] [i_1]) - 51260)))))));
                    var_33 = (max(var_33, 1675649032));
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    var_34 = (min(var_34, (((~(min(1, (arr_22 [i_0 + 3] [i_8]))))))));
                    var_35 |= ((arr_23 [i_0 - 2] [i_1 - 1] [i_8]) % (arr_20 [i_8] [i_1] [i_1 - 2] [i_0 + 3]));
                }
            }
        }
    }
    var_36 = var_14;
    #pragma endscop
}
