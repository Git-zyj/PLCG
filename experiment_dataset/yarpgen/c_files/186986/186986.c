/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = var_2;
                arr_5 [i_1] [i_1] [i_0] = (!-var_10);

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_9 [5] [i_1] [i_2] [i_0 + 2] &= ((~((-(arr_4 [i_0 - 1])))));
                    var_13 = arr_0 [i_2];
                    var_14 = (2412015098 <= -var_7);
                }
            }
        }
    }
    var_15 = ((65535 ? (min(0, 549755813887)) : (((((var_9 / var_2) >= (var_6 && var_6)))))));
    #pragma endscop
}
