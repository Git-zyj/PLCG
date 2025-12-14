/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_16 ^= (min((min(var_12, (arr_1 [14]))), (~var_1)));
        var_17 = (max(var_17, (((((((min(var_5, 4294967295))) | (-3858921320281860224 | 12288))) | ((((~0) ? 150 : 1))))))));
        var_18 = (max(var_18, -61));
        arr_2 [i_0] = (min(((min((arr_1 [i_0]), (arr_1 [i_0])))), (min((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    var_19 = var_2;

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((-19 & var_10) ? (6202262351666273363 && 54106) : (((arr_5 [i_1]) ? 11348594536073097414 : (arr_1 [i_1])))));
        var_20 = (max(var_20, (arr_4 [i_1] [i_1])));
        arr_7 [i_1] = var_8;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {
                        var_21 = 1;
                        var_22 = (((((((1 ? var_5 : 859924049))) ? (!12244481722043278252) : var_3)) * (min(var_13, (arr_11 [i_3] [9] [3] [i_4])))));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [i_2] [i_4] [i_3] [i_3] [i_3] [i_2] [5] = ((!((min(var_14, (arr_15 [i_4 - 2] [i_4 + 1] [i_3] [i_4]))))));
                            arr_18 [i_5] [i_1] [i_3] [i_1] [i_1] |= (!((min(var_15, (arr_15 [i_1] [i_3] [i_2] [i_3])))));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_23 = (max(var_23, ((((min(18236188768303563874, 4155231514)) * var_7)))));
                            arr_21 [i_1] [i_1] [i_2] [i_2] [i_4 - 1] [i_3] [i_6] = 65520;
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_26 [i_3] = (((((((min(65519, 139735792))) ? ((var_10 ? var_6 : -6338)) : (36 * var_15)))) ? (((-var_14 <= ((min(-1454381877, 5280)))))) : 1));
                            arr_27 [i_1] [i_3] [i_1] = 4153;
                            var_24 = 8388096;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_25 = (~3435043247);
                            var_26 = (min(var_26, 192));
                        }
                    }
                }
            }
        }
        var_27 -= ((((1 && 6171030348113826169) ? (-7682948391449694277 || 32767) : var_5)));
    }
    #pragma endscop
}
