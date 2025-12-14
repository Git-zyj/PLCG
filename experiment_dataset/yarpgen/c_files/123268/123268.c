/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((min((max(226, 3150616520577843486), var_12))));
    var_19 = (((var_3 ^ 3150616520577843486) ^ var_4));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 2] [i_1] [i_1] [i_0] = (max((max((arr_5 [i_2 - 2] [i_0] [i_0 - 2]), (arr_5 [i_2 - 3] [i_0] [i_0 - 2]))), var_6));
                    var_20 = (((((-(arr_4 [0] [0] [i_2 + 2] [i_2 + 2])))) ? -15296127553131708105 : ((((!3150616520577843461) + ((min(var_9, 1))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_21 &= var_5;
                            arr_17 [i_6 + 3] [i_4] [i_4] [i_4] [i_5] = ((((max((arr_0 [i_4 - 1]), (arr_12 [i_6 + 1] [i_6 + 2])))) ? -1 : (((arr_8 [i_4 - 1]) ? (arr_12 [i_6 + 2] [i_6 + 3]) : (arr_1 [i_4])))));
                            arr_18 [i_3] [i_4] [i_5] = ((~((-(((((arr_2 [i_4] [i_4]) + 2147483647)) >> var_1))))));
                        }
                    }
                }
                arr_19 [i_3] [i_4] = ((~((var_8 ? (arr_7 [i_4 - 1] [i_4 - 1]) : var_17))));
                var_22 = (min((max(var_0, var_16)), ((((3150616520577843486 ? (arr_16 [i_4] [i_4] [i_4] [i_3] [i_3] [i_3]) : (arr_1 [i_4])))))));
                var_23 = (min(var_13, (arr_5 [i_3] [i_4] [i_3])));
                arr_20 [i_4] [i_4] = min((max(1567622929, -var_5)), ((-(arr_0 [21]))));
            }
        }
    }
    #pragma endscop
}
