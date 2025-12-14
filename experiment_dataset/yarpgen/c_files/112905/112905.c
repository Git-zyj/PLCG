/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = max(var_11, ((23209 ? (min(5521, var_5)) : ((max((arr_0 [i_0]), (arr_1 [13])))))));
        arr_3 [i_0] = (((((23180 ? 23209 : 60021))) || ((((arr_1 [i_0]) - (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_12 -= (min(((min(5515, 1))), (((arr_7 [i_1]) & (max((arr_5 [i_1]), 12))))));
        arr_8 [18] = (((-5501 ? var_1 : ((18446744073709551604 ? var_10 : var_1)))) + (arr_7 [i_1]));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_14 [6] [i_3] [i_3] = (!var_5);
            var_13 = (arr_7 [i_3]);
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_14 = (arr_11 [i_2] [14]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_24 [i_2] [i_4] [1] [i_4] [i_7] [i_4] = (arr_15 [i_4]);
                                var_15 = var_11;
                                arr_25 [i_7] [i_6] [i_4] [i_4] [i_2] = ((251 ? ((((arr_15 [i_4]) ? 60018 : 60035))) : 2915938820));
                            }
                        }
                    }
                    arr_26 [i_4] = (((min((arr_11 [1] [i_4]), (arr_11 [i_4] [i_5]))) | ((~((var_6 ? (arr_17 [1] [i_4] [1] [i_5]) : (arr_12 [i_2] [i_4] [i_5])))))));
                }
            }
        }
        arr_27 [i_2] = var_11;
        var_16 = ((arr_17 [0] [i_2] [i_2] [i_2]) || var_1);
    }
    var_17 = (max(var_6, (18446744073709551615 < var_5)));
    var_18 = var_4;
    #pragma endscop
}
