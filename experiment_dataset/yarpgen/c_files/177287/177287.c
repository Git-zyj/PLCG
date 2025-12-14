/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= 65535;
    var_17 = var_14;
    var_18 = max(var_9, (min(var_9, (min(var_9, 2)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = var_6;
                arr_7 [i_0] = (max((arr_1 [i_0 - 1]), (((arr_5 [i_0 - 2] [i_0 - 3]) ? (arr_1 [i_0 - 2]) : (arr_5 [i_0 - 3] [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] [i_2] [i_1] [i_2] = (min(65518, ((var_11 ? var_1 : var_4))));
                            var_20 = ((((((arr_2 [i_1 - 1]) / (arr_2 [i_1 + 1])))) ? (min((arr_2 [i_1 - 1]), (arr_2 [i_1 + 1]))) : ((var_5 ? var_13 : (arr_2 [i_1 - 1])))));
                            var_21 = (9 < var_6);
                        }
                    }
                }
                arr_13 [i_0] = (min((!var_10), (arr_6 [i_0] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
