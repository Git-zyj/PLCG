/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_10, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 = (((arr_4 [i_3 + 1]) ? ((((-(arr_4 [i_2]))) | (arr_7 [i_1] [13] [i_3]))) : (((var_16 ? (((!(arr_2 [i_3] [i_0])))) : 35)))));
                            var_21 ^= ((((var_10 & (3605777187646194796 & 0))) / ((((min(2114889954, -16096))) ? -16096 : ((22 ? 2603120172 : 26388279066624))))));
                            arr_8 [i_2] [i_2] [i_2] [9] = ((((min(-16096, -var_7))) == (var_11 / -5490040391450143428)));
                        }
                    }
                }
                var_22 = (((((((!(arr_3 [i_1] [0] [i_0]))) ? ((35894 ? -4083154062131634016 : -50)) : (-1988964329 & 26388279066620)))) || 665106229));
                var_23 = (min(var_23, (arr_3 [9] [10] [11])));
            }
        }
    }
    var_24 = ((((((var_11 / var_1) ? var_14 : ((var_0 ? var_8 : var_4))))) ? 2180077342 : var_14));
    #pragma endscop
}
