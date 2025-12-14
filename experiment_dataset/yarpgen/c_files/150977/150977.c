/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = max((((arr_0 [i_1 + 1]) >> (((arr_0 [i_1 + 1]) - 1819119110)))), -11471466);
                var_16 = (11471489 ? (((!(arr_0 [i_0 + 1])))) : (((arr_1 [i_1 + 1]) << (((!(arr_2 [i_0])))))));
                var_17 = min((~1008), 11471487);
            }
        }
    }

    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        arr_6 [i_2] = (arr_5 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_2 - 1] [i_3] = (((((((-1009 + (arr_13 [10] [4] [10])))) || (((var_2 ? (arr_5 [i_2]) : -11471479)))))) * 11471452);

                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        arr_18 [i_3] [i_4] [i_3] = (((max((arr_7 [7] [4] [i_3]), (max(var_5, var_0))))) ? ((var_13 ? (arr_4 [6] [i_3 + 1]) : ((-639334325 ? -2019624562 : 1708266090)))) : 1019);
                        arr_19 [i_3] [i_4] [i_4] [i_3] = (((min(((1610612736 ? (arr_12 [i_2] [i_2] [i_2] [i_2]) : var_6)), (~var_11)))) ? (min((min(var_6, 268173312)), var_14)) : 1708266112);
                    }
                    var_18 = min(((~(arr_4 [i_2 + 1] [i_2 + 1]))), ((((((-1767836862 + 2147483647) >> (11471500 - 11471486))) == (arr_8 [i_2 - 1] [i_2 + 1] [i_2 + 1])))));
                    var_19 = (arr_11 [i_2 - 2] [i_3] [i_3 + 1] [i_3 + 1]);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_20 = (max(var_20, -1708266062));
        arr_22 [i_6] = var_4;
        arr_23 [i_6] [i_6] = (((((arr_8 [i_6] [i_6] [i_6]) ? (min(1053907517, var_4)) : -2092072564))) ? ((min((var_2 && var_0), ((-1 <= (arr_10 [11])))))) : (max(1708266090, -1192959440)));
    }
    var_21 = var_12;
    #pragma endscop
}
