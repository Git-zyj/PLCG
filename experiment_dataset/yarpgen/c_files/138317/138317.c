/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    var_19 = (((((((var_4 ? var_13 : 4294967295)) % var_10))) ? (!0) : 6294185685375252680));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (min(65535, var_5));
                var_21 = var_1;
                arr_7 [i_0] [i_0] = var_16;
                arr_8 [i_0] [i_0] = 7;
            }
        }
    }
    #pragma endscop
}
