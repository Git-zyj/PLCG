/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((((((var_1 <= (min(var_10, var_3)))))) >= var_2));
    var_12 = ((min((min(918218795, var_6)), var_5)));
    var_13 = (min(var_13, -3515173925467343910));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                {
                    var_14 = 4179508585528116596;
                    var_15 -= var_4;
                    arr_10 [i_0] [i_0] = (min(-243936337953447700, var_0));
                    arr_11 [i_0] [i_0] [6] = (-(!-101));
                    var_16 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
