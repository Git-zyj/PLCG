/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 |= -1126358047;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = ((((~-30647) < 6177740324711746149)) ? ((max(59, (arr_1 [i_0])))) : var_6);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_12 [6] [10] [10] [i_3] [i_0] = (min(1, ((1 ? (min(1, (arr_7 [i_3] [i_2]))) : -21))));
                        var_17 = (max((((-(arr_10 [i_1] [i_1] [2] [i_1 + 4] [i_1])))), (((arr_10 [i_1] [i_1] [i_1] [i_1 + 4] [8]) & var_6))));
                        arr_13 [i_0] [i_0] [i_0] = (arr_7 [i_0] [i_0]);
                    }
                }
            }
        }
        arr_14 [i_0] = (arr_11 [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {
        var_18 &= ((6177740324711746168 ? -7612763239349347219 : 15));
        var_19 = (arr_15 [i_4 - 3]);
        arr_17 [i_4] = (((var_10 > -86) <= ((((arr_16 [i_4] [6]) <= (arr_16 [i_4] [i_4]))))));
        var_20 *= (((arr_15 [i_4]) && (arr_16 [i_4 - 3] [i_4 + 3])));
        var_21 = (((arr_16 [i_4] [i_4 - 3]) ? ((((arr_16 [i_4] [i_4]) ? 15986 : (arr_16 [i_4] [4])))) : -4290595270724411251));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_21 [i_5] = ((((6 ? 44 : -126))) ? -9006649498927104 : (arr_15 [1]));
        arr_22 [i_5] = ((((-108 ? -506769606 : 3440821312)) <= (arr_16 [i_5] [i_5])));
        var_22 = (max(var_22, (min((min(10515, (arr_19 [i_5]))), ((max((arr_19 [i_5]), (arr_19 [i_5]))))))));
        var_23 = (((((arr_19 [i_5]) ? (arr_20 [14] [8]) : ((((arr_15 [i_5]) << (((arr_18 [i_5]) - 16993))))))) & ((75191582 ? ((8116771738571834566 ? 72057593501057024 : var_10)) : -24488))));
    }
    #pragma endscop
}
