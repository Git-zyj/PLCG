/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_0 ^ var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_13 &= (max((((arr_8 [i_0] [i_0] [i_2] [i_3]) ? (((arr_8 [i_0] [i_0] [i_0] [i_3]) ? (arr_1 [i_0]) : var_7)) : (((var_1 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_1])))))), (arr_3 [i_2 - 1] [i_2] [i_2])));
                        arr_12 [i_3] = var_3;
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_14 = var_2;
                        arr_15 [i_0] [i_1] [i_0] [i_4] = (((~67) / ((6048993889999347383 ? -11004 : 1))));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_15 |= 1;
                            var_16 = ((((arr_1 [i_2 + 1]) ? (arr_1 [i_2 + 1]) : (arr_1 [i_2 + 1]))));
                            var_17 |= (((1 ? (arr_13 [i_0] [i_1] [i_5] [i_4]) : (arr_13 [i_5] [i_0] [i_2 - 1] [i_0]))));
                        }
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        arr_20 [i_6] [i_1] [i_1] [i_6] [i_6 - 1] = ((((((-(arr_13 [i_0] [i_1] [i_2] [i_1])) >= (((((arr_14 [i_0] [i_0] [i_6]) != (arr_5 [i_6]))))))))));
                        arr_21 [i_6] [i_6] [i_2] [i_6 - 1] [i_6] [i_6] = (((arr_16 [i_6] [i_2] [i_1] [i_0] [i_0] [i_0]) * (((!(arr_10 [i_0] [i_0]))))));
                    }
                    var_18 = (((arr_18 [i_0] [i_2] [i_2] [i_0]) && var_6));
                }
            }
        }
    }
    #pragma endscop
}
