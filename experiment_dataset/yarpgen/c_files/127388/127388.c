/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_8 ^ var_10) <= var_2)) ? 572982542847721848 : (var_4 <= 0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (arr_0 [i_0] [i_0]);
                var_18 = (arr_2 [i_1]);
            }
        }
    }
    var_19 *= (((((((16865759761648522508 ? 255 : 0))) <= var_8)) ? var_4 : var_2));
    var_20 *= var_9;
    #pragma endscop
}
