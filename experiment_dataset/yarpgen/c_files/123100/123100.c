/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = (arr_5 [i_0] [i_1] [i_1] [i_2]);
                    arr_7 [i_0] = ((((((~(arr_4 [i_0] [i_1] [i_2] [i_1]))) & ((((arr_0 [i_1]) && var_17))))) >> (((!(arr_1 [i_0]))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_19 = (max(var_19, (((-(arr_4 [i_1] [i_1] [i_1] [i_1]))))));
                        var_20 = ((-((~((1 << (((arr_5 [i_0] [i_1] [i_2] [i_3]) + 1641036862))))))));
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        arr_15 [i_4] [i_2] [i_1] [i_0] = (((arr_12 [i_1] [i_2] [i_4]) * var_15));
                        var_21 = (min(var_21, (((~((-(((arr_8 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4]) ? -1137896890 : -1137896911)))))))));
                        var_22 = (min(var_22, 221));
                        var_23 = (((((~(((arr_4 [i_0] [i_2] [i_2] [i_4]) >> (((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - 8999957782088501041))))))) ? 704853456 : ((((((1 ? (arr_5 [i_4] [i_2] [i_1] [i_0]) : var_17))) || ((((arr_12 [i_0] [i_0] [i_0]) ? (arr_11 [i_0] [i_1] [i_2] [i_4]) : (arr_1 [i_0])))))))));
                        arr_16 [i_4] = (max(21623, 1));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_24 = ((!(arr_12 [i_0] [i_1] [i_2])));
                        var_25 = ((((((arr_9 [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2]) / (arr_9 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2])))) ? (((arr_5 [i_1 - 1] [i_2 + 2] [i_2 + 3] [i_5]) - (arr_5 [i_1 + 1] [i_2 + 2] [i_2 - 1] [i_5]))) : (arr_0 [i_1 - 2])));
                        var_26 = ((+(((arr_14 [i_2] [i_2] [i_2 + 3] [i_2 - 1] [i_2] [i_2 + 2]) & (arr_14 [i_2] [i_2] [i_2 + 3] [i_2 - 1] [i_2] [i_2 + 2])))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_27 &= -1855559857034963915;
                                var_28 = ((!(((-((-(arr_1 [i_7]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (min(var_29, (((((!(((var_13 ? var_6 : var_4))))) ? (var_14 % var_3) : ((((var_11 != var_1) <= (!-1137896913)))))))));
    var_30 = var_7;
    var_31 = ((min(((252 ? var_13 : var_0), 10596))));
    #pragma endscop
}
