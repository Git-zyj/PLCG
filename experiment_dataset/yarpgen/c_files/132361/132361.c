/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 += ((-(((((var_10 << (((arr_1 [i_0]) + 107))))) ? (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 4]) : (min(-1, (arr_6 [i_0] [i_1] [9])))))));
                    var_15 = (min((-2147483647 - 1), 16));
                }
            }
        }
    }
    #pragma endscop
}
