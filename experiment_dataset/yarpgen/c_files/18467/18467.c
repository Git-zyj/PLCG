/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (arr_1 [i_1 + 3])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_3] = (((arr_4 [i_1 + 1] [i_1 + 1]) >> (((arr_0 [i_1 + 1]) - 154322765))));
                            var_22 = (((((arr_1 [i_3 + 2]) ? (((arr_1 [6]) + (arr_5 [i_3 - 1] [i_0] [i_0]))) : (arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_1 + 3])))) ? (((arr_1 [i_1 + 1]) / (arr_9 [i_0] [i_1 + 3] [i_2] [i_3 - 1]))) : (((arr_7 [i_0] [i_1 + 3] [i_3] [i_3 - 1]) ? (arr_7 [i_0] [i_1 + 1] [i_0] [i_3 + 2]) : (arr_7 [i_1] [i_1 + 3] [i_2] [i_2]))));
                            arr_11 [i_3] [i_3] [i_3] [i_0] = (((((((((arr_7 [6] [i_1 - 1] [i_2] [i_3]) ? (arr_6 [i_0]) : (arr_4 [i_3 + 1] [i_3 - 1])))) ? (((arr_7 [i_0] [i_1] [i_2] [i_3]) & (arr_0 [i_0]))) : (2275540944502288668 != 1363893871)))) ? 110 : (((arr_2 [i_2]) ? ((14036 ? 14058 : 10774125605434887616)) : (arr_3 [i_0] [8])))));
                            arr_12 [i_0] [i_3] [i_0] [i_0] = arr_5 [i_0] [11] [i_3 - 1];
                        }
                    }
                }
            }
        }
    }
    var_23 = var_8;
    #pragma endscop
}
