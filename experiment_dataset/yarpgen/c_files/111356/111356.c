/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 += (max(var_1, (5139448832041343347 | -16)));
                arr_6 [i_0 + 1] [i_0] [i_1] = (((max(((min(var_13, -3))), (arr_0 [i_0]))) % ((-(8 <= var_12)))));
                var_16 = ((((((-4320301443930452853 ? 2507940623 : var_6)))) ? ((-((var_5 ? 13307295241668208269 : 1)))) : var_7));
            }
        }
    }
    var_17 = (min(((max(2145386496, (((32545 ? var_11 : var_13)))))), var_5));
    var_18 -= ((!(((((max(var_3, var_14))) ? 1 : var_5)))));
    #pragma endscop
}
