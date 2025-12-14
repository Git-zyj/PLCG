/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = 59;
                    var_12 = (arr_9 [i_1]);
                }
            }
        }
    }
    var_13 = (((15751695557204988066 >> (((min(15751695557204988076, 15751695557204988066)) - 15751695557204988048)))));
    var_14 = var_2;
    #pragma endscop
}
