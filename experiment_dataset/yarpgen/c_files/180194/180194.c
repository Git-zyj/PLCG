/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] |= 0;
                                var_16 = ((min(4294967295, var_14)));
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_1] [i_2] [3] = ((0 > ((((288212783965667328 > (0 <= 0)))))));
                        var_17 = (max(var_17, (((+((var_6 ? (arr_17 [i_2] [i_2]) : (((((arr_3 [i_0 + 1] [i_5 - 3]) > 13345411765803904304)))))))))));
                        arr_20 [i_5] [i_2] [i_1] [i_1] [i_0 + 4] [i_0] = (min(((((((arr_4 [i_0] [i_1] [i_1]) | var_4)) <= (arr_8 [i_1] [9] [0] [i_1])))), (var_10 > var_11)));
                        var_18 = (min(var_18, (((min(var_10, 1))))));
                    }
                }
            }
        }
    }
    var_19 |= var_3;
    #pragma endscop
}
