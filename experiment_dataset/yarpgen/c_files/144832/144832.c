/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (var_6 != -var_5)));
    var_18 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_2] = 47373;
                                var_19 = max((((!(((arr_16 [i_0] [4] [4] [4] [i_3] [4] [i_4]) || var_3))))), ((var_9 >> (var_12 - 53014))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_20 = (min((max(((2028661170 ? (arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 2]) : (arr_2 [i_2]))), (max((arr_5 [i_0] [i_1 - 1] [i_5]), -2028661171)))), ((((arr_7 [i_1] [i_2]) >= var_12)))));
                        arr_20 [5] [5] [i_1] [i_1] [i_2] [i_5] = (-((((max(var_0, -2028661162))) ? var_6 : (arr_15 [i_0 - 1] [i_1 + 2] [i_2] [i_0 - 1] [i_2] [i_0] [i_0]))));
                    }
                }
            }
        }
    }
    var_21 = ((var_12 ? var_8 : (!2028661172)));
    #pragma endscop
}
