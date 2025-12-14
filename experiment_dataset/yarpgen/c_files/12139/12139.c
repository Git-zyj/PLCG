/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((max(var_10, 17207720334403288971)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_4] [i_2 - 1] [2] [i_0] [i_2] [7] = (arr_11 [i_2 - 1] [i_4] [i_4] [i_0 - 1]);
                                var_14 = var_5;
                            }
                        }
                    }
                    var_15 = (max(var_15, ((max((arr_1 [i_0 + 2]), (((arr_1 [i_0 - 3]) ? 5131463714711019309 : (arr_1 [i_0 + 1]))))))));
                    var_16 = (((arr_5 [i_0 - 4] [i_1 + 3] [i_2 + 1]) * var_1));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [12] [i_5] [i_6] = ((!(((arr_14 [i_0 - 1] [i_1 + 3] [i_1 + 1] [i_2 + 2]) || (arr_14 [i_0 - 4] [i_1 + 2] [i_1 + 1] [i_2 + 3])))));
                                var_17 = (arr_5 [i_2 + 2] [i_1 - 1] [i_0 + 1]);
                                var_18 = ((var_9 ? (((((3557801298 ? 0 : 13446))) ? (arr_14 [i_0] [i_0] [i_2] [13]) : -13446)) : ((min(var_8, (!818178083177713949))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_0;
    #pragma endscop
}
