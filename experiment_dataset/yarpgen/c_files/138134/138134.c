/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((max((((7676118615335176418 | 11800877) ? var_13 : var_7)), var_5)))));
    var_19 += var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_20 ^= ((((((max(15, 60182))) ? -89 : ((var_5 ^ (arr_0 [i_0] [i_1]))))) >> 10));
                var_21 = (max((max(32767, (arr_3 [i_0 - 3] [i_0 - 3] [i_1 + 3]))), (((arr_3 [i_0 + 1] [i_0 - 2] [i_1 + 2]) % (arr_3 [i_0 + 1] [i_0 + 1] [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}
