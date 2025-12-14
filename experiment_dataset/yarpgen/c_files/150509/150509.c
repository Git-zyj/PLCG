/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((var_18 << (var_3 + 7022379091452665358)))) ? var_7 : var_12)) * ((((var_12 && (-32767 - 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (~(((!(-9223372036854775807 - 1)))));
                var_21 = (-((var_13 * (arr_0 [1] [18]))));
                var_22 = 4186756646;
            }
        }
    }
    var_23 = ((((max(var_1, var_5)) >> (((var_17 ^ var_0) - 1500782046)))));
    #pragma endscop
}
