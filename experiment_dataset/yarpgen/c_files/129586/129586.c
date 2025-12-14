/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((min(2025682411836135875, (arr_4 [i_1] [i_1 - 1] [i_1 - 3]))))) ? ((var_10 ? (((-(arr_2 [i_0] [i_1 + 1])))) : (var_14 + -1))) : var_9);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_15 = var_0;
                            arr_12 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3 + 2] = ((~(max(var_12, var_2))));
                            var_16 *= ((!(arr_0 [i_0] [i_1 + 1])));
                        }
                    }
                }
            }
        }
    }
    var_17 = var_13;
    #pragma endscop
}
