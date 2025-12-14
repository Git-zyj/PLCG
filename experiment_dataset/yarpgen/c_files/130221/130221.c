/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -2608536494100229769;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = -var_7;
                    var_12 = (max(var_12, ((((((min(var_2, var_8))) ? (min((arr_1 [i_1]), 2147483647)) : (arr_6 [i_0] [i_1] [14])))))));
                }
            }
        }
    }
    var_13 = var_1;
    var_14 = (min(var_3, -var_6));
    var_15 = var_2;
    #pragma endscop
}
