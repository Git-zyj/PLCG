/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((!12428772741541365510) ? ((min(((403957198 ? var_12 : var_11)), ((-2147483633 ? 1880079939 : 403957198))))) : ((((min(var_2, 21969))) ? (arr_0 [i_1]) : ((var_2 ? 12428772741541365510 : var_2)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_16 *= ((((arr_0 [i_3]) ? (arr_0 [i_0]) : var_7)) * (!-2004372083));
                            var_17 ^= ((((!(arr_4 [i_3] [9] [1]))) ? ((max((arr_4 [i_3] [i_1] [i_0]), (arr_4 [17] [i_1] [i_2])))) : (min(var_9, (arr_4 [i_3] [i_2] [i_1])))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (((((!var_13) != ((4 ? var_2 : var_9))))) % ((var_1 * (max(var_5, var_10)))));

    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_19 = (arr_9 [i_4]);
        var_20 = (max(var_20, ((((!403957198) ? ((16207075796051662367 << ((((-2004372099 ? (arr_7 [i_4] [i_4] [i_4] [i_4] [i_4]) : 1)) + 1067623403)))) : (((((arr_8 [20] [i_4] [i_4] [i_4] [0]) <= 15760440703496243725)))))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_20 [i_6] [i_7] = (arr_11 [i_4]);

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_21 = var_1;
                            arr_24 [i_4] [i_5] [i_6] [i_7] [3] [i_8] = (!-12428772741541365496);
                            var_22 = (25 % 14647548196508179158);
                            var_23 &= (((min((-306785151 / 238), ((var_7 / (arr_14 [i_4] [i_5] [i_5])))))) && (((4294967285 << (65535 - 65530)))));
                            var_24 = (min(var_24, ((((((arr_8 [14] [i_5] [i_6] [i_5] [i_5]) * 12428772741541365505)) - (((2239668277657889237 + ((-(arr_17 [i_8] [i_5] [i_5])))))))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            arr_29 [i_4] [i_4] [i_6] [i_7] [i_4] [9] [i_5] = ((993612653 ? var_5 : (arr_28 [i_9 - 1] [i_9] [i_9 - 1] [i_9 + 1] [i_6] [i_6] [i_6])));
                            arr_30 [i_6] [8] [i_7] [i_6] [i_6] [i_4] [i_6] = 250;
                            var_25 += (!-339773171);
                        }
                        var_26 = (min(var_26, ((((arr_8 [i_4] [1] [i_4] [i_4] [i_5]) ? (-523029913 + 2004372079) : (arr_2 [i_6]))))));
                        arr_31 [i_7] [i_6] [i_7] [i_7] [i_6] [i_6] = 2;
                        arr_32 [i_7] [i_6] [i_4] [i_6] [i_4] = 12916;
                    }
                }
            }
        }
        var_27 = arr_19 [i_4];
    }
    var_28 = (max(var_28, (((var_7 ? (min(var_7, ((65517 ? var_14 : var_4)))) : (max((var_11 | var_4), var_2)))))));
    #pragma endscop
}
