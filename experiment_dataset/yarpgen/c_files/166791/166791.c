/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] = (max(((((max(-9223372036854775798, 1))) ? ((9223372036854775798 ? var_1 : -9223372036854775798)) : -29)), (2097610729 + var_7)));
                            arr_10 [i_1] [i_3] [i_2] [i_1] [i_0] [i_1] = (!var_4);
                        }
                    }
                }
                arr_11 [i_0] [i_1] [i_1] = (min(var_0, (((((28 ? var_5 : 127))) ? ((var_6 ? -9223372036854775791 : 3454386686)) : var_5))));
            }
        }
    }
    var_10 = (1 ? 1050729457012571494 : var_9);

    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_16 [i_4] = -4160920489306129873;
        var_11 = (1 | 306434932068511688);
        var_12 = 1;
        arr_17 [i_4] = (!var_9);
        var_13 |= 1;
    }
    #pragma endscop
}
