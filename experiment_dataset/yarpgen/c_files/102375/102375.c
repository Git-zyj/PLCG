/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((min(1, -80)), var_1)));
    var_14 += ((-63598 ? (!-116) : ((var_9 - (var_0 * var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (min(1937, ((var_4 ? 255 : 200))));
                    var_16 = 200;
                    var_17 = (max(var_17, -32740));
                }
            }
        }
    }
    var_18 = ((((var_11 || (var_11 && var_10)))));
    #pragma endscop
}
