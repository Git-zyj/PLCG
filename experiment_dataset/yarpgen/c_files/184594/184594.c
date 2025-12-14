/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((!((max(65519, var_12)))))) ^ ((((-27600 ^ var_5) && ((min(var_4, var_11))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((((max(-4629961040732163343, 4629961040732163351)) + -9155456874705390432)) - -1439807146)))));
                arr_4 [i_0] = -1;
                var_16 = (((((max(15498670137802752315, (arr_2 [i_1] [1]))))) ? (min((min((arr_2 [i_0] [i_0 + 3]), var_3)), -var_8)) : (arr_3 [i_0] [i_0 + 1] [i_0])));
                var_17 = ((-6861 ? 36766 : 113));
            }
        }
    }
    var_18 = (max(var_18, (min(var_10, (((((var_13 ? 4860184334094141628 : var_0))) ? var_10 : var_11))))));
    var_19 = ((1 ? (((((var_6 ? 661580748083897659 : var_0))) ? var_2 : (var_4 - var_7))) : var_6));
    #pragma endscop
}
