/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (((7963051806704635378 & 0) & (((0 ? (var_4 % var_3) : (arr_4 [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_21 |= (min(((min(54, (arr_10 [i_0 - 1] [i_1 - 3])))), (((arr_10 [i_0 + 2] [i_1 - 2]) ? var_10 : (arr_0 [i_2] [i_1 - 3])))));
                                var_22 = ((-(((~0) ? (arr_4 [i_0]) : -1542362687))));
                            }
                        }
                    }
                }
                var_23 = (min(var_23, ((max(((min((arr_0 [6] [i_1 + 2]), var_10))), ((var_9 ^ (arr_9 [8] [i_1] [i_1] [i_1]))))))));
            }
        }
    }
    var_24 = ((var_5 ? var_16 : var_16));
    #pragma endscop
}
