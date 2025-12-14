/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_11 << ((((1447251482 ? 1240105966935187213 : ((min(2847715814, 2087242467))))) - 1240105966935187204))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [3] [11] = (arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_3] [i_0] = ((1447251482 ? 1447251479 : (arr_5 [i_3 + 2] [i_3] [7] [i_3 + 1])));
                                var_15 = (max(var_15, (((arr_13 [i_0] [i_1] [i_1] [i_2] [4] [8]) ? (arr_0 [i_2]) : (var_4 > var_10)))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] = (((arr_1 [i_0]) ? (arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [0]) : (arr_1 [i_2])));
                    var_16 *= -4444734514888319237;
                    arr_16 [8] [i_1] [i_1] = (arr_12 [i_0]);
                }
            }
        }
        arr_17 [i_0] = (arr_9 [i_0] [6] [i_0] [i_0]);
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_21 [i_5] = var_11;
        var_17 += (((var_1 == var_5) >= 34229));
        var_18 = (((~26) ? ((((((arr_19 [i_5]) & (arr_20 [i_5])))) ? (arr_19 [i_5]) : ((var_13 ? -5424 : 9049)))) : ((min((arr_18 [i_5]), (arr_18 [i_5]))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_19 += min((max(44068, (((-609898732 + 2147483647) >> (((arr_22 [i_5]) - 1897388189)))))), 46895);
                    arr_26 [i_7] [i_6] [i_6] [i_7] = ((!(arr_25 [i_7] [i_7] [i_7] [i_5])));
                    arr_27 [i_5] [i_7] = ((((((var_4 ? (arr_24 [i_5] [i_5] [i_6] [i_7]) : 36566)))) / (~var_10)));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        var_20 *= (((((((arr_29 [i_8]) ? 2207724828 : 2031071981))) && (((~(arr_29 [i_8])))))));
        var_21 *= ((~(((1240105966935187213 | (arr_28 [i_8] [i_8]))))));
        arr_30 [i_8] [i_8] = (((((((((arr_28 [i_8] [i_8]) ? 5527603559846336305 : var_12))) ? -4444734514888319237 : (arr_29 [i_8])))) ? 36560 : (((arr_29 [i_8]) ? 31310 : (((-1905748597 ^ (arr_29 [i_8]))))))));
        arr_31 [i_8] [i_8] = (var_4 << 50);
        arr_32 [i_8] = (!var_0);
    }
    /* vectorizable */
    for (int i_9 = 4; i_9 < 15;i_9 += 1)
    {
        var_22 = (arr_29 [i_9 - 3]);
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 14;i_12 += 1)
                {
                    {
                        var_23 = (((arr_38 [i_9 - 4]) & (arr_37 [i_12 - 4] [i_12] [i_12])));
                        var_24 += ((!(arr_42 [i_9] [i_9] [i_9] [i_9 + 2] [i_9])));
                        var_25 ^= -var_12;
                        arr_43 [i_10] [i_10] [i_11] [i_12] [15] = (((arr_40 [8] [i_9 + 1] [1] [i_10]) / (arr_40 [13] [i_10] [i_11] [i_10])));
                    }
                }
            }
        }
    }
    var_26 = (min(var_26, var_12));
    #pragma endscop
}
