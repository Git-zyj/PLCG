/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (max(var_6, (((var_1 | var_2) ? (((max((arr_4 [i_0] [i_1]), 174)))) : (((arr_2 [i_0]) ? (arr_4 [i_0] [i_1 - 1]) : var_2))))))));
                var_14 = 81;
            }
        }
    }
    var_15 -= (167 == 10);
    var_16 = (1 * 1);
    #pragma endscop
}
