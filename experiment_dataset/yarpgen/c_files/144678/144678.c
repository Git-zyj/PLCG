/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 -= (max(1019736914, 16888498602639360));
                arr_6 [11] [i_0] [i_0] = -1810495586;
                arr_7 [1] [1] = ((((max(((14 ? (arr_2 [i_0]) : -1019736917)), (1019736914 % 11)))) ? ((((arr_1 [i_1]) <= (arr_0 [i_1])))) : (((arr_5 [i_0] [i_1] [i_1]) ? ((max((arr_1 [i_0]), 43442))) : (max(-20630, (arr_0 [i_0])))))));
                var_15 = (((((arr_1 [i_1]) - (arr_1 [i_0]))) / ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
            }
        }
    }
    var_16 = (max(var_16, var_2));
    #pragma endscop
}
