/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (((((((var_4 % (arr_3 [i_0] [i_1] [i_0])))) | ((var_7 ? (arr_2 [i_0] [i_1] [i_0]) : (arr_1 [i_0] [i_1]))))) - (arr_1 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, (1 & var_7)));
                            var_15 = 3325162096;
                            arr_9 [i_0] [i_1] [i_1] [i_2] = (((((-(var_3 && var_5)))) & var_10));
                            arr_10 [i_0] [i_1] [i_1] = (max(((((-(arr_5 [i_1] [i_1] [i_1] [i_1]))))), (3325162096 / var_3)));
                            arr_11 [i_0] [i_1] [i_1] = ((((((1023 && (arr_6 [i_0] [i_2 - 1] [i_2]))))) - ((-(max(var_1, var_10))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            {
                arr_17 [i_4] [i_5 - 2] [i_5 + 1] |= 1;
                var_16 = 1;
                var_17 = (max(var_17, (((~(max((arr_0 [i_4] [i_5 - 1]), var_5)))))));
                var_18 = max((arr_3 [i_4] [i_5 + 1] [i_4]), ((((min(5344, (arr_2 [i_4] [i_5] [i_4])))) && (arr_1 [i_4] [i_5 - 3]))));
                arr_18 [i_4] = ((!(~-1)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_19 = (max(var_19, (max(61012, (arr_22 [i_8])))));
                                var_20 = var_0;
                            }
                        }
                    }
                }
                var_21 = ((+((((arr_30 [i_6] [i_6] [i_6]) == (((arr_20 [i_6]) ? (arr_31 [i_6] [i_7] [i_6] [i_7] [i_7]) : 1051627597)))))));
            }
        }
    }
    #pragma endscop
}
