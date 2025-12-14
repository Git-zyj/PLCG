/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = ((var_16 ? (arr_2 [21] [i_1]) : ((((max((arr_0 [17]), 16384))) - var_9))));
                var_19 = 16260850217821348419;
            }
        }
    }
    var_20 &= (((min(var_12, ((210 ? 61973 : var_6)))) << (var_12 - 32065)));
    #pragma endscop
}
