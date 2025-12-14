/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = 143552238122434560;
                var_20 = (arr_0 [i_0] [i_1]);
                var_21 ^= (228 < (((arr_3 [i_0] [i_1] [i_1]) ? (arr_3 [i_1] [i_1] [14]) : var_18)));
            }
        }
    }
    var_22 &= ((+(((1 * var_0) ? var_8 : (33 - 1)))));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            {
                var_23 -= (max(228, var_1));
                var_24 = (min(var_24, (((-((38 ? 18446744073709551615 : (arr_4 [i_2 - 3] [i_2]))))))));

                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    var_25 &= var_4;
                    var_26 = ((var_16 ? (((var_7 * (!var_4)))) : (((max(14766999773050784697, (arr_2 [i_2 + 1] [i_3] [i_2 + 1]))) << (((arr_4 [i_3] [i_3]) - 236))))));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_27 = (min(var_27, (!20)));
                    var_28 = var_2;
                    var_29 = ((-((~((-4517905419396391273 ? var_8 : -2617771443950720242))))));
                }
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    var_30 = ((((-(arr_11 [i_2 - 1] [i_3 + 1])))) ? ((((arr_7 [i_2]) > 1))) : (arr_11 [i_2] [i_2 - 3]));
                    var_31 = (((arr_3 [i_2 - 2] [i_3] [i_3 + 2]) ? (((((!2617771443950720226) && 114)))) : (max((arr_18 [i_2 - 1] [i_2] [8] [i_6 + 1]), (((arr_14 [i_2] [i_3] [i_3]) ? 201 : var_2))))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_32 ^= var_5;
                        var_33 = ((6795 ? ((2920483317 ? 16 : var_6)) : -19214));
                        var_34 = (((arr_4 [i_2] [i_6 - 1]) ? 635191386 : (arr_0 [i_6] [i_6 - 2])));
                        var_35 = (1 - 127);
                    }
                }
            }
        }
    }
    var_36 += (var_16 <= -15540);
    #pragma endscop
}
