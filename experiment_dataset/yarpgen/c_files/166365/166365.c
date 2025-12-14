/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((max((((!(~13510179523195317120)))), (arr_3 [i_2]))))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2 - 4] [i_2 + 1] [i_3] [i_1] = (max(((((((arr_11 [i_0]) / 13510179523195317105))) ? ((((arr_12 [i_0] [i_1] [i_1] [i_2] [i_3]) + (arr_7 [i_0] [i_3])))) : 918321306)), 3376645990));
                        arr_14 [i_0] = ((var_5 ? (arr_12 [i_2] [i_2] [i_2 + 1] [i_2 - 4] [i_2 + 1]) : (arr_12 [i_1] [i_1] [i_2 - 2] [i_2 - 4] [i_3])));
                        arr_15 [i_0] [i_1] [i_2] [i_3] = (arr_7 [i_2] [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_15 = var_3;
                        var_16 ^= ((((4 ^ (arr_16 [i_2] [i_2 - 3] [i_2] [i_4] [i_2]))) | (((arr_16 [i_1] [i_2 - 1] [i_2] [i_2] [i_2 - 3]) + (arr_9 [i_4] [i_4] [i_2] [i_2 - 3] [i_2 - 1])))));
                        var_17 = ((!((min((arr_0 [i_1] [i_0]), (arr_4 [i_0] [i_1]))))));
                    }
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        var_18 = ((+(((arr_20 [i_0] [i_1] [i_2] [i_5] [i_2 - 2]) ? (arr_17 [i_0] [i_2] [i_2] [i_2]) : (arr_16 [i_0] [i_1] [i_2] [i_5] [i_2 - 2])))));
                        var_19 = ((102 ? (max(((918321308 ? var_10 : var_2)), ((max(-92, (arr_17 [i_5] [i_2] [i_1] [i_0])))))) : (((var_7 ? ((1 ? var_4 : (arr_0 [i_0] [i_1]))) : (max(var_0, 2147483637)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
