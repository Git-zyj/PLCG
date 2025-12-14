/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(var_4, var_4))) ? 10061903171643734253 : ((var_13 ? var_15 : (var_15 ^ var_14)))));
    var_17 = (min(var_17, ((min((min(var_1, ((var_10 ? var_5 : var_2)))), (max(var_9, (max(var_6, var_2)))))))));
    var_18 = var_5;
    var_19 = -4711541207975211026;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 -= ((((var_6 <= var_1) > var_1)) ? ((min((var_1 && var_10), var_7))) : ((max((var_2 != var_3), (var_2 >= var_9)))));
                var_21 ^= (((((7931 ? 1 : 43671))) ? (max(var_6, ((8384840902065817362 ? 16 : 1)))) : (((max(var_5, var_8))))));
            }
        }
    }
    #pragma endscop
}
