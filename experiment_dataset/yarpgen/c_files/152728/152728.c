/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (((~0) && (1 % 1)));
                arr_5 [i_0] = ((((min(var_5, 1))) ? var_11 : (arr_0 [i_0])));
            }
        }
    }
    var_16 = (max(var_16, ((min((((-1198371709 ? var_3 : -1))), var_14)))));
    #pragma endscop
}
