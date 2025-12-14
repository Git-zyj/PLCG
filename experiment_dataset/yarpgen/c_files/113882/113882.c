/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((-(((43960 || (arr_2 [i_1 - 3] [i_1 - 1] [i_0])))))))));
                var_15 = ((arr_3 [i_1] [i_1 - 2] [i_1 - 2]) ? (((arr_0 [i_1 + 2] [i_0]) ? (arr_2 [i_1 + 2] [i_1] [i_0]) : 21575)) : ((((((arr_3 [i_0] [i_0] [i_1]) ? (arr_3 [i_1 - 2] [i_1] [i_0]) : 65516))) ? (min(var_10, 65535)) : 43960)));
            }
        }
    }
    var_16 = (min(var_16, var_12));
    #pragma endscop
}
