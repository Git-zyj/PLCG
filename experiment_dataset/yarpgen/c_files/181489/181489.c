/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = ((~-7167) ? ((~(arr_3 [i_0] [i_1 + 3]))) : ((~(arr_3 [i_0] [i_1 + 4]))));
                var_12 = 7169;
            }
        }
    }
    var_13 *= 255;
    var_14 = (var_10 / var_10);
    var_15 = (max((!255), ((~(max(var_8, 1))))));
    #pragma endscop
}
