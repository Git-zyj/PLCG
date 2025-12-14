/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = ((((min(var_8, (-127 - 1)))) ? 1 : 1));
                arr_6 [i_1] = 9223372036854775807;
                var_14 = ((((var_0 ? (((((arr_2 [i_1] [i_1]) || 119511928)))) : (((arr_0 [i_0]) ? var_5 : (arr_3 [i_1] [i_1] [i_1])))))) ? var_9 : 26);
            }
        }
    }
    var_15 = (((min(((var_12 ? 386720252 : -17013)), var_11)) >= ((var_2 & ((var_12 ? 17004 : 386720252))))));
    #pragma endscop
}
