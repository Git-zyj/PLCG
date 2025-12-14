/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] = -5665182714873355133;
                var_12 = (min(var_12, (((var_11 ? ((((min(var_6, var_4))))) : ((var_8 ? ((var_6 ? (arr_2 [0]) : var_11)) : (!var_3))))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_0] = (!14903);
                            arr_11 [i_1] [i_1] [13] [13] = (22804 | 1033245935);
                            arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] = (arr_1 [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_13 = var_6;
    var_14 ^= (min(var_9, ((var_2 ? var_2 : 50632))));
    #pragma endscop
}
