/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = -18446744073709551615;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((32767 ? 122 : 73)))));
                var_16 = (max(var_16, (((-61 ? (max(((-(arr_3 [1] [1]))), var_2)) : ((max(var_6, 125))))))));
            }
        }
    }
    #pragma endscop
}
