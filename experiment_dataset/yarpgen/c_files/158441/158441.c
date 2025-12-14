/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((-127 ? var_5 : (max(((max(var_8, var_7))), ((-1 ? 1 : 255))))));
    var_11 = (((var_2 ^ var_5) ^ var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = -var_8;
                var_13 ^= ((arr_3 [i_1 - 3] [i_1 - 1] [i_1 + 1]) ^ (min(-586499009, 3993586107653158233)));
            }
        }
    }
    var_14 &= (((max((var_7 ^ var_9), ((min(var_1, var_5))))) - -846685742493470050));
    var_15 &= (~var_4);
    #pragma endscop
}
