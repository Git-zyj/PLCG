/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_8 ? var_2 : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_15 = ((((((max(var_12, 1))) ? (max(1, 562881233944576)) : var_10)) / (min((arr_3 [i_0] [3] [3]), (~var_8)))));
                var_16 = (((((min(var_4, (arr_2 [i_0])) != 1)))));
            }
        }
    }
    var_17 -= (-12044390376983463868 & (((2296835809958952960 % -102) | (((var_7 ? var_12 : var_1))))));
    #pragma endscop
}
