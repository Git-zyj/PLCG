/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (min((min(38, (min(25189, var_5)))), (((!(((var_12 ? var_6 : -2097152))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 ^= var_11;
                arr_4 [i_1] [i_0] [8] = 7709060239119506018;
            }
        }
    }
    var_16 = (max((((((max(var_8, var_3))) ? (!var_0) : var_0))), (max((!var_1), var_4))));
    #pragma endscop
}
