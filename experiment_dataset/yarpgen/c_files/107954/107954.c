/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_13 += ((((max((var_1 >= var_2), 13564500079521953490))) ? 5317911298924189721 : ((var_0 * (3753022935 == var_6)))));
                    var_14 = (((var_5 & var_6) ? ((((var_11 ? var_0 : 15911319965647961935)))) : (var_1 == -71)));
                    var_15 = (((var_8 & var_6) | (~-9006485684872550779)));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_13 [i_4] = (127 & 5317911298924189721);
                            var_16 = ((-(var_12 * 0)));
                            var_17 &= (((var_8 - var_10) > (18446744073709551615 || var_5)));
                            var_18 ^= ((-980921852 - (((8588913631956991680 % 113) << (255 - 195)))));
                            var_19 = ((var_8 % ((-5317911298924189693 ? var_8 : (((max(var_4, var_3))))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 4; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_1] [i_1] [i_1] = (((-17 + 2147483647) >> (241 - 211)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_20 = (7 / var_11);
                                var_21 = -105;
                                var_22 = ((var_9 ? 3753022957 : 250));
                            }
                        }
                    }
                    var_23 = (min(var_23, 2544880527));
                }
                for (int i_8 = 4; i_8 < 12;i_8 += 1) /* same iter space */
                {
                    var_24 = ((((((-30 + -4601189778467647815) ? (((250 ? -25321 : var_8))) : (max(18446181123756130304, -9006485684872550779))))) ? ((~(max(16, var_1)))) : var_10));
                    var_25 += (((max(146, var_12))));
                }
                for (int i_9 = 4; i_9 < 12;i_9 += 1) /* same iter space */
                {
                    arr_28 [i_0] [i_1] [i_1] [i_1] = (max((max(11477411796075848223, var_6)), (((var_2 / var_8) ? (max(184, var_2)) : var_9))));
                    var_26 = (min(var_26, ((((-1 || var_8) * ((var_1 ? 11477411796075848236 : 9)))))));
                    var_27 += ((-(2098337261 & var_2)));
                }
            }
        }
    }
    var_28 = (max(var_28, (((max(var_9, var_12))))));
    #pragma endscop
}
