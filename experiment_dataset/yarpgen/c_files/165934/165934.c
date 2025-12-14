/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (i_0 % 2 == 0) ? ((((((arr_1 [i_0]) | var_14)) << (((arr_2 [i_0] [i_0 - 3]) - 3917988748))))) : ((((((arr_1 [i_0]) | var_14)) << (((((arr_2 [i_0] [i_0 - 3]) - 3917988748)) - 1523143059)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = (min(var_18, (((10 ? (arr_10 [4] [i_0] [i_0 - 1] [i_0 + 2]) : 1464742727086017578)))));
                        var_19 = (((var_7 >= 241) ? var_13 : (18066240071187237566 || 86)));
                    }
                    arr_13 [i_0] = (((99 != 23822) != (((-2078046903 > (-2147483647 - 1))))));
                    var_20 = (arr_11 [i_0] [i_0] [i_1] [i_2]);
                    var_21 = (5901101415831739793 + -14);
                    var_22 = (((127 <= -28861) ? 68 : ((27397 ? var_1 : 2147483647))));
                }
            }
        }
        var_23 = (!-32);
    }
    for (int i_4 = 4; i_4 < 18;i_4 += 1)
    {
        var_24 = (min((arr_4 [i_4 + 1] [i_4]), (1 & 60685)));
        arr_16 [i_4] [i_4] = -38;
        arr_17 [i_4] [i_4] = 1;
        arr_18 [i_4] = ((((!(!16626))) && (((((min((arr_7 [i_4] [i_4] [14]), 255))) ? (max(-16645, 14206691942600802746)) : -1)))));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_25 = var_4;
        arr_23 [i_5] = max(-3629, (((~0) ? 1853230898 : (103 < 1264225434))));
        arr_24 [22] = (min((max((((arr_0 [i_5]) ^ 179)), var_11)), ((max((arr_19 [i_5]), (max(var_2, 12468)))))));
        arr_25 [i_5] [i_5] = ((-101 ? var_1 : -1));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_26 = 576460752303423480;
                    arr_31 [i_7] = (arr_21 [i_6] [i_7]);
                    arr_32 [i_7] [i_6] [i_7] = 1;
                }
            }
        }
    }
    var_27 = (min(var_27, var_5));
    var_28 = var_7;
    var_29 = ((~(((var_9 >= (((var_15 ? 50584 : 23043))))))));
    var_30 += (max((((18446744073709551615 / var_15) / (((var_9 << (var_10 + 552173315)))))), (((((474015989 ? 32767 : var_15)) & ((18446744073709551615 ? 1 : var_1)))))));
    #pragma endscop
}
