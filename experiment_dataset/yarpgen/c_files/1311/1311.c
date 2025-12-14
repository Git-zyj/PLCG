/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (min(18446744073709551615, ((((var_3 ^ var_8) ? ((65375 ? var_5 : 160)) : (((-127 - 1) ? (-127 - 1) : 160)))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_21 ^= (arr_3 [6]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [8] [i_0] [5] = 65375;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1 - 1] = ((((min(-8960, (arr_13 [i_2] [i_1 - 1] [9] [i_0] [11])))) ? ((((((~(arr_2 [9])))) > (((arr_1 [i_0]) % var_0))))) : (arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 2] [5])));
                                var_22 = (max(var_22, (((((((-127 - 1) || (arr_15 [i_1 + 1] [i_1] [i_2] [6])))) > (arr_15 [i_1 - 1] [i_2] [i_1 - 1] [10]))))));
                                arr_17 [i_0] [i_1] [i_1 + 1] [9] [i_1 + 1] = ((min((arr_11 [i_0 + 1] [i_0 + 1] [5] [i_3] [i_4] [i_2]), (arr_4 [i_0] [i_0 - 1] [i_3 + 2]))));
                            }
                        }
                    }
                }
            }
        }
        arr_18 [i_0] = ((((((arr_13 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 + 1]) || (arr_13 [i_0] [i_0 - 1] [i_0] [i_0] [5])))) >> (((arr_10 [i_0 - 2] [9] [i_0] [i_0 - 1] [i_0 + 1]) + 26631))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_23 = (min(var_23, (((~(var_4 || 0))))));
        arr_23 [i_5] = (((~var_18) ? 46820 : ((46820 ? (arr_0 [i_5] [i_5]) : (-127 - 1)))));
    }
    var_24 = var_16;
    #pragma endscop
}
