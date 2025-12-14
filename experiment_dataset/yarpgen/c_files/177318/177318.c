/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_0;
    var_20 ^= var_18;
    var_21 = var_18;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (~17377857742068232555);
        var_22 = (((!(arr_1 [i_0]))) ? (((+(((arr_2 [i_0] [i_0]) ? var_0 : var_5))))) : (((((arr_2 [i_0] [i_0]) % (arr_0 [i_0]))) * (((-27385 * (arr_1 [13])))))));
        var_23 = 13130;
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1] = (min(32, 26032));
        arr_9 [i_1] = ((((arr_4 [7]) % ((1867272109 ? (arr_5 [i_1 + 1]) : (arr_5 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_24 = ((-423626057 ? (((max((arr_6 [10] [i_2]), 31)) % ((((arr_15 [i_3] [i_3] [i_3] [i_3]) % 93))))) : 1));

                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        var_25 *= (1972200376 % 1252695202);
                        var_26 &= ((arr_13 [i_1] [i_1 + 1] [i_1 - 2] [6]) ? (arr_13 [1] [i_1 + 1] [1] [1]) : (max((arr_13 [1] [i_1 + 1] [i_1 - 2] [8]), 48780)));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_21 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 1] = ((((min((arr_16 [i_5] [5] [i_1] [1]), 53))) ? ((16206 ? (arr_20 [i_1] [i_1]) : ((((arr_7 [i_1]) ? var_16 : (arr_4 [i_1])))))) : (arr_19 [i_1 - 2] [i_2] [i_5])));
                            var_27 = max((((((((arr_19 [i_3] [i_3] [i_3]) / 1550444546))) ? 8398 : var_18))), (max((~var_8), ((24932 ? (arr_18 [i_1] [i_2] [i_3] [i_3] [i_4 - 1] [i_2]) : var_3)))));
                        }
                        arr_22 [i_1] [i_2 + 1] [i_1] = (arr_20 [i_1] [i_2]);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_28 = (min(var_28, var_10));
                            arr_28 [i_1] = ((!(((~(min(1, var_10)))))));
                        }
                        arr_29 [i_3] [i_1] = (((((((arr_4 [i_1]) % 1152921504606846960))) ? ((var_0 ? 62 : (arr_27 [i_2 - 4] [i_1 - 2] [i_2 - 4] [i_6] [i_2 - 4] [i_2 - 1]))) : var_9)));
                        arr_30 [i_1] = (min((((arr_7 [i_1]) ? (arr_7 [i_1]) : var_17)), ((max(var_17, (arr_7 [i_1]))))));
                        var_29 = var_18;
                    }
                }
            }
        }
    }
    #pragma endscop
}
