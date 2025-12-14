/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_9, (min(((2147483647 ? 59623 : var_0)), (min(var_8, var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (max((((arr_4 [i_1] [i_1 + 1] [i_0]) ? var_9 : (arr_4 [i_1] [i_1 + 1] [i_1]))), (max((arr_4 [i_1] [i_1 + 1] [i_1]), 17))));
                var_12 = ((18446744073709551597 ? 1 : 22712));
            }
        }
    }
    var_13 = (((((~var_4) | 258853483))) ? (~var_9) : (var_1 ^ var_8));
    #pragma endscop
}
