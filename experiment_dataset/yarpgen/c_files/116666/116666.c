/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(min((((-28 ? -2 : var_17))), var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((var_7 ? (max(((max((arr_1 [i_0] [i_0]), var_14))), -4)) : 20));
                var_19 = -10081;
                arr_6 [7] [7] = -3904;
                arr_7 [i_0] = ((((((var_7 ? -21 : (arr_0 [8]))))) ? (3 >= 10080) : 19));
            }
        }
    }
    #pragma endscop
}
