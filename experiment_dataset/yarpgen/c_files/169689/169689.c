/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] |= ((min(((~(-2147483647 - 1)), 20))));
                arr_8 [i_0] = (min(-var_2, (max((!-264122588), -961088485))));
                arr_9 [i_0] [15] [i_0] = 15413;
            }
        }
    }
    var_17 = ((1 ? -49897 : (max((max(1, var_1)), -58314))));
    #pragma endscop
}
