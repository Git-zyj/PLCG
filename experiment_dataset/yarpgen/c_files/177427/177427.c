/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_0);
    var_13 = (min(var_13, (((!((((((var_7 ? var_0 : var_4))) ? var_3 : var_3))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [1] = -95;
                var_14 = ((((((15 ? 1 : -3356544076912971791)))) ? (arr_0 [i_1] [i_0]) : (max(((4294967280 ? -3356544076912971791 : (arr_3 [i_1]))), ((((arr_3 [14]) ? -26846 : var_6)))))));
                var_15 = (((26874 > 26874) != var_4));
            }
        }
    }
    var_16 = (min(var_16, (((var_8 ? 1 : ((-26874 ? (83 <= 2147483647) : 103)))))));
    var_17 = ((((((((var_1 + (-2147483647 - 1)))) ? ((-103 ? 7705046455477961254 : 1)) : ((var_1 ? var_5 : var_2))))) ? var_1 : var_5));
    #pragma endscop
}
