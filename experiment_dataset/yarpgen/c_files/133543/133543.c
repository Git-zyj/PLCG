/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_2, var_10));
    var_17 += var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 += var_14;
                    arr_7 [i_0] [i_1] [i_0] [1] = -var_4;
                }
            }
        }
    }
    #pragma endscop
}
