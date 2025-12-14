/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = var_7;
                    var_15 = var_9;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [8] [8] [4] = ((17785427945632989600 ? var_3 : 6969026579963891283));
                        var_16 = -6969026579963891284;
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_14 [18] [18] [18] [i_4] [8] = var_1;
                        var_17 = (min(var_17, (arr_5 [i_4] [16] [i_2])));
                        arr_15 [i_0] [i_0] [i_4] [12] = ((((min(48287, ((~(arr_10 [i_0] [i_0] [i_0] [15] [0] [i_4])))))) || (((min(6969026579963891293, 48676))))));
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_18 *= (((((((min(6969026579963891298, -1350011805))) ? (arr_12 [0] [i_0] [i_0] [i_0]) : ((15892 ? 1 : 17333308192410456746))))) ? var_1 : (((((arr_18 [i_0] [i_0]) <= (min(86, var_3))))))));
                        var_19 = ((min((arr_16 [i_2] [i_2] [i_1 - 2] [i_1 - 2] [i_1]), (min(var_1, 1)))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_20 = (max(var_20, ((((((arr_19 [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_6] [i_6]) | -4931868023633587612)) ^ ((((180 ? 124 : (-127 - 1))))))))));
                        arr_23 [19] [6] [i_1] [8] = 6969026579963891304;
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_21 = ((((min(var_0, (arr_18 [i_1 - 1] [i_2])))) / (((~38201) ? -134217727 : (arr_22 [i_2] [i_1 + 1])))));
                        var_22 -= ((((min(var_11, var_12))) ? ((~((min(var_11, (arr_6 [i_0] [i_0] [10])))))) : ((((min(var_12, 27334))) ? (((arr_17 [i_0] [1] [i_2] [i_0]) ? var_7 : 253)) : (~var_7)))));
                        var_23 = (max(var_23, -19979));
                    }
                }
            }
        }
    }
    var_24 -= var_12;
    var_25 = (~27323);

    /* vectorizable */
    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
    {
        arr_28 [1] [i_8] = (!(arr_26 [i_8]));
        arr_29 [i_8] = (arr_26 [i_8]);
        arr_30 [i_8] [i_8] = 1;
        var_26 ^= (arr_26 [i_8]);
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
    {
        var_27 = ((1 ? 498172708 : -1725750155));
        var_28 = ((3337 ? 2 : 52089));
    }
    #pragma endscop
}
