/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = var_4;
                    arr_10 [i_2] [1] [i_2] [3] = ((((1244899768 ? 128 : 125)) - 56));
                    var_19 = (min(((127 + (arr_3 [i_0] [11]))), ((max(2147483647, -62)))));
                }
            }
        }
    }
    var_20 = var_7;
    var_21 = (((((var_0 ? ((var_2 ? var_7 : var_10)) : ((max(-98, var_14)))))) ? -2657832607283308149 : 1244899768));
    var_22 = (max(((~(122 | 1281951655))), (+-1281951656)));
    #pragma endscop
}
