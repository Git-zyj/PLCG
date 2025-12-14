/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_3 | 0);
    var_17 = ((((((((min(var_15, var_8)))) < ((var_8 ? var_5 : var_4))))) << (var_5 - 18063952430150569615)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = ((!((!(arr_0 [i_0])))));
                var_19 |= ((!(((var_4 + (!var_11))))));
            }
        }
    }
    #pragma endscop
}
