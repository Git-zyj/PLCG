/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += -var_16;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((var_2 ? 74 : var_17)) % 1318524224));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_8 [i_0] [i_1] [i_1] = (min((arr_6 [i_0] [i_1] [i_1]), ((182 ? -16 : 1))));
            var_20 *= (arr_5 [i_1]);
            arr_9 [5] = 1;

            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                var_21 = (((((!((max(18446744073709551615, var_0)))))) / (arr_10 [i_2 + 2] [11] [i_2 + 1] [11])));
                var_22 |= min((~var_2), (((~(arr_2 [i_2])))));
            }
        }

        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            var_23 = ((((min(((15 ? 1 : 53)), (5486 || var_10)))) ? 53 : (((!(arr_7 [i_0]))))));
            var_24 = (min(var_24, (arr_10 [i_0] [i_0] [4] [i_3 - 2])));
            var_25 = (((((((((arr_11 [i_0] [i_3] [i_3]) ^ (arr_10 [i_0] [i_3 + 3] [i_3] [11])))) ? ((min(var_14, (arr_11 [i_0] [5] [i_3])))) : var_6))) ? 6489 : (min((((arr_1 [i_3]) - 2520547079878295423)), ((min(11, 2520547079878295409)))))));
            var_26 |= ((-((192 ? 2124 : -119))));
        }
        arr_14 [i_0] = (arr_10 [9] [i_0] [i_0] [i_0]);
        var_27 = (max(((((927234373454658342 << (((arr_10 [i_0] [i_0] [i_0] [11]) - 178)))) & -var_10)), (((((((arr_5 [i_0]) - 0))) ? ((max((arr_13 [11] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_0] [2])))) : (arr_0 [12]))))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_28 = 8;
                                var_29 = (arr_11 [1] [i_6] [9]);
                                var_30 = var_16;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                arr_35 [i_10] [i_9] [i_6] [12] [4] [i_4] |= 249;
                                var_31 = ((((min(21895, 54020))) ? (((!((max(561701260920439800, 10)))))) : ((min((arr_7 [i_4]), (arr_7 [i_4]))))));
                            }
                        }
                    }
                }
            }
        }
        var_32 &= (arr_2 [i_4]);
    }
    #pragma endscop
}
