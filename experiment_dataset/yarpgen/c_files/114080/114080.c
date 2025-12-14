/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_21 = (min((-83 || 30713), (491384612313535091 & var_5)));
                var_22 = ((min(var_10, -27)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_23 = ((~(arr_1 [i_3] [i_1])));
                            var_24 = ((((103 | 5582320312200069580) <= -1)));
                            arr_9 [i_0] [i_2] [i_0] [i_3] = (((!(arr_2 [i_1 - 1]))));
                            var_25 = ((max(-103, 23916)));
                        }
                    }
                }
            }
        }
    }
    var_26 = ((5 << (7865898760818167011 - 7865898760818167005)));
    var_27 = -491384612313535067;
    #pragma endscop
}
