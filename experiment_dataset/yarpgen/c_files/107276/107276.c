/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1613744056;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = (arr_4 [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = ((-(((((2147483647 ? var_0 : var_15))) ? (arr_12 [i_1] [i_2] [i_4]) : -var_5))));
                                var_20 = -1879151995;
                                arr_16 [i_2] [i_2] [i_0 - 2] = 807947250;
                            }
                        }
                    }
                }
            }
        }
        var_21 = (min(var_21, (arr_0 [1] [i_0])));
    }
    #pragma endscop
}
