/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = 15940638483385016146;
                arr_6 [i_1] = (min(var_4, (arr_2 [i_0])));
                var_20 = (max(var_20, (((var_18 | (!1263698578))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] = ((+((((arr_10 [i_1]) & var_18)))));

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_21 -= (min((min(22928, -var_4)), ((max((arr_7 [i_0] [6] [i_2] [1]), (var_0 || var_15))))));
                                arr_14 [2] [i_1] [6] [3] [i_4] = ((+(((arr_9 [i_0] [i_1] [i_1] [8] [6] [i_0]) ? var_12 : (max(var_15, var_1))))));
                            }
                            var_22 = ((-(((arr_10 [i_1]) ? (max(var_10, var_14)) : (((arr_13 [i_1] [i_1]) + (arr_1 [6] [6])))))));
                        }
                    }
                }
                arr_15 [i_1] = ((-((var_9 + (arr_2 [i_1])))));
            }
        }
    }
    var_23 &= var_10;
    #pragma endscop
}
