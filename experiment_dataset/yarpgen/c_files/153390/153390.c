/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] = (min((~0), (((arr_10 [i_0] [i_2]) ? 0 : (arr_2 [i_0])))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = ((((arr_1 [i_4]) || ((((arr_5 [i_0] [i_1] [i_2]) ? var_6 : -1))))) ? (((((arr_0 [i_0]) ? var_5 : -13)) + (-12 / var_8))) : (((127 ? ((75 / (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_12 [i_4] [i_2] [i_2] [i_3] [i_0] [i_3])))));
                                var_13 = max(((((arr_3 [i_4] [i_4]) < (max((arr_5 [i_0] [i_0] [i_0]), -6099540360710468215))))), (min(-62, 18446744073709551615)));
                                var_14 = (arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]);
                            }
                        }
                    }
                }
                arr_16 [i_0] = ((!((min(((118 | (arr_8 [i_1] [i_1]))), 150)))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = ((((max((~-1), (-6002030362942862874 & 3626901763855322097)))) ? (max((((arr_19 [i_5]) ? (arr_17 [i_5] [i_5]) : (arr_19 [i_5]))), (arr_18 [i_5]))) : ((((!((-3112393798441729801 || (arr_17 [i_5] [i_5])))))))));
        var_15 = (((arr_19 [i_5]) + ((-(255 / -82)))));
        arr_21 [i_5] = var_8;
    }
    for (int i_6 = 3; i_6 < 18;i_6 += 1)
    {
        var_16 *= ((((max((arr_22 [i_6 - 3]), (arr_23 [i_6 + 1])))) ? (!1099511627775) : 255));
        var_17 = ((-(((arr_25 [i_6 - 1]) ? var_4 : ((min(1099511627775, (arr_23 [i_6 - 1]))))))));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_18 = (((((((((arr_24 [i_7]) + (arr_28 [i_7])))) ? ((-1 ? (arr_28 [i_7]) : var_7)) : (!18446744073709551606)))) ? 0 : ((62 ? (arr_28 [i_7]) : 248))));
        arr_29 [i_7] &= (522683134903245958 & -6099540360710468215);
        var_19 = (max(var_19, ((min((((~(arr_22 [i_7])))), (((arr_24 [i_7]) & (arr_22 [i_7]))))))));
        var_20 = (max((arr_22 [i_7]), ((255 ? (max(-7773755056112345339, var_12)) : (var_12 / 239)))));

        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            var_21 = ((31 < (((arr_32 [i_7] [i_8 + 1]) ? (arr_32 [i_8 - 1] [i_8 + 1]) : 48296))));
            var_22 = 31;
            var_23 = ((min((((~(arr_26 [i_7] [i_8 + 1])))), 16427207837567906052)));
        }
    }
    #pragma endscop
}
