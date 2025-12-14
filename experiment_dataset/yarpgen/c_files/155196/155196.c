/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (max((min((((arr_6 [i_0] [i_1] [i_2]) ^ 15603)), ((max((arr_6 [i_0] [1] [i_2]), (arr_3 [i_1] [i_1])))))), (min(65535, (arr_1 [i_1 - 1])))));
                    var_12 = (max(var_12, (((-(arr_3 [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, (arr_12 [i_0] [i_1])));
                                arr_15 [i_0] [i_2] [i_2] [0] [i_4 + 1] [i_2] = arr_11 [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4] [i_4];
                                var_14 &= ((!(((1 / (arr_5 [i_3] [i_3] [i_2] [i_3]))))));
                                var_15 = (min(var_15, ((((((~(arr_6 [i_0] [i_0] [i_1 - 1])))) ? ((((!(arr_10 [i_1] [i_1] [i_1 - 1] [i_4 + 1]))))) : 881505683985932504)))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        var_16 = (min(var_16, ((((((arr_5 [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_5]) | (arr_5 [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_0]))) * 110)))));
                        var_17 *= 2576602485584945724;
                        var_18 = arr_12 [i_2] [i_5 - 2];
                    }
                }
            }
        }
    }
    var_19 = var_9;
    var_20 &= 1;
    var_21 = (min(var_21, ((min((((-((var_3 ? -268172147 : 2130706432))))), ((var_11 - ((var_10 ? 58872 : var_7)))))))));
    #pragma endscop
}
