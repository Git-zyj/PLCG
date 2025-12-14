/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_1 + 4] [i_0] [i_1 + 4] [i_1] = (min((min(var_8, var_6)), ((min((arr_6 [i_0 - 1]), (arr_6 [i_0 - 1]))))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_18 = (min(((max((arr_4 [i_0]), 1))), (min(var_3, (arr_10 [i_2 - 1] [i_0] [i_2 + 1] [i_2 + 1])))));
                        arr_12 [i_0] [i_0] [2] [i_3] = (min((min(var_7, (arr_10 [i_2 + 1] [i_0] [i_2 - 1] [i_2 + 1]))), ((max(249, 92768792)))));
                        var_19 = (max(var_19, ((min(6959, 1)))));
                    }
                }
            }
        }
    }
    var_20 = var_5;
    #pragma endscop
}
