/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_10 | (((!1383724642) | var_11))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 ^= (((-1488645863 + 2147483647) >> (((((((arr_4 [2] [i_2]) | 2147483634)) % (((min((arr_3 [i_2] [i_1] [i_2]), var_6)))))) - 2147483607))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((((((arr_7 [i_1 - 3] [i_1 + 1] [i_2] [0]) | var_3)) - (min(-var_13, (arr_3 [i_0] [i_1 - 3] [i_2]))))))));
                                var_19 = (arr_12 [11] [11] [i_2] [0] [i_2]);
                                arr_13 [0] [i_1] [i_2] [i_3] [i_1] = ((-(((max(-2147483634, (arr_11 [6] [i_1] [i_1] [i_1] [i_1] [6] [6]))) - 218))));
                                var_20 = (min(var_20, ((var_6 ? (((37 % (((var_3 || (arr_12 [i_0] [1] [i_2] [i_2] [i_4]))))))) : (min(var_15, (arr_0 [i_0] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_11;
    #pragma endscop
}
