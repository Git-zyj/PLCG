/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((!(var_12 | var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = min((((arr_3 [i_0] [0] [i_0]) ? (((arr_0 [i_0]) ? var_0 : (arr_1 [i_0] [8]))) : (((((arr_0 [i_2]) < (arr_5 [i_0]))))))), (((!(((var_12 ? var_15 : var_1)))))));
                            var_17 += ((((((((max(var_13, 0)))) & ((1024 ? var_8 : (arr_6 [i_0] [i_0] [i_0] [8])))))) ? (arr_6 [i_0] [i_0] [i_2 - 1] [i_2 - 1]) : (arr_3 [i_0] [8] [i_1 - 1])));
                        }
                    }
                }
                var_18 = (arr_2 [i_0] [i_1 - 1]);
            }
        }
    }
    #pragma endscop
}
