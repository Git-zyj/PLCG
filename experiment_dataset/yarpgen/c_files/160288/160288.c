/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((1103775760 ? 4294967295 : var_8)), 268304384));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_18 |= ((((((arr_2 [i_0]) >> (397030366912193086 - 397030366912193078)))) && ((min(((var_15 ? (arr_0 [i_1]) : -3739324830658562316)), 231633286)))));
                    var_19 = (min(var_19, (((234 ? 255 : -2147483647)))));
                }
            }
        }
    }

    for (int i_3 = 4; i_3 < 19;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            var_20 |= ((((min(var_9, (((arr_3 [i_4 + 1]) ? var_9 : 1))))) ? ((2820637426923065525 ? (arr_4 [i_4 + 1] [i_4 - 1] [i_3 - 2]) : (arr_4 [i_4 + 1] [i_4 - 1] [i_3 - 1]))) : var_2));
            arr_14 [i_4] [i_4] = ((670906469 ? 140 : -7));
            arr_15 [i_4] [i_4] = var_8;
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    {
                        var_21 = ((((min((arr_5 [i_3 - 2]), (arr_5 [i_3 - 3])))) + ((max((arr_5 [i_3 - 4]), (arr_5 [i_3 - 4]))))));
                        var_22 &= 12480149177422318989;
                        arr_20 [i_3] [i_3] [18] [i_4 - 1] [i_5] [i_6] &= ((arr_16 [i_5 - 2] [i_4 - 1]) - -88);
                        var_23 = ((max(var_8, (arr_6 [i_4] [i_4 + 1] [i_4 + 1]))));
                    }
                }
            }

            for (int i_7 = 3; i_7 < 18;i_7 += 1)
            {
                arr_23 [i_3] [7] [i_4] [16] = (((((~var_15) ? (58 | -21309) : (arr_7 [i_3] [i_7]))) / 51956));
                var_24 = (!((min(240, 1048575))));
                var_25 = ((-2698113536143705122 ? (((arr_4 [i_7 + 2] [21] [i_3 - 2]) ? (arr_4 [i_3 + 1] [i_4 + 1] [i_7 + 2]) : var_4)) : 127));
            }
            /* vectorizable */
            for (int i_8 = 1; i_8 < 16;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_26 = 1159099759;
                            var_27 = (min(var_27, var_16));
                        }
                    }
                }
                arr_33 [i_3 - 4] [i_4] [i_4] = -70;
                var_28 = (~var_9);
            }
        }
        arr_34 [i_3] [i_3 - 4] &= 20;
    }
    var_29 = (((((var_9 ? (var_15 >= var_5) : (-1174003503 != 4)))) != var_12));
    var_30 = var_12;
    #pragma endscop
}
