/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 ^= (min((!var_10), (((var_11 >= (max(-886894477652541865, -2)))))));
    var_22 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = (arr_7 [i_0] [i_0]);
                    var_23 = var_5;
                }
            }
        }
    }
    #pragma endscop
}
