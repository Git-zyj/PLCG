/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (18795 + var_7);
    var_17 = (~var_0);
    var_18 = (!59241);

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [12] &= (((((arr_0 [1]) ? (((arr_1 [8]) ? (arr_0 [0]) : (arr_1 [12]))) : (((-1 & (arr_1 [1])))))) ^ (arr_0 [10])));
        var_19 = var_10;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 20;i_3 += 1)
                {
                    {
                        var_20 = ((((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1]) ? ((max((arr_7 [i_0] [i_1] [6] [i_2]), 91))) : (arr_10 [i_0] [i_0] [i_0] [i_2] [i_3])))) + ((+(((arr_0 [i_0]) ? -748224969 : (arr_3 [i_0] [i_1] [i_0])))))));
                        var_21 = ((((((((var_3 << (-18795 + 18807))) == -103)))) & ((((var_10 != (arr_7 [i_0] [i_1] [i_0 - 1] [i_3 - 2]))) ? (min(29300469, (arr_5 [i_0] [i_0] [i_0]))) : 1))));
                        var_22 = ((min(var_11, var_7)));
                        arr_11 [i_3] [i_0] [i_2] [i_3] [1] [i_3] = (i_0 % 2 == 0) ? ((((min((arr_1 [i_0]), (arr_1 [i_0]))) << (18795 - 18795)))) : ((((((min((arr_1 [i_0]), (arr_1 [i_0]))) + 9223372036854775807)) << (18795 - 18795))));
                    }
                }
            }
        }
        arr_12 [i_0] = ((-((((((arr_4 [i_0]) & (arr_4 [i_0])))) ? (((~(arr_6 [i_0] [i_0] [i_0] [i_0])))) : ((~(arr_1 [i_0])))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                {
                    var_23 = (((~7168753459865150863) ? (arr_13 [i_6 - 2]) : (((!(((var_13 ? var_13 : (arr_18 [i_4] [i_5])))))))));
                    arr_21 [i_6] [i_5] [i_6] [i_6] = ((((max((((134217727 ? (arr_9 [i_4] [i_4] [i_4] [1] [i_4]) : 262143))), ((var_4 ? (arr_17 [i_4]) : -2363587189402281176))))) ? (((arr_5 [i_6] [i_6 + 1] [i_6 - 2]) ? (arr_5 [i_6] [i_6 - 1] [i_6 - 2]) : (arr_5 [i_6] [i_6 - 2] [i_6 - 1]))) : ((((((arr_7 [i_4] [i_5] [i_5] [i_5]) ? (arr_15 [15]) : (arr_19 [0] [i_5] [i_6 + 1] [i_6])))) ? (arr_1 [i_6]) : var_10))));
                    var_24 = ((((((((115 ? -581283534 : 9872))) ? ((min(1991972934, -1326711944))) : (min(2095145597700168805, 7168753459865150863))))) ? var_15 : (((((var_9 ? (arr_4 [i_6]) : 1))) + (arr_5 [i_6] [i_4] [i_6 + 1])))));
                    arr_22 [i_6] [i_6] [i_4] = ((var_15 && (((arr_0 [i_6]) && var_7))));
                }
            }
        }
        var_25 = min(var_5, ((-1326711920 ? 0 : 86)));
    }
    var_26 = (max(var_26, var_14));
    #pragma endscop
}
