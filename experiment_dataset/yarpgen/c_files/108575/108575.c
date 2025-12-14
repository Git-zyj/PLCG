/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_11 = max((arr_0 [i_0]), (max(-1, 8615543764742616635)));
        var_12 = (((((8191 ? (arr_0 [i_0]) : (arr_0 [i_0])))) % (arr_0 [i_0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            {
                var_13 = (min((arr_2 [i_1 + 1]), (arr_2 [11])));
                var_14 = (min(1658035126554552560, 1));
                arr_7 [1] [9] &= var_4;
            }
        }
    }
    var_15 = 1;
    #pragma endscop
}
