/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_21 = (min((2500404507 + var_2), (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (max(((+(((arr_2 [i_0] [i_0] [i_1]) + (arr_3 [i_0] [i_1]))))), (max(-var_4, (((arr_3 [i_0] [i_1]) ? 0 : var_12))))));
            arr_5 [i_0] = ((!(arr_1 [i_0] [23])));
            var_22 = (min(var_22, ((((var_11 + 2147483647) << (1794562788 - 1794562788))))));

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_1] [5] [i_3] [i_4] = ((~(arr_2 [i_0] [i_1] [12])));
                            var_23 = (~27);
                            arr_13 [i_0] [5] [i_2] [4] [4] [i_4] = (max((((var_3 && (arr_10 [i_0] [i_0] [i_0] [i_0] [14] [i_0] [i_0])))), var_1));
                            var_24 += (max(((~(((arr_3 [i_0] [i_0]) ? var_7 : var_3)))), (((((((arr_7 [i_1] [4] [i_2]) ? var_13 : var_5))) || (var_6 / 2500404507))))));
                            var_25 += (arr_3 [i_2] [17]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6] [i_6] = ((var_16 != ((((~var_11) != (arr_17 [18] [i_1] [i_0] [i_5]))))));
                            var_26 = (((((-22 ? 1794562773 : (var_15 | -23349)))) ^ var_19));
                            var_27 = (((11661 >= ((var_17 ? var_7 : (arr_15 [i_0] [i_0]))))));
                            var_28 = ((max((arr_9 [i_5] [i_5]), var_8)));
                            var_29 = ((((min((arr_16 [i_0] [18] [i_2] [i_5]), 32767))) / 33));
                        }
                    }
                }
                arr_22 [i_0] [i_1] [i_2] [8] = (((((((min(var_0, var_18))) ? (((min(var_17, (arr_14 [i_0] [i_1] [i_2] [i_2]))))) : (((arr_18 [i_0]) ? 1794562789 : var_11))))) < ((((max(229, (arr_17 [i_0] [i_2] [i_1] [i_0])))) ? ((1794562788 ? 223 : var_9)) : ((((!(arr_18 [i_2])))))))));
                arr_23 [6] [i_1] [i_2] [i_2] = -1941322963;
                arr_24 [i_1] [15] = (((2500404507 ? -12 : 2500404507)));
            }
        }
        arr_25 [i_0] = (min(((-(arr_14 [i_0] [i_0] [i_0] [i_0]))), ((min((arr_10 [i_0] [i_0] [i_0] [i_0] [20] [20] [20]), var_2)))));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        var_30 = ((!((((arr_14 [i_7] [i_7] [i_7] [i_7]) ? -20534 : var_15)))));
        var_31 = (arr_18 [i_7]);
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_32 = (min(((((arr_6 [16] [i_8]) ? (arr_6 [i_8] [i_8]) : (arr_6 [i_8] [i_8])))), ((((!(arr_0 [i_8] [i_8]))) ? var_14 : (((max(var_18, (arr_20 [i_8] [7] [16] [i_8] [i_8])))))))));
        var_33 *= ((((1442507443 || ((min((arr_26 [i_8]), var_14))))) ? ((min(((var_10 ? var_17 : -18)), var_4))) : (max(var_11, (min(var_5, var_4))))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        var_34 = (min(var_34, ((((((max(var_19, var_17)))) | (((var_1 + 2147483647) >> (116 - 86))))))));
                        arr_41 [i_8] [i_8] [i_8] [i_8] = var_2;
                    }
                }
            }
        }
        arr_42 [i_8] = ((((((var_1 + 2147483647) << (((((arr_39 [13] [13] [i_8] [i_8] [i_8] [i_8]) + 100)) - 17))))) ? ((var_8 ? (arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [15]) : (arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) : ((min((arr_39 [i_8] [13] [3] [i_8] [i_8] [13]), (arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))));
    }
    var_35 = ((((((max(var_2, var_19))) ? ((max(var_16, 1939508044))) : var_3)) / (((((max(var_6, var_3))) ? ((max(123, var_4))) : ((min(var_17, 116))))))));
    var_36 = (min(((var_1 ? var_19 : var_4)), var_2));
    #pragma endscop
}
