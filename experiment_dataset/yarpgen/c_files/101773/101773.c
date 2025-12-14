/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_11 * -104) ? var_6 : var_7));
    var_14 = ((9044873241158810063 ? 119 : 32));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = 111;
                    arr_10 [i_0] [i_0] = ((var_5 ? (((var_12 ? var_6 : 1989872594))) : (((var_8 & 7553) ? ((max(-111, var_10))) : var_0))));
                    arr_11 [i_0] = -12392;
                    var_16 = (min(var_16, (((((min(((min(-115905560, 12395))), (min(-3354795690931133803, var_8))))) ? (max(-90, var_2)) : var_2)))));
                    arr_12 [i_0] [i_0] = (min(((-4975146660146224190 ? var_6 : ((var_10 ? var_10 : 0)))), var_3));
                }
            }
        }
    }
    #pragma endscop
}
