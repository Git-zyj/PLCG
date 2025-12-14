/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((((4294967293 != 4294967284) ? 28 : (min(16, 28)))));
                var_16 = (max(var_16, ((min((((~(arr_0 [i_0])))), var_8)))));
                arr_5 [i_0] [9] [i_1] = (4294967253 ^ 4294967272);
                var_17 *= var_0;
            }
        }
    }
    var_18 ^= ((((var_3 ^ (min(var_8, var_4))))) ? (((((!var_2) && var_1)))) : var_2);
    #pragma endscop
}
