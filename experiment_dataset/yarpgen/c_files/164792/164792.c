/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_7 / var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 += 19;
                    arr_8 [i_0] [17] [i_0] [i_0] = ((-1694681229 ? ((((((max((arr_3 [i_0] [i_0]), 69))) != (arr_0 [i_0]))))) : ((((69 ? (arr_0 [i_0]) : (arr_5 [i_0] [i_1] [i_0]))) & (-9223372036854775807 - 1)))));
                    var_12 = (max(var_12, (arr_7 [i_2] [i_2] [i_2] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
