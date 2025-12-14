/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((((1 ? 1 : 1)) >= ((-(var_1 * var_9))))))));
                arr_5 [i_0] [i_0] [i_0] = 1;
                var_16 -= ((((((min(-31478, -31452))) ^ var_1)) <= (((var_13 || 65522) >> (var_13 - 15218)))));
            }
        }
    }
    var_17 = (min(var_17, (((var_6 ? (!var_4) : var_10)))));
    var_18 = 0;
    #pragma endscop
}
