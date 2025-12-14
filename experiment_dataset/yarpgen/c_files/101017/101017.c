/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((-19588 ^ ((-(var_1 - 80))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((+(((((max((arr_0 [i_0] [i_0]), var_8)))) + (10 + var_0)))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [1] [i_2] [i_0] = ((((((arr_8 [i_1] [i_2 - 1] [i_3] [i_3 + 1]) ? (arr_8 [i_1] [i_2 - 1] [i_1] [i_3 + 4]) : 1))) ? 1 : 1));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_16 = (((((32762 ? var_13 : 12))) <= 10738650155999692375));
                            arr_13 [i_2] [i_3 + 4] [i_4] = (((19596 / 1) <= var_6));
                            var_17 = ((~(var_10 & 3)));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3 + 3] [i_3 + 3] = (((((19592 + ((1 ? (arr_14 [i_0] [i_1] [i_2] [i_3 + 4] [i_3 + 4]) : (arr_8 [2] [i_2] [i_3] [i_5])))))) ? 11 : ((+((max((arr_3 [i_5]), var_3)))))));
                            var_18 = 117;
                            var_19 = (~1);
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_20 = ((-100 ? ((5232106297160811338 ? (arr_17 [i_2] [i_3 + 3] [i_6]) : (arr_15 [i_0] [i_1] [i_2] [i_3 + 2] [i_3] [i_6]))) : (arr_6 [i_2 - 1] [i_2])));
                            arr_19 [i_2] = var_3;
                            var_21 = (~((15365 + (arr_6 [i_0] [i_2]))));
                        }
                        for (int i_7 = 3; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_22 += var_12;
                            arr_24 [i_0] [i_2] [i_2] [i_2] [i_7 - 1] = (min((((var_7 ? ((max(4, var_8))) : (4 <= var_5)))), -1));
                        }
                        var_23 *= (((291319710 & var_13) ? (arr_8 [i_0] [i_1] [i_2] [i_3 - 1]) : 268435455));
                    }
                }
            }
            var_24 = min(127, (!1));
            var_25 = (max(var_25, (((((arr_7 [i_0] [2] [i_1] [i_1]) ? 18446744073709551615 : (arr_7 [i_0] [0] [0] [i_1])))))));
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_26 |= -19013;
            var_27 = 19965;
        }
        var_28 = 18446744073709551615;
        arr_29 [i_0] = (((((-8191 ? 252 : (((var_12 + 2147483647) << (var_4 - 21416)))))) ? ((((((arr_25 [i_0] [i_0] [i_0]) ? -1376679774 : var_10)) == var_3))) : (arr_14 [i_0] [8] [4] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_29 = ((((arr_31 [i_9] [i_9]) ? 2453897452 : -1738678256)));
            var_30 = (46164 > 1376679775);
        }
        var_31 = (max(var_31, ((((((8 ? 1 : 18446744073709551615))) ? (arr_33 [4] [4] [i_9]) : ((127 ? var_5 : -1376679776)))))));
        var_32 = (~((var_10 ? 1 : (arr_25 [i_9] [i_9] [i_9]))));
        var_33 = ((63000 ? (((15557657908804823087 ? (arr_0 [i_9] [i_9]) : 1))) : ((32767 ? var_12 : 2889086164904728528))));
    }
    #pragma endscop
}
