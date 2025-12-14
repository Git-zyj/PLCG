/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = (max(var_12, (((-(((~var_2) ? ((var_5 ? var_2 : var_6)) : (~var_9))))))));
    var_13 = (max(var_13, ((((-var_3 | (var_9 && -99)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 -= ((((!((((arr_1 [15] [15]) ? 53 : var_8))))) ? ((((684379073 && var_0) ? (!3459123758684950322) : (min((arr_2 [i_0]), (arr_0 [4])))))) : (max((min(var_9, 684379073)), (((arr_2 [i_0]) ? var_4 : var_1))))));
                var_15 -= (!var_0);

                /* vectorizable */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    var_16 = ((1757191831 ? (~var_3) : 3610588198));
                    arr_10 [i_2] [21] [23] = 11719476668933693436;
                    var_17 = (min(var_17, 1));
                    arr_11 [18] [i_2] [i_2] [i_0] = (arr_0 [2]);
                    arr_12 [4] [i_2] = (((arr_5 [i_2 + 1] [i_2 - 1]) ? ((121 ? var_1 : (arr_0 [i_0]))) : (var_9 - 120)));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    var_18 = (arr_13 [i_0] [22] [i_3 + 1]);
                    var_19 = (max(var_19, ((((!127) ? (var_9 && 113) : (arr_14 [i_0] [i_3 + 1] [19]))))));

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_20 = -99;
                        arr_19 [i_4 - 1] [i_4 - 1] [i_1] [i_4 - 1] [i_0] [i_4 - 1] = (arr_16 [i_4 - 1] [18] [i_3 + 1]);
                        arr_20 [1] = ((var_1 ^ (arr_3 [i_4 - 1])));

                        for (int i_5 = 1; i_5 < 24;i_5 += 1)
                        {
                            var_21 = ((0 * (126 && 3601420483)));
                            var_22 ^= var_1;
                            var_23 = (((arr_21 [i_1] [i_1]) ^ 12143646527714909166));
                        }
                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            var_24 = (min(var_24, (((!((((arr_23 [13] [i_4 - 1] [20] [i_1] [i_0]) ? (arr_4 [i_4 - 1] [1] [8]) : (arr_3 [i_0])))))))));
                            var_25 = 4674061389024111396;
                            var_26 -= var_3;
                            var_27 = (max(var_27, (arr_18 [i_0] [i_0] [i_3] [i_4 - 1])));
                            var_28 = (max(var_28, ((((arr_17 [i_0] [i_1] [i_3] [i_3 - 1]) ^ 121)))));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_29 ^= (((arr_9 [i_3 - 1] [i_0] [i_4 - 1]) ? (arr_25 [i_3 - 1]) : (((arr_25 [i_1]) ? (arr_6 [i_3] [i_0]) : (arr_14 [i_0] [i_1] [i_0])))));
                            arr_28 [i_0] [i_0] [i_3 - 1] [21] [i_0] [18] [0] = ((684379122 <= (arr_1 [i_4 - 1] [i_4 - 1])));
                        }
                    }
                }
                for (int i_8 = 1; i_8 < 24;i_8 += 1) /* same iter space */
                {
                    var_30 ^= ((((var_4 <= (arr_14 [4] [12] [i_8 - 1]))) && ((((arr_14 [18] [16] [i_8 - 1]) ^ (arr_14 [i_8] [i_1] [i_8 - 1]))))));
                    var_31 -= ((var_10 ? (((-121 ? (arr_13 [i_8 + 1] [i_8 + 1] [i_8 + 1]) : (792439291 && var_0)))) : var_6));
                }
            }
        }
    }
    #pragma endscop
}
