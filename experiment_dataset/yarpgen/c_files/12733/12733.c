/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((85 ? var_5 : ((((~8872) == var_12)))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_20 -= (min(((max((arr_0 [i_0 - 2]), var_8))), var_4));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_1] [i_1] [i_1] = min((arr_4 [i_0] [i_0 - 2]), ((((~30759) == ((max(85, 170)))))));
            var_21 = (arr_0 [i_0]);
            arr_6 [i_0] [i_1] [i_1] = (!-909780327);
        }
        var_22 = (arr_4 [i_0] [i_0]);

        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            var_23 += (((((-(((arr_10 [i_0] [i_2] [i_2]) ? var_12 : var_12))))) * (min(var_16, (((arr_7 [i_0]) ? (arr_7 [i_0]) : 170))))));
            var_24 = (!0);
            arr_11 [i_2] [i_2] = (((((((((!(arr_8 [i_2]))))) * ((8191 ? -1 : (arr_2 [i_0])))))) ? (((var_8 / 100) ? ((var_10 ? (arr_2 [i_0]) : 0)) : (arr_9 [i_0]))) : (((-(arr_4 [i_0 + 1] [i_0 - 2]))))));
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = var_2;
        var_25 = (arr_2 [i_3]);
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1)
    {
        arr_20 [i_4] = arr_10 [6] [6] [6];

        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            var_26 = (((-2951 + 2147483647) >> (85 - 81)));

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                var_27 = 0;
                arr_27 [i_4] [i_6] [i_6] [i_5] = ((((((arr_8 [2]) >> (205 - 174)))) || (((-((5507 ? 44 : 1147898720038997165)))))));
            }
        }
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            var_28 = (arr_23 [i_7 + 4] [i_4] [i_4 + 2]);
            arr_30 [6] [i_7] |= 85;
            var_29 = (27340 ^ 212);
            arr_31 [i_7] [i_7] [i_4] = 0;
        }
        var_30 = ((72303521 ? 2923985470 : 171));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {

        for (int i_9 = 2; i_9 < 17;i_9 += 1)
        {
            arr_36 [i_9] [i_9] [i_8] = (arr_35 [i_8]);
            /* LoopNest 3 */
            for (int i_10 = 3; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_31 += (((arr_37 [i_8] [i_9] [i_9]) ? (((0 || ((min(var_18, var_12)))))) : (arr_40 [i_12] [i_10 + 1] [i_10 + 1] [i_9 - 1])));
                            var_32 += (max((((arr_32 [i_9 - 1] [i_12 + 2]) ? (arr_32 [i_8] [i_11 + 1]) : (arr_32 [i_8] [i_9 - 1]))), (((arr_39 [i_10 - 1]) / (arr_32 [i_9 + 1] [i_8])))));
                        }
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            var_33 = -27340;
            var_34 = (max((((~(arr_39 [i_8])))), (((arr_34 [i_8] [i_13]) ? -17664 : (arr_34 [i_8] [i_8])))));
            var_35 = (max((arr_39 [i_8]), 1147898720038997165));
        }
        for (int i_14 = 2; i_14 < 16;i_14 += 1)
        {
            var_36 = (min(var_36, ((((((-var_10 ? (arr_44 [i_14 + 1] [i_14 + 1]) : (arr_46 [i_14 + 2])))) / (min(((var_6 ? 72303521 : var_17)), 1)))))));
            var_37 = (((((-(arr_42 [i_14] [i_14] [i_14 + 2] [i_14] [i_14])))) ? ((((arr_42 [6] [6] [i_14 - 1] [i_14] [i_14]) < (arr_42 [i_8] [i_8] [i_14 + 3] [2] [i_14])))) : (min((arr_42 [2] [i_14] [i_14 - 2] [i_14 - 2] [i_14]), (arr_42 [i_8] [i_8] [i_14 + 2] [6] [i_14])))));
        }
        var_38 = min(-1750947189, 17966);
    }
    #pragma endscop
}
