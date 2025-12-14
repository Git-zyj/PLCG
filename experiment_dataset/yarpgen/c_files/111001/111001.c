/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max(23, var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_12 = ((var_4 - (arr_7 [i_3 + 1] [i_0] [i_1] [i_0])));
                        arr_10 [i_0] [i_1] [i_2] [i_3 + 1] = (arr_8 [i_0]);

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_13 = (arr_5 [i_0] [i_3]);
                            var_14 = ((+(max((((arr_2 [i_1] [i_4]) * var_9)), (arr_6 [i_2] [i_2])))));
                        }
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            arr_15 [i_5] [i_3] [i_2] [i_1] [7] = var_8;
                            arr_16 [i_0] [i_0] [i_0] [i_3 - 1] [i_5] [i_5 - 1] = min((arr_4 [i_3 + 1]), (((((((9223372036854775807 >= (arr_8 [i_3]))))) > (max((arr_3 [i_0] [i_1] [i_2]), 127))))));
                        }
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            var_15 = (((min(2147483647, (!-7938)))));
                            arr_20 [i_0] [3] [i_0] [i_0] [i_0] = (min(82, (arr_19 [9] [i_6] [9] [i_3] [i_2] [i_1] [i_0])));
                        }
                        arr_21 [i_0] [i_1] [i_1] [i_0] [i_3] = ((((((var_4 ? var_4 : 1))) / (arr_12 [i_3 + 1] [1] [1] [i_2] [i_1] [i_1] [1]))) * ((((((arr_13 [i_2] [2] [i_2]) & var_4))) ? (max((arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_3]), 2147483647)) : (((((arr_17 [1] [1] [i_2 + 1] [i_0] [i_2 + 1] [9]) == var_10)))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_24 [i_0] [i_1] [i_2] = (((((arr_3 [i_2 + 1] [i_2 + 1] [i_2 - 1]) || (arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1]))) ? (max((arr_1 [i_7]), ((29176 ? var_10 : var_1)))) : (arr_12 [i_0] [i_1] [1] [i_0] [i_0] [i_1] [i_1])));
                        var_16 = ((-2147483636 / (min(((var_7 << (2147483628 - 2147483617))), (-2147483647 - 1)))));
                        var_17 = (2147483647 == 0);
                        var_18 = (max((min((arr_12 [i_0] [i_2 + 1] [i_2] [i_0] [i_2] [i_0] [i_7]), (arr_14 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]))), ((((arr_12 [i_0] [i_2 - 1] [i_7] [i_7] [i_1] [i_2] [i_7]) > (arr_12 [i_0] [i_2 - 1] [i_2 + 1] [i_7] [i_2] [i_1] [i_2]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_19 = ((((arr_8 [i_2 - 1]) - 190458124)));
                                var_20 = ((((((arr_0 [i_2 + 1]) <= (arr_0 [i_2 - 1])))) << (((max((arr_0 [i_2 + 1]), (arr_0 [i_2 + 1]))) - 2602060769))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (65535 - 2147483647);
    var_22 = ((var_3 ? var_5 : (((var_6 >= var_7) ? var_10 : var_5))));
    #pragma endscop
}
