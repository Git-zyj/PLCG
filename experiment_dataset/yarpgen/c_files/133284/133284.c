/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (max(((((min(var_14, -122))) - var_7)), 32767));
    var_20 = var_11;
    var_21 *= ((-(min(var_12, var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_22 = 4272396085;
                arr_6 [i_0] [i_1] [i_1] = var_3;
                var_23 = (max(var_23, 1));
            }
        }
    }
    #pragma endscop
}
