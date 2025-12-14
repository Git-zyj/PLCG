/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~(((14974233013859284175 + 1061372328) ? (~var_11) : (max(3124186347, var_1)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_18 = ((-595591476 ? ((~(((arr_0 [i_0]) - var_3)))) : ((min((arr_0 [i_0]), 2046334379)))));
        var_19 = ((var_0 ? ((((max(1, 12374942662192686384)) < (((~(arr_1 [6] [6]))))))) : var_13));
        var_20 = (max(var_20, ((~(((((~(arr_0 [i_0])))) ? (max((arr_0 [i_0]), var_1)) : (arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_21 = (max(var_21, (595591476 & 2046334376)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_22 = 6907545571095716825;
                                var_23 = (max(var_23, (((~(((((var_0 ? -6074282828400859970 : var_14))) ? (114 > 3124186347) : var_3)))))));
                                var_24 = (((((~(1 ^ 212)))) ? ((~(~-6907545571095716816))) : var_4));
                                var_25 = (~var_0);
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_26 = (max(var_26, (((1 ? -3832291809578613021 : 2305843009213693951)))));
                    var_27 = (~((803565425 ? (arr_17 [i_1 + 2]) : (arr_17 [i_1 + 3]))));
                }
            }
        }
        arr_19 [i_1] [i_1] = var_15;

        for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
        {
            var_28 = ((~(max(((((arr_2 [i_1] [i_1]) ? 1 : (arr_16 [i_8 + 1] [i_1] [i_1])))), (arr_13 [10] [i_8] [i_8 - 2] [i_8 - 1] [10])))));
            arr_22 [1] = (min(((-2147483640 ? ((var_3 ? var_14 : (arr_20 [i_1] [i_8 - 2]))) : (max(var_4, var_8)))), (~var_0)));
            var_29 = (max(var_29, 6907545571095716820));
        }
        for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
        {
            arr_26 [i_1 + 4] [i_1] = (~((((var_14 ? (arr_6 [i_1] [i_1] [i_9] [3]) : 6907545571095716830)) % (~1))));
            var_30 = (min(var_30, ((~(((-6907545571095716825 != -6907545571095716851) ? (max((arr_16 [i_1] [9] [0]), 5072)) : (arr_16 [i_9 + 1] [i_9 - 2] [i_1 + 2])))))));
        }
    }
    var_31 += ((var_10 ^ ((var_5 % ((142 ? 232 : 3124186321))))));
    var_32 = min(((var_1 % (~12374942662192686399))), ((max((2743496291987826825 || var_3), var_14))));
    #pragma endscop
}
