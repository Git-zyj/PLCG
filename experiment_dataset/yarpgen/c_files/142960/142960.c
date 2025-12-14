/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = ((113 ? 1209633068 : ((((((1209633068 ? (arr_0 [i_3]) : (arr_4 [i_0] [i_3] [i_2])))) ? 113 : 0)))));
                                arr_12 [i_0] [i_0] [13] [i_0] [i_0] = (arr_10 [i_4] [i_3] [8]);
                                var_15 = (min(1, -103));
                            }
                        }
                    }
                }
                arr_13 [i_1] [i_0] = -808878054;
            }
        }
    }
    var_16 -= -88;
    var_17 = 0;

    /* vectorizable */
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        var_18 += ((0 ? (arr_14 [i_5 - 1]) : (51815 > 41798)));
        var_19 = ((113 ? (((arr_14 [i_5]) ? 808878054 : 18446744073709551615)) : (arr_15 [i_5])));
    }
    #pragma endscop
}
