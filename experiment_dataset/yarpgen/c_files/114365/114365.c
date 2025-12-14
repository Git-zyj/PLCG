/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_4);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = var_8;
        var_17 = (min(((!(arr_1 [15] [i_0]))), ((!(arr_0 [i_0] [i_0])))));
        arr_2 [i_0] [16] = (((~(min(-99, 3106140772)))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = ((((min(var_4, var_3))) ? (((-(arr_0 [i_1] [i_1])))) : ((var_9 - (arr_0 [i_1] [i_1])))));
        var_18 = var_0;
        var_19 += (min((min((var_3 * var_6), (~58738))), (((-126 ? 113 : 45900)))));
        arr_8 [i_1] = -var_8;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_20 = (arr_9 [i_2] [i_3]);
            var_21 = (max(var_21, (((((((arr_11 [i_3]) ? var_6 : (max(167375680, var_12))))) ? 45899 : -121)))));
            arr_14 [i_3] = (((((arr_10 [i_2] [i_3]) ? ((1188826513 ? var_7 : var_4)) : ((((var_12 + 2147483647) >> (14346 - 14339))))))) ? -32 : (((max(3789456859, 32627)) - (arr_13 [i_2]))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_22 = ((-111 | (arr_13 [i_2])));
            var_23 = var_14;
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 18;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        arr_27 [i_2] &= (max(-32651, 0));

                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            arr_31 [i_6] [i_6] [i_6] [i_5] [i_6] &= (var_7 ? var_0 : var_4);
                            var_24 = (arr_29 [i_6 - 2] [i_6 - 2] [i_6 + 2]);
                            arr_32 [3] [18] [18] [i_7] [i_7] = ((19652 ? 8616571436344701792 : 81));
                        }
                        arr_33 [i_7] = ((var_7 ? 3926505680 : (min(var_9, (max(var_4, (arr_12 [i_7] [i_5])))))));
                    }
                    var_25 = 12393493631605886879;
                    var_26 += (~-110);
                    var_27 = ((~var_6) ? (1 + 2246559837893261075) : (((((min(-4255, 0))) ? (~3188730147) : (!1)))));
                }
            }
        }
        var_28 = ((var_14 ? ((min(8522535054111219000, 1600073212))) : var_9));
        var_29 = (min(-1106237140, (12393493631605886879 / 160)));
        arr_34 [i_2] = ((((min(-3613006419414866267, 5466078165752885134))) ? (((~(arr_18 [i_2] [6] [1])))) : (min((max(2246559837893261075, 55102)), (~var_7)))));
    }
    for (int i_9 = 1; i_9 < 24;i_9 += 1)
    {
        var_30 = (!((min(6053250442103664726, (arr_36 [i_9 - 1])))));
        var_31 ^= (min(((660408995 ? 1 : 3642274324)), (((~(arr_35 [i_9 - 1] [i_9 - 1]))))));
        var_32 *= (~var_8);
        arr_38 [15] = (max(((((arr_37 [i_9 - 1]) | 3188730171))), ((-124 ? 76 : 12393493631605886874))));
    }
    #pragma endscop
}
