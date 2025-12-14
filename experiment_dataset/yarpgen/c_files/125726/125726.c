/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((((((((1 ? 4115871752 : var_3))) ? var_3 : var_1))) ? ((((max(1, 0)) ? var_8 : ((max(23275, (arr_1 [i_0]))))))) : ((1 ? 0 : 2167488786162028254))));
        arr_4 [i_0] [i_0] = (min((arr_1 [16]), (max((max(554276207, -6261479274372024100)), ((((arr_0 [i_0] [i_0]) | var_14)))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_0] [i_1] &= (min(0, (arr_6 [i_1] [i_1] [i_0])));
            var_19 = ((((~((max(var_12, 1))))) ^ (arr_1 [i_0])));
            var_20 = (min(var_20, ((min(((-(arr_6 [i_0] [i_0] [i_1]))), ((var_4 ? (arr_5 [i_1]) : 22132)))))));
            arr_8 [i_0] [i_1] = (((min((arr_0 [15] [i_1]), (arr_0 [i_0] [i_1]))) ? ((max(var_18, (arr_0 [i_0] [i_0])))) : ((min((arr_0 [i_0] [i_0]), var_15)))));
        }
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            var_21 = (max(1, (min((arr_0 [i_2 - 2] [i_2 - 2]), (arr_0 [i_2 - 2] [i_2 - 2])))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_19 [i_3] [i_2 - 1] [i_2] [i_2 + 2] = 0;
                        var_22 = (max((((!(arr_9 [i_4 + 1] [i_4])))), ((var_11 >> (var_17 - 720366481462560489)))));
                        var_23 = (((1 & 1) != ((~(max(1, -3137718184242307696))))));
                        var_24 = (arr_1 [i_0]);
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_25 |= (arr_21 [i_5]);
            var_26 = (min(((min((max(var_16, var_3)), ((max(1, (arr_15 [i_0]))))))), ((-(max(var_7, var_17))))));
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        var_27 = (((max((arr_28 [i_0]), 1)) ? (min(1, (arr_22 [i_0]))) : ((((arr_13 [i_6]) & var_14)))));
                        var_28 = 22;
                        arr_32 [14] [i_7] [i_7] [i_8] [i_6] [i_6] = (max((~var_2), (((-var_11 ? (((arr_12 [i_8] [i_6] [i_6] [i_0]) % 2147479552)) : 221)))));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_29 ^= ((((((arr_6 [i_9] [7] [i_9]) + (arr_6 [i_9] [i_9] [i_9])))) ? ((((arr_6 [i_9] [i_9] [i_9]) ? (arr_6 [17] [17] [i_9]) : 1))) : ((0 ? 15529737883560214071 : 27848))));
        arr_35 [i_9] = (((((arr_27 [i_9]) ? var_14 : 75)) >= (min((((var_10 ? (arr_5 [i_9]) : var_7))), (min(var_0, var_15))))));
        var_30 = (max(var_30, ((min((min(var_8, (((arr_25 [i_9] [i_9] [i_9]) ? var_14 : 27848)))), ((max(1, -1))))))));
    }
    var_31 = ((1 ? ((~((var_9 ? var_2 : 0)))) : var_2));
    var_32 &= 13387;
    #pragma endscop
}
