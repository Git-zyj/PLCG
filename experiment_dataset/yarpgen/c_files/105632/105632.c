/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 2] [i_2] [i_2] = arr_1 [18];

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_19 = ((-((max((arr_4 [i_0 + 3]), (min(1, -581)))))));
                        var_20 = (max(var_20, ((((arr_0 [i_0 + 1] [i_2]) ? (max((max(4293936705, 20525)), (((-28342 ? (arr_4 [i_0]) : var_18))))) : var_4)))));
                        var_21 = var_9;
                        var_22 -= (max(((min((arr_4 [i_3]), var_18))), ((-(max(11689, var_3))))));
                    }
                }
            }
        }
    }
    var_23 = var_11;
    #pragma endscop
}
