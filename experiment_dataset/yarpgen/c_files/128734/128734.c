/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_2 - 1] [i_1] [i_0] [i_0] = (max(((min(var_11, (arr_1 [i_0])))), (min(((var_3 ? var_4 : 128)), (max(var_1, var_0))))));
                    var_14 = (((15944414928680987725 % (arr_1 [i_2 + 2]))));
                }
            }
        }
    }
    var_15 = var_2;
    #pragma endscop
}
