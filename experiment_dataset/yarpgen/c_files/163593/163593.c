/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((var_17 ? ((((var_1 | var_17) << ((((14904114095536122808 ? 1 : 31)) - 1))))) : (max(-var_8, (1 * var_16)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (-127 - 1)));
                arr_4 [1] |= (((arr_3 [i_0] [i_0]) ? ((((min(1, (-127 - 1)))) ? 12 : (~103))) : (((-3521480575176978815 != (arr_3 [i_1] [i_0]))))));
            }
        }
    }
    var_22 *= ((((max((var_6 ^ 1), ((max(1, -7410)))))) ? (!var_11) : (~1)));
    #pragma endscop
}
