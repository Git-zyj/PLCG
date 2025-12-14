/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((var_5 | (min(6810071258657714906, 11636672815051836699)))), ((((!var_10) * (32758 != var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (arr_0 [i_0]);
                arr_4 [i_0] [i_0] [12] &= (((arr_1 [i_0 - 1]) ? (((arr_1 [i_1]) ? 14441261810710080983 : (arr_0 [i_1]))) : (arr_1 [i_0 + 1])));
                var_18 = (max(var_18, ((((((~(-9223372036854775807 - 1)))) ? (((~(-9223372036854775807 - 1)))) : ((var_3 & (arr_1 [i_0 + 1]))))))));
            }
        }
    }
    #pragma endscop
}
