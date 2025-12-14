/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_20 = ((((min(var_19, (arr_7 [i_3] [i_3] [i_3 + 3] [i_3 + 2])))) & -163305612));

                        for (int i_4 = 4; i_4 < 16;i_4 += 1) /* same iter space */
                        {
                            var_21 -= (!((max(262143, var_13))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] = (min(6, -4917620197349009114));
                        }
                        for (int i_5 = 4; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_22 -= (min((arr_13 [i_0] [i_1] [i_5] [i_3 + 1] [i_5 - 3] [i_0]), (((arr_13 [i_0] [i_1] [i_5] [i_3 + 4] [i_5] [i_1]) / (arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0])))));
                            arr_17 [i_2] [i_1] [i_2] [i_3] [i_5 - 2] = 30970;
                            var_23 = -15886;
                            var_24 = var_18;
                        }
                        arr_18 [i_0] [i_1] [i_2] [i_3] = (((((~var_8) ? (((var_12 > (arr_16 [i_3])))) : (arr_3 [i_1] [i_3]))) & (((arr_15 [i_0 - 1] [i_3]) ? -90 : -3460))));
                        var_25 = (min(var_25, 42065));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_26 = var_3;
                        var_27 -= ((var_4 ? (arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_2]) : (arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_28 = -14782729123390701766;
                        var_29 += ((~(~8)));
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            var_30 += (((arr_22 [i_8] [i_8] [i_8 - 1] [i_9]) ? (~var_18) : (arr_10 [i_1] [i_1] [i_2])));
                            var_31 = (((arr_9 [i_0 - 1]) ? var_10 : (arr_9 [i_0 - 1])));
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            var_32 = (arr_19 [i_0 - 1] [i_1] [7] [7]);
                            var_33 -= 1;
                            var_34 += (((((~var_11) + 2147483647)) << (((arr_29 [i_0 - 1] [i_2] [i_8 - 2] [i_8 - 2] [i_10]) - 1702100398366759786))));
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_35 = (arr_30 [i_0] [i_1] [i_2] [i_11]);
                            arr_37 [i_0] [i_0] [i_1] [i_1] [i_8] [i_11] = -11701587110155980561;
                        }
                        var_36 += ((-39 ? (arr_25 [i_0 - 1] [i_2] [i_8]) : var_15));
                        arr_38 [i_0 - 1] = ((-(arr_22 [i_1] [i_1] [i_2] [i_8])));
                    }
                    var_37 = (max(var_37, (((~(((!(7 || var_12)))))))));
                }
            }
        }
    }
    var_38 = (((var_9 ? 1 : var_8)));
    #pragma endscop
}
