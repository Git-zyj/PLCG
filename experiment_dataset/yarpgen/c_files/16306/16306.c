/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (min((((arr_0 [i_0] [i_0]) ? (14843 < 24) : ((((arr_2 [i_0]) > -7))))), 52));
                    var_13 = var_0;
                    var_14 = (max(((var_5 ? (((var_8 ? (arr_2 [i_0]) : 1256140204))) : (arr_3 [i_0]))), (((3038827085 ? -19493 : 2500726543)))));
                }
            }
        }
    }
    var_15 = var_9;
    var_16 = -18446744073709551568;
    var_17 = var_1;
    #pragma endscop
}
