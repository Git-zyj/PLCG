/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] &= ((!((max((225 && 9849654092567987400), 8190)))));
                arr_7 [i_0] [14] = var_5;
            }
        }
    }
    var_13 = 1;
    #pragma endscop
}
