/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_15 -= (min((min(129, 3195077867)), (min(606, (arr_2 [7] [i_1])))));
                            var_16 = 1661;
                            var_17 = (max(var_17, ((min(-28062, (arr_4 [i_0] [i_0] [i_0]))))));
                            var_18 = ((min(130, (arr_8 [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_3 - 1]))));
                        }
                    }
                }
                var_19 ^= (((min((arr_6 [i_1] [i_0] [i_0] [i_0]), 17898)) / (min((arr_6 [i_1] [i_1] [i_1] [i_1]), (arr_6 [i_1] [1] [i_0] [i_0])))));
            }
        }
    }
    var_20 += -127;
    var_21 = var_14;
    #pragma endscop
}
