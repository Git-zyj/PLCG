/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (((46497 != (arr_7 [i_0]))));
                    var_11 = (min(var_11, (arr_2 [i_0] [i_0] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
