/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = var_8;
    var_16 = (max((~2031357389), (((min(var_10, var_3)) / var_8))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = var_1;
                                var_18 = (((((((!(arr_11 [i_0] [7] [i_2] [i_3] [i_4]))) ? (arr_8 [3] [i_0 + 2] [i_1 - 2] [i_3 - 1]) : ((max(2112855923, var_1)))))) ? (min(((((arr_5 [i_3] [11]) ? (arr_9 [5]) : (arr_0 [i_3] [i_3])))), (((arr_2 [i_0] [i_0 - 1]) ? (arr_5 [i_0] [i_0]) : (arr_0 [i_2] [i_4]))))) : (arr_1 [i_0] [i_4])));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_0] [i_2] = (-9223372036854775807 - 1);
                    var_19 -= ((4294967295 < 4294967286) ? (min((arr_2 [i_0 - 1] [i_1 + 1]), 4294967292)) : (((((((arr_6 [i_0] [i_1]) & (arr_9 [2]))) != var_11)))));
                    arr_16 [i_0] [2] [i_0 - 1] [i_0] = (((arr_5 [i_0 - 1] [2]) / (arr_6 [i_0 - 1] [8])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_20 = (((((((min((arr_5 [i_2] [i_5]), (arr_12 [i_5] [5] [i_0])))) ? (arr_11 [i_0] [i_0 + 2] [i_1 - 2] [i_1] [i_6 + 1]) : (((arr_19 [i_2] [i_0] [i_2] [i_0] [i_0]) ? (arr_10 [i_0] [13] [i_2] [i_5] [i_6]) : var_13))))) ? (arr_7 [i_0] [i_0 + 2] [i_0 + 1] [i_1 - 1]) : ((((((var_5 + 2147483647) >> (((arr_10 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]) + 6192888982041510961))))) ? (arr_9 [i_6 + 1]) : (max(var_12, (arr_1 [i_0] [i_1 + 1])))))));
                                var_21 -= min(((var_1 ? ((((!(arr_14 [10] [i_1 + 1] [i_5]))))) : (max((arr_2 [5] [i_1 + 1]), (arr_5 [i_0] [i_1 - 1]))))), ((min(var_3, ((8160 > (arr_20 [i_0 + 2])))))));
                                var_22 = (max((min((((arr_4 [i_1 - 1] [13] [i_5]) ? (arr_18 [i_0]) : (arr_14 [i_1 - 1] [5] [9]))), var_10)), ((((max((arr_5 [i_5] [i_0 + 2]), var_0)) == ((((var_11 && (arr_10 [i_5] [3] [i_5] [i_5] [i_6 + 1]))))))))));
                                var_23 = (arr_18 [i_0]);
                                var_24 = (((arr_4 [i_0] [i_0] [i_0]) & var_5));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
