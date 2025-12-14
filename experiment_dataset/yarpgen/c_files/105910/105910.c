/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105910
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
                var_12 = (max(var_12, 21));
                arr_4 [i_0] &= ((!75) ? (700408638 || -69) : (arr_2 [i_0] [i_0]));
            }
        }
    }
    var_13 &= (((((-((max(var_10, var_7)))))) ? var_2 : var_9));
    var_14 = ((((((70 ? var_5 : var_4))) ? ((-70 ? var_5 : var_7)) : var_5)));
    var_15 = (max(var_15, var_3));
    #pragma endscop
}
