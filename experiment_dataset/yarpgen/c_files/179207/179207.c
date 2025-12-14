/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [0] [9] [i_0] = (arr_3 [i_0] [i_1]);
                arr_7 [i_1] [i_0] = (max((max((arr_1 [i_0]), (arr_1 [i_0]))), (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
            }
        }
    }
    var_17 = var_11;
    #pragma endscop
}
