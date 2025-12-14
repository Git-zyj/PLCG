/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (112 >= (((arr_4 [i_0] [i_1] [i_0]) + (var_0 * var_8))));
                var_20 ^= ((~((~(arr_3 [i_0 + 1] [1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                arr_9 [i_2] = var_16;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_21 = (max(var_21, (((!(arr_7 [i_2]))))));
                            arr_16 [i_5] [i_3] [i_4] [i_5] = 731312225;
                            var_22 = (max((min((((arr_14 [i_2]) ? (arr_11 [i_2] [i_3] [i_4 + 1] [i_5 + 1]) : var_1)), (((var_11 || (arr_11 [i_2] [i_2] [i_4 + 1] [i_5 + 1])))))), (((arr_12 [i_2] [i_2] [i_4] [i_4 + 1]) ? (arr_13 [i_5] [i_5 - 2] [i_5]) : (arr_8 [i_4])))));
                        }
                    }
                }
                var_23 = 236;
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_25 [6] [i_3] [i_6] [i_6] [i_6] [i_7] [i_8 + 1] = (((((!(var_3 && 107)))) != (~139)));
                                var_24 = 136;
                                arr_26 [i_2] [i_3] [i_3] [i_3] [i_6] [i_7] [3] = (arr_17 [i_2] [i_2]);
                            }
                        }
                    }
                }
                arr_27 [i_2] = var_14;
            }
        }
    }
    var_25 ^= var_11;
    var_26 = var_6;
    #pragma endscop
}
