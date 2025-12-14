/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min(var_14, ((max(var_11, 3333656613))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = ((((-((max(1, (arr_0 [i_0])))))) & ((max((min((arr_0 [i_0]), (arr_0 [7]))), (arr_1 [i_0]))))));
        var_22 ^= arr_1 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_23 = (arr_2 [19]);
                    arr_8 [i_0] [i_2] [2] = ((!(arr_3 [i_2 - 2])));
                }
            }
        }
    }
    #pragma endscop
}
