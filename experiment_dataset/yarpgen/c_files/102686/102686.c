/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (min(((min(var_10, var_5))), (max((arr_0 [i_0]), (min(var_12, var_2))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = (arr_0 [i_0]);
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_20 |= max((!-110), (((-1 + 2147483647) >> 0)));
                            var_21 = var_10;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 3; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_22 = 13;
                            var_23 = ((((max(var_9, (((arr_12 [1] [i_1] [i_1] [i_1]) - (arr_17 [i_1] [i_1] [i_1] [i_6] [i_1] [9] [i_1])))))) ? var_6 : (((((arr_9 [i_1] [i_1]) - (arr_15 [i_0] [i_0] [2] [1] [i_0]))) / (arr_5 [i_5 - 2] [i_5 + 1] [i_6 + 2])))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_24 = (((min(15, 15)) - (((~(arr_16 [i_8] [i_8] [i_8] [14]))))));
            var_25 = (max(var_25, (((1 / ((var_17 - (((387041963983100839 ? (arr_10 [i_0] [i_8] [9] [0] [4] [i_0]) : 0))))))))));
            var_26 = ((18446744073709551601 ? (((((arr_18 [i_0] [7] [1] [i_0] [i_0]) ? var_8 : 7)) >> (((((arr_20 [0]) | var_16)) - 62385)))) : ((((arr_21 [i_0] [i_0]) ? (((arr_5 [i_8] [i_8] [7]) ? var_17 : (arr_16 [i_0] [i_0] [i_8] [6]))) : (arr_22 [i_0] [i_0] [i_0]))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_27 = (max(var_27, (arr_10 [9] [i_8] [i_8] [1] [9] [i_8])));
                        var_28 += (min(((((arr_3 [i_0] [10] [4]) % (max((arr_14 [6] [12] [i_9] [8]), (arr_19 [i_0])))))), 8490615894074630195));
                    }
                }
            }
        }
        var_29 = ((var_14 >> (9956128179634921401 - 9956128179634921356)));
        arr_28 [i_0] = (!9956128179634921407);
    }
    var_30 = (max(var_30, var_16));
    var_31 = (min(32397, var_13));
    var_32 = (min((min(var_8, 15)), var_10));
    var_33 = var_5;
    #pragma endscop
}
