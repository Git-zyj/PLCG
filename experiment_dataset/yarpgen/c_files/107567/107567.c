/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (((((255 ? ((max(var_7, 4080607327))) : (max(549755813888, var_1))))) ? ((min(((var_2 ? (arr_1 [9]) : (arr_1 [i_0]))), var_6))) : var_15));
                var_20 = ((-2449856399420691768 ? var_1 : (1167866320 - 1167866319)));
            }
        }
    }
    var_21 = ((((((((-9223372036854775807 - 1) ^ var_3)) + 9223372036854775807)) << (9223372036854775797 - 9223372036854775797))) <= -534722854);
    var_22 = (max(var_16, (((var_16 ? var_3 : var_2)))));
    var_23 = ((4709376884491848521 ? 48 : 9223372036854775807));
    #pragma endscop
}
