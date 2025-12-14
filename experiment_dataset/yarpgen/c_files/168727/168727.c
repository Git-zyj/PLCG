/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = 25;
                    arr_8 [i_0] [i_2] [i_2] [i_0] = ((1 ? -32756 : (-127 - 1)));
                    var_22 -= (-32767 - 1);
                    arr_9 [i_2] = max(((max(-32731, 1))), ((((min((arr_2 [i_2]), 0))) || ((min(1, 32744))))));
                }
            }
        }
    }
    var_23 = (max(((max(var_18, var_18))), -var_12));
    #pragma endscop
}
