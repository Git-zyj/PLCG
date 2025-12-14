/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 *= (arr_1 [i_0]);
        arr_2 [i_0] [i_0] = ((1911389390 ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((((arr_1 [19]) > (arr_1 [i_0]))) ? (~var_9) : -1))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_9 [i_3] [i_3] [i_3] = (((~(arr_7 [1]))));
                    arr_10 [i_1] [i_1] [i_1] [i_3] = (arr_7 [i_1]);
                    var_18 = (((9223372036854775787 & -53) ? (arr_5 [i_3]) : ((~(arr_4 [i_2] [22])))));
                }
            }
        }
        arr_11 [i_1] [i_1] = ((-53 ? 1 : 0));
        var_19 = (max(var_19, (arr_3 [8])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    arr_17 [i_4] [10] = -var_13;
                    arr_18 [i_1] [i_1] [i_4] [i_1] = (arr_7 [i_1]);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_20 -= (min(((((arr_3 [i_5 - 1]) ? (arr_3 [i_5 - 1]) : (arr_3 [i_5 - 1])))), ((((min(3549005320092130925, (arr_8 [i_4] [i_4] [i_1] [i_4])))) ? (62 < -7744054536106419969) : ((2898647565565800696 * (arr_22 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                                var_21 = (((max(3, 127))) ? (((arr_24 [i_7] [i_7 - 1] [i_6 + 1] [1] [i_5 - 1] [i_1]) ? var_0 : 9223372036854775806)) : (((-((min(0, (arr_7 [i_7]))))))));
                            }
                        }
                    }
                }
            }
        }
        var_22 = (arr_16 [i_1]);
    }
    var_23 = 12;
    #pragma endscop
}
