/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((1271785001 ? -71 : (((1271784987 || ((max(0, 4621))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((((arr_1 [i_0] [i_1]) + 2147483647)) << (((((arr_1 [i_1] [i_0]) + 1354963562)) - 10)))));
                arr_7 [i_1] = (((var_11 ? 216 : ((min(103, 216))))));
                arr_8 [i_0] [i_0] = 207;
            }
        }
    }
    #pragma endscop
}
