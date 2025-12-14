/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(-14, 38));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (arr_1 [i_0]);
                    var_17 = (((((min(1, 14))) / -96)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = (!var_12);
                                var_19 = (14 ^ -14);
                                var_20 = ((((((arr_9 [i_0] [4] [i_0]) ? var_8 : (arr_10 [i_2 + 2] [i_2 + 3] [i_2 + 2] [i_2])))) ? (~262455220) : (max(127, (((arr_6 [i_0] [1] [i_1] [1]) ? var_10 : (arr_0 [i_3] [i_3])))))));
                            }
                        }
                    }
                }
            }
        }
        var_21 = (min(var_21, var_7));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_22 = (max(var_22, (arr_12 [i_5])));
        var_23 &= 18214736389889475593;
    }
    #pragma endscop
}
