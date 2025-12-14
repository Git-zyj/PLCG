/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = -7595166093968940263;
        var_16 = (min(var_16, ((((arr_2 [i_0] [4]) ? ((-(arr_2 [i_0] [i_0]))) : ((((!(arr_1 [i_0]))))))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_17 ^= (min(255, -1));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_12 [8] [i_2] [i_3] = (((16907514186783206137 >> (1539229886926345490 - 1539229886926345455))));
                    arr_13 [10] [i_2] = 4;
                    arr_14 [i_1] [7] [i_1] = ((1 ? 51122 : (((max(7595166093968940263, 11938678387529923324)) / (((((arr_4 [3]) != 22))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_18 = (min((min(((min((arr_0 [i_1]), var_6))), ((-(arr_2 [i_1] [i_1]))))), (((1 ? 74 : 237)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_26 [i_1] [i_4 + 2] [i_7] [9] [i_5] [i_6] [5] = ((min(1, -1)));
                                var_19 = (max(var_19, var_2));
                                var_20 = (max(var_20, ((min(18446744073709551600, ((((arr_22 [i_4 + 2] [i_4 + 1]) < (arr_22 [i_4 - 4] [i_4 + 3])))))))));
                            }
                        }
                    }
                }
            }
        }
        var_21 ^= (min((arr_23 [i_1] [i_1] [i_1] [i_1]), (((((((arr_23 [i_1] [i_1] [i_1] [i_1]) ? var_1 : (arr_22 [i_1] [1])))) ? (((!(arr_22 [i_1] [7])))) : (((!(arr_23 [i_1] [i_1] [i_1] [1])))))))));
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
    {
        arr_29 [1] [i_8] = (arr_19 [5] [i_8] [i_8]);
        var_22 = (arr_15 [7]);
        var_23 = (max(var_23, (((247 ? var_0 : 1024653102)))));
        var_24 = ((max((arr_2 [i_8] [i_8]), var_14)));
    }
    var_25 = (max(var_25, ((min((((var_5 / var_12) ? 18446744073709551613 : (var_6 ^ var_2))), ((((var_3 || var_9) + (max(var_10, var_14))))))))));
    var_26 = ((!((((18 >> (var_0 + 617439468))) < (((var_3 ? 7292417333877536110 : 1)))))));
    var_27 &= (max(((var_11 ? ((min(16, var_0))) : ((var_0 ? var_0 : 4294967285)))), 6001));
    #pragma endscop
}
