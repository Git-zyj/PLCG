/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_12 &= ((((min(var_3, var_10))) * var_9));
                var_13 = (min(var_13, ((((!(arr_1 [i_0] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
