/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_8 & var_2) ? var_9 : var_7)) % ((max(((max(229, var_11))), ((7474821971208111618 ? 34 : 63801)))))));
    var_13 = (min(var_4, ((((min(var_7, var_7))) ? var_1 : ((-47 ? var_4 : var_0))))));
    var_14 = (min(var_14, ((max(var_2, ((((var_2 ^ var_7) ? ((46 << (-24 + 44))) : var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 -= (max((((arr_1 [i_0]) ? (min((arr_3 [i_1] [i_1] [i_0]), (arr_5 [i_0]))) : (max((arr_0 [i_0]), (arr_5 [i_1]))))), (((((min((arr_3 [i_0] [i_0] [i_0]), (arr_4 [i_0])))) && (((arr_2 [i_0] [i_0] [i_0]) != (arr_5 [i_1]))))))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] = (min((arr_1 [i_4]), (arr_1 [i_0])));
                                arr_14 [i_3] [i_2] [i_0] = ((max((arr_6 [i_0] [i_0] [i_0]), ((((arr_6 [i_2] [i_2] [i_1]) > 2585081594))))));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_16 = ((((((arr_16 [i_6]) ? (arr_24 [i_9] [i_6] [i_6] [i_6] [i_9]) : (arr_6 [i_8] [i_8] [i_8])))) ? ((((arr_5 [1]) <= (arr_3 [i_5] [i_7] [i_8])))) : (arr_27 [i_5] [i_5] [i_7] [i_8] [3])));
                                arr_28 [i_5] [15] [i_7] [i_9] [i_5] = (((arr_19 [i_5] [4] [i_5] [i_5]) ? 35 : 463940817));
                                var_17 = ((((((arr_15 [i_9]) ? (arr_23 [i_7] [i_5]) : (arr_5 [i_5])))) ? (((154 ? 20668 : 0))) : (((arr_24 [i_5] [i_6] [i_9] [i_6] [i_7]) + (arr_8 [i_5] [i_5] [i_5] [i_5])))));
                            }
                        }
                    }
                    var_18 |= (((((arr_7 [i_7] [i_7] [i_7]) ? (arr_12 [i_5] [i_5] [i_5] [i_5] [i_5]) : (arr_4 [i_5])))) ? (((arr_20 [i_6] [i_6] [i_6] [i_6]) ? -45575563 : (arr_4 [i_7]))) : (((arr_10 [i_5] [i_6] [i_7]) ^ (arr_1 [i_6]))));
                    arr_29 [i_7] [17] [i_7] [i_6] = (arr_9 [i_5] [i_5] [i_5] [i_5]);
                }
            }
        }
        var_19 = (((arr_16 [i_5]) ? 782320889 : 2768406349));
        var_20 = (arr_1 [i_5]);
    }
    #pragma endscop
}
