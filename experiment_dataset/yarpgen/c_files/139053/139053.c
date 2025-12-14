/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_10 = ((((((((arr_3 [i_1] [i_1]) ? (arr_0 [i_0]) : var_6)) < (((arr_2 [i_0] [i_1] [i_2]) ? var_3 : -965014437))))) < ((((arr_7 [i_0] [i_1] [i_0] [i_1 - 1]) <= 0)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_3] [i_0] [i_0] [i_1] [i_0] = 0;
                                var_11 = (max(53, 3304283672));
                                var_12 = (min(var_12, ((min(((+((9223372036854775807 ? (arr_0 [i_0]) : 90)))), (arr_8 [i_0] [i_1] [i_2] [i_3] [i_2]))))));
                                arr_14 [18] [i_1] [i_2] [18] [i_1] = min((min((arr_2 [i_1 - 1] [i_1] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1] [i_1 + 1]))), (((((arr_0 [i_1 - 1]) & var_5)) - var_5)));
                                var_13 *= (((arr_6 [i_1] [i_1] [i_3]) ? (max(((((arr_3 [i_1] [i_0]) && 1389444876))), 1064581143)) : var_8));
                            }
                        }
                    }
                    var_14 = (min(var_14, 0));
                    var_15 = ((((arr_3 [i_1 + 1] [i_1]) ? (arr_3 [i_1 - 1] [i_1]) : (arr_6 [i_2] [i_1 + 1] [i_0]))));
                    arr_15 [i_1] = (arr_7 [i_2] [5] [i_2] [5]);
                }
            }
        }
    }
    var_16 ^= var_2;
    var_17 = ((var_9 ? (!9223372036854775795) : (!var_9)));
    var_18 = var_2;
    #pragma endscop
}
