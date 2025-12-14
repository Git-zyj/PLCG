/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [12] = (((arr_4 [i_0] [i_1 + 1] [i_1 + 1]) & (max(var_8, 2147483647))));
                    arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] = (min((((~((var_3 >> (var_9 - 3907031867)))))), -348356289));
                    var_11 += (((arr_2 [i_0] [i_0]) / ((max(-2147483647, 255)))));
                    var_12 ^= 348356289;
                }
            }
        }
    }
    var_13 = (max((~var_9), var_4));
    #pragma endscop
}
