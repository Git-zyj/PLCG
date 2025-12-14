/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((((var_0 == var_9) >> var_2)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = ((-1532826977130834444 || ((((arr_1 [i_0 - 2]) * -96)))));
                var_12 -= -6573697153728820296;
            }
        }
    }
    var_13 = (min(var_8, var_9));
    #pragma endscop
}
