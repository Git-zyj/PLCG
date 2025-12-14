/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_2 ? (var_4 / var_0) : (max(var_14, (max(36328, 15874036114075934850))))));
    var_16 = var_2;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_10;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [0] [i_1] = (min(var_2, (arr_7 [i_1])));

                    for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((arr_3 [i_2] [i_1] [10]) / 273291757797115049);
                        var_17 ^= (arr_8 [i_0] [1] [i_2] [i_3]);
                        var_18 ^= ((((min((var_14 + 16419800408342895732), (((arr_10 [i_0] [13] [i_2] [i_0] [i_2]) ? 1 : 2026943665366655884))))) ? (max((var_7 / 70), (arr_12 [i_0] [17] [i_2] [12] [i_0] [i_0]))) : ((((((arr_1 [i_1]) ? (arr_1 [i_0]) : 2026943665366655883))) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_0 [16])))));
                    }
                    for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [i_1] [i_1] [i_1] [13] = (arr_16 [i_1]);
                        var_19 = (min((((1 || (((arr_12 [i_0] [i_1] [i_2] [i_4 + 1] [i_0] [i_0]) >= 1))))), ((var_13 ? var_14 : (arr_0 [i_0])))));
                        var_20 = var_8;
                    }
                    var_21 += (min((max(((max((arr_12 [i_0] [i_1] [i_2] [i_0] [9] [i_0]), 1))), (max(4294967272, 58189)))), (arr_0 [i_0])));
                    arr_19 [0] [i_1 + 1] [i_0] [i_0] = (arr_12 [i_1] [i_1 + 1] [7] [i_1 + 1] [7] [i_2]);

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_22 [i_5] [i_0] [i_0] = max(((((arr_13 [i_0] [i_1 + 1]) ? (arr_11 [i_5] [i_2] [i_1] [i_1] [i_0]) : (arr_7 [i_0])))), ((((((10351112640443311013 | (arr_7 [i_0])))) ? (arr_1 [i_1 + 1]) : ((~(arr_0 [i_1])))))));
                        var_22 = var_0;
                    }
                }
            }
        }
        arr_23 [i_0] = 39235;
        var_23 = (arr_6 [i_0]);
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_24 = (min(((!((((arr_16 [i_6]) - 2026943665366655880))))), (!-33802830)));
        arr_28 [10] [i_6] = (arr_21 [i_6] [i_6] [i_6] [i_6]);
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_25 = (min(var_25, (arr_30 [i_7])));
        var_26 = ((((1 ^ (max(536870896, -6319970511512866793)))) != (((arr_32 [i_7 - 1] [i_7]) / 2385921097214761782))));
    }
    var_27 = (16419800408342895726 | 16419800408342895731);
    #pragma endscop
}
