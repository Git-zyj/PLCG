/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((((arr_1 [i_0 - 1] [i_0 - 1]) < (max(var_16, ((min(var_8, var_13))))))))));
                    arr_8 [i_0] [i_1] [i_0] = (min(1, 1));
                }
            }
        }
    }
    var_18 = (-551643279 * -1);
    var_19 += (min((max((max(var_16, var_16)), ((min(var_8, var_11))))), (((max(var_14, var_14))))));
    #pragma endscop
}
