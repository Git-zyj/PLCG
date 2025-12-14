/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((+(((!-759232978) ? -1355268856 : -19))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (max(var_12, (((((((((var_0 ? -1355268874 : -1355268874))) ? 1355268860 : 129))) ? (~1) : (!var_9))))));
        arr_2 [i_0] = (!var_10);
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_9 [i_1] [i_3] = 34;
                    var_13 &= ((((var_1 ^ 1355268856) ? 1355268874 : (134217727 || -1355268856))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_15 [i_1] [i_5] = (-9223372036854775807 - 1);
                                arr_16 [i_1] [i_5] = (((((var_8 ^ -86) ? (-127 - 1) : var_1)) >> (var_2 - 9695)));
                                var_14 += (-var_1 % -1355268855);
                            }
                        }
                    }
                }
            }
        }
        var_15 = (!var_8);

        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_26 [i_9] [i_8 - 1] [i_7] [i_7] [i_6] [i_1] |= (((!var_5) ? var_8 : 1355268867));
                            var_16 = (!-1355268877);
                            var_17 -= -224;
                            var_18 = (max(var_18, var_0));
                        }
                    }
                }
            }
            var_19 *= 1355268856;
            arr_27 [i_1] &= (~1);
            arr_28 [i_6] [i_1 + 1] = ((~((0 ? var_7 : var_6))));
            arr_29 [4] [4] = 4;
        }
        var_20 ^= (13563716534952058154 * var_8);
    }
    var_21 = (max(var_21, 7900472522915138482));

    /* vectorizable */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        arr_34 [3] = (((~var_8) & var_1));
        arr_35 [i_10] = var_4;
        var_22 ^= 1;
        var_23 = (var_6 != var_9);
    }
    #pragma endscop
}
