/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 = (min((max(var_11, var_16)), ((-var_18 ? (255 + 9365369699836558963) : 1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_3] [i_4] [i_1] = (((((max(-104, 0)))) == var_6));
                                var_22 = ((((!(((1 ? 56156 : 5291273647853352438))))) ? (~var_3) : ((var_3 ? (arr_7 [i_1] [i_1]) : var_18))));
                                var_23 = (max((arr_5 [i_2] [i_3]), var_15));
                                arr_12 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0] = ((!(((((arr_9 [i_0] [i_2] [i_3] [i_2]) ? (arr_7 [i_0] [i_1]) : 32))))));
                            }
                        }
                    }
                    var_24 = -4294967293;

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_25 = (max(var_25, ((((arr_6 [i_0] [i_0] [i_0] [i_1]) ? (arr_2 [i_5]) : (arr_2 [i_0]))))));
                        var_26 -= (((var_6 << var_8) ? (arr_1 [i_0]) : 56998));
                    }
                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        var_27 |= ((((~(1 & 3496031726))) >> (((var_0 * var_18) - 186184221))));
                        var_28 = (max(var_28, 183));

                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            var_29 = ((min(((var_16 & (arr_16 [i_2] [i_1]))), (arr_20 [i_6 + 1] [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 2] [i_7 - 1] [i_7 - 1]))));
                            var_30 = 5291273647853352442;
                        }
                        for (int i_8 = 3; i_8 < 24;i_8 += 1)
                        {
                            var_31 = ((~(~28096)));
                            var_32 = ((max((arr_10 [i_8 - 1] [i_8 - 1] [i_6 + 1] [i_6 - 1]), var_1)));
                        }
                        arr_24 [i_6] [i_6] [i_6] [i_6] = (~3831);
                    }
                    arr_25 [i_0] [i_0] [i_0] = (((arr_10 [i_2] [i_2] [i_2] [i_0]) ? (min(((var_4 ? 18446744073709551615 : var_8)), (((1 ? (-2147483647 - 1) : 5291273647853352441))))) : ((-((-(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
