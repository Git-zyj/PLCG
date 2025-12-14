/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= 57493;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_0] = ((1408374229 ? (max(var_5, (arr_4 [4] [i_1] [i_1] [i_2]))) : (((-1408374217 & (-32767 - 1))))));
                    var_12 = 1408374243;
                }
            }
        }
    }
    #pragma endscop
}
