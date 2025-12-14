/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((0 << (((var_8 <= ((min(var_9, 9516)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_0] [i_0] [i_0] = (((((min(9516, var_6))) ^ (min((arr_5 [i_0]), (arr_9 [i_0]))))));
                    arr_11 [i_0] [i_1] = (min(((((arr_6 [i_2 - 1] [i_0] [i_0]) || (var_8 && var_0)))), (arr_0 [i_0])));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = (max((-var_9 - var_6), -8664711747453688096));
                }
            }
        }
    }
    var_12 = -var_0;
    #pragma endscop
}
