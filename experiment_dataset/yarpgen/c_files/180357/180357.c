/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_7 % var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = min((min(-var_1, (1759796362 <= 17103827539818100286))), ((((var_12 ? 127 : var_12)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 = var_16;
                            var_20 = ((-((-1759796389 ? (arr_2 [i_1 + 1] [i_3 - 1]) : (arr_12 [i_3 + 2] [i_3 + 1] [i_3 - 2] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
