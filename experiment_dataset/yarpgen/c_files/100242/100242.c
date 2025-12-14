/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_8 [9] [i_0] = ((var_0 ? ((var_9 ? (arr_5 [i_0] [i_0 - 1]) : (arr_5 [i_0] [i_0 + 2]))) : ((((((5755449918070456324 ? 3621273617 : 80553427))) ? 43 : -1901779404)))));
                var_12 = (((min(((-67 ? (arr_2 [i_0] [i_1]) : var_1)), 19725)) ^ (arr_4 [i_0 - 1])));
            }
        }
    }
    #pragma endscop
}
