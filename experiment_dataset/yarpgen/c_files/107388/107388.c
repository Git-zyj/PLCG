/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 2736422364;
    var_15 += var_13;
    var_16 = var_1;
    var_17 = 12019535997776904460;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((1 ? var_8 : 4294967295));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = var_4;
                    var_19 = (max(var_19, ((((9563 / -26350) << (7 && var_2))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4] |= 8896169331855100349;
                                var_20 = var_12;
                                var_21 |= (26380 / 18446744073709551594);
                                arr_16 [1] [i_1 - 1] [i_2] [i_3] [17] = ((4611650834055299072 ? -9568 : 2081798458));
                                arr_17 [i_0] [i_0] [i_0] [i_2] [8] [i_0] [i_4] = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
