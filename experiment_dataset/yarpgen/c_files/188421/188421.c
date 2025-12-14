/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((min((((((min(var_8, var_12))) | ((var_12 ? var_16 : var_13))))), (min(((var_13 ? var_9 : var_5)), ((((var_14 + 2147483647) >> var_8))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] = ((((min((((-15 ? 36 : 29030))), ((var_1 ? var_0 : var_7))))) ? ((((max(var_3, var_3)) >> (var_8 % var_7)))) : ((((min(var_3, var_10))) + (min(var_10, var_1))))));
                    var_18 = ((-(((((var_15 ? var_0 : var_12))) ? ((var_15 ? var_5 : var_0)) : ((min(var_2, var_2)))))));
                }
            }
        }
    }
    #pragma endscop
}
