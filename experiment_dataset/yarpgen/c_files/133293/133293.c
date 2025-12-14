/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = ((!(((max(var_4, var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 -= var_2;
                                arr_10 [i_2] [i_2] = var_3;
                            }
                        }
                    }
                    var_19 = (min(var_19, ((((((((arr_7 [i_0] [2] [i_0] [0]) <= var_13)))) ? (arr_0 [i_1]) : (arr_2 [i_2 + 1] [8] [i_0 - 2]))))));
                }
            }
        }
    }
    var_20 = (max(var_20, (((~((max(var_7, var_0))))))));
    #pragma endscop
}
