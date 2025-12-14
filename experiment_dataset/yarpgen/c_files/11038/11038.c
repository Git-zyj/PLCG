/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2 + 2] [i_2] = (((((arr_2 [i_2 + 2] [i_2 - 1]) & (arr_2 [i_2 + 2] [i_2 + 1]))) | (arr_3 [i_1 - 1] [i_1 + 1] [i_2 + 2])));
                    arr_8 [i_0] [i_1] [i_2] = (min((arr_6 [i_0] [12] [i_2 + 1]), (min((((arr_3 [i_2] [4] [i_0]) ? 9223372036854775807 : (arr_6 [i_0] [i_2] [1]))), 58676))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            {
                arr_13 [i_4 + 2] = (min((((var_19 ? 24867 : (arr_5 [i_3] [i_4])))), var_19));
                var_20 = (min((!var_9), (!var_2)));
                arr_14 [i_3] |= (--9223372036854775807);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_21 = (max(var_21, var_11));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                arr_30 [0] [i_6] [i_7] [i_6] [i_5] = (min(var_2, (((min(var_12, 1)) * var_9))));
                                var_22 |= (min((((-9223372036854775807 ? 32756 : -1))), var_5));
                                var_23 = ((((((min(var_19, var_6)) % 336028523))) ? ((((((arr_23 [i_5 - 3] [i_8 + 1]) + 9223372036854775807)) >> (arr_15 [13] [i_6])))) : (min(-var_3, ((var_12 << (var_5 - 3645103395477092446)))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                arr_39 [i_5] [i_6] [i_6] [i_6] [i_11] [i_12] = ((arr_34 [i_5 - 3] [i_5 - 1] [i_10] [i_11] [i_10]) ? ((+((4294967292 ? (arr_15 [i_5] [i_6]) : 1)))) : ((var_11 ? (arr_19 [i_5 - 3] [i_5 + 2]) : var_4)));
                                arr_40 [1] [i_6] [i_10] [i_11] [i_11] = (max((((1187114758 ? (arr_16 [13]) : var_19))), (((arr_34 [15] [i_5 + 2] [15] [i_5] [i_5 + 2]) ? (arr_23 [i_5] [i_5 - 1]) : (arr_34 [i_5] [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
