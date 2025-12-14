/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = ((arr_2 [i_0 + 1]) / (arr_1 [i_0 - 2] [i_1]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_2] [i_1] [i_0] = ((~((~(arr_0 [i_2])))));
                            arr_12 [i_1] [i_3] = ((~(((arr_8 [i_0] [i_1] [i_2]) & (arr_3 [i_0 + 1] [i_0] [i_0 + 1])))));
                            var_21 = (arr_2 [i_1]);
                            arr_13 [i_0 - 2] [i_0] [i_2] [i_2] = ((-(((arr_3 [i_0] [i_0] [i_0]) | ((((arr_0 [i_0]) < (arr_10 [i_2] [i_0]))))))));
                        }
                    }
                }
                var_22 = ((arr_1 [i_0] [i_1]) * ((((((!(arr_1 [i_0] [i_1]))))) / (arr_6 [i_1]))));
                var_23 = (arr_6 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                arr_18 [i_5] = (1 * 4010167999);
                arr_19 [i_4] [i_4] = ((~(((((arr_7 [i_4] [i_4]) + (arr_9 [i_4] [i_4] [i_4] [i_5] [6] [i_5]))) - (arr_1 [i_5] [i_4])))));

                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    var_24 = (arr_3 [i_4] [i_4] [i_4]);
                    arr_24 [i_4] [i_5] = (arr_22 [i_4 - 1] [i_4 - 1] [i_4 - 1]);
                }
            }
        }
    }
    var_25 = (var_16 & (((((var_14 < var_9) < (~var_16))))));
    #pragma endscop
}
