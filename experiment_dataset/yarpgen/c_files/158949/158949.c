/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_15 += ((-(((arr_0 [i_0 + 1]) ? ((var_12 ? -878148508 : var_12)) : var_9))));
        var_16 += (18446744073709551613 ^ 255);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {
                        var_17 = -878148487;

                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_18 = var_8;
                            var_19 = (arr_10 [i_1] [i_2] [i_1] [i_2] [i_1] [i_1]);
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            var_20 ^= ((-7637351637881214574 - ((var_1 ? 18446744073709551613 : -878148515))));
                            var_21 = ((((var_11 ? -7637351637881214574 : var_14)) + (arr_12 [i_2] [i_2 + 2] [i_2 + 2] [i_2])));
                            var_22 |= (var_4 ? ((var_14 ? var_6 : 0)) : 52152);
                            arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] = ((var_13 ? var_14 : -1442302883));
                        }
                    }
                }
            }
            var_23 ^= ((((var_1 ? 13668782990432244329 : var_8)) / var_12));
            var_24 = -878148494;
        }
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            var_25 = (((1 & var_11) >= var_10));
            arr_20 [i_7] = (arr_3 [i_1]);
        }
        var_26 = (min(var_26, ((((((((7637351637881214574 ? 7112753045768840915 : 1)) * (var_6 / var_10)))) ? ((-9 * ((4 ? 13668782990432244349 : 8350755325828546028)))) : 1)))));
    }
    var_27 = var_3;
    #pragma endscop
}
