/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~28672) ? ((((var_6 && var_1) ? (min(var_12, var_18)) : var_10))) : ((-(var_4 * 8905477380923532443)))));
    var_21 = ((~(9541266692786019153 ^ var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_22 = ((!((((((var_17 ? var_17 : var_12))) ^ ((19307 ? 9541266692786019167 : 26779)))))));
                var_23 = (((((-(19305 / 17)))) > ((max(61, var_14)))));
            }
        }
    }
    #pragma endscop
}
