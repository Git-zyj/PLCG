/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_3;
    var_12 = ((min(var_3, (max(var_6, var_4)))));
    var_13 = 214;
    var_14 = (min(197, 255));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = ((42 & (~var_8)));
                    var_16 = 0;
                    arr_10 [i_0] [i_0 - 2] [i_0 - 2] = (max(((min(-0, 255))), (max(36, (~6663177013503693465)))));
                }
            }
        }
    }
    #pragma endscop
}
