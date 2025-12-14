/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_4 * 0) ? (((((max(var_6, -1208440752))) ? (min(-1208440738, var_6)) : var_1))) : var_10));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (min(var_18, (((~(min(((max(-1, var_6))), (arr_0 [i_0] [i_0]))))))));
        var_19 = ((-6 ? 1 : 1208440752));
        var_20 += (((-2147483647 - 1) ? (!110) : var_13));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        var_21 *= (max(var_2, 1208440769));
                        var_22 = (min(var_22, (arr_8 [i_0] [i_0] [i_1] [i_0] [i_1])));

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_23 |= 57526;
                            var_24 = (var_9 * -1208440752);
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_25 ^= (min(7993, var_14));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = (((((0 ? (min((arr_9 [i_0] [i_3] [i_3] [i_3] [i_3]), -864384148)) : (((!(arr_14 [i_1] [i_3] [i_3]))))))) ? ((max((arr_12 [i_3] [i_3] [i_3] [i_2 + 1] [i_3] [i_3 - 2]), (arr_14 [i_2 - 2] [i_3] [i_3])))) : (((arr_6 [i_3 - 2] [i_2 - 3] [i_2 + 1]) << (16111883501914042536 - 167)))));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_26 = ((var_0 != (~1040240664)));
                            var_27 = (~1040240656);
                        }
                        arr_20 [i_3] [i_3] = 0;
                    }
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        var_28 |= (((((var_15 - ((min(var_11, var_8)))))) ? (min(((var_0 ? var_5 : var_9)), (var_5 ^ 676640948))) : ((var_5 ? (arr_6 [i_2 + 2] [i_2 - 4] [i_7 + 1]) : (arr_6 [i_2 + 2] [i_2 - 4] [i_7 + 1])))));
                        var_29 = (arr_23 [i_0] [i_0] [i_0] [i_0]);
                        var_30 = min(var_11, 40118);
                        arr_25 [i_7] [i_7] [i_7] = 15850928272828100270;
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_31 ^= 0;
                                arr_32 [i_1] [i_1] = max((((var_14 ? (arr_0 [i_2 + 1] [i_2 + 1]) : (arr_0 [i_2 + 2] [i_2 + 2])))), (((arr_0 [i_2 - 1] [i_2 - 1]) ? 3366812394 : 110)));
                                var_32 ^= ((((arr_24 [i_0] [i_1] [i_2 + 2] [i_8] [i_0]) / (arr_24 [i_0] [i_0] [i_0] [i_1] [i_0]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 = var_7;
    var_34 = ((((!((min(var_4, var_9)))))));
    #pragma endscop
}
