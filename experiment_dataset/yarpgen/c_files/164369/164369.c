/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (((!1) ? ((((min(var_5, (arr_3 [i_0] [i_0] [i_1])))) * (arr_5 [i_0] [4] [10]))) : (((((var_6 ^ (arr_5 [i_0] [i_0] [i_1])))) ? (((!(arr_0 [i_0])))) : ((min(var_13, 41910)))))));
                arr_7 [i_0] [i_1] = (((max(564254931, (arr_1 [0])))) ? ((var_11 | (arr_6 [i_0] [i_0 - 3] [i_0]))) : (((-((min(1, -51)))))));
            }
        }
    }
    var_18 &= ((41906 ? 59294 : 41910));
    #pragma endscop
}
