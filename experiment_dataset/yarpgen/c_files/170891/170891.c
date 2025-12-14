/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= 836108869;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [4] &= (arr_5 [4] [4]);
                    arr_10 [i_0] [17] = (((~(min(var_11, var_7)))));
                }
            }
        }
    }
    #pragma endscop
}
