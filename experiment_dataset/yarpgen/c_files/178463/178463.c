/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((!(((min(var_4, var_0))))));
        arr_4 [i_0] = (arr_2 [i_0 - 1]);
        var_15 = (max(var_15, ((((!192) ? (((-(!192)))) : (min(3949279510, 134)))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_16 = (((((-125 ? (min(202952287, 3955246344)) : (arr_0 [i_1])))) && 94));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_17 = ((!(!94)));
                                arr_21 [i_1] [i_2] [i_1] [i_3] [i_1] [i_5] [i_1] = ((!(((min((arr_6 [7]), (arr_17 [i_1] [i_4] [i_3] [i_4] [i_5] [i_3])))))));
                                arr_22 [i_1] [i_1] [i_3] [i_4] [i_5] = ((!(((!3219527441) && 0))));
                            }
                        }
                    }
                    arr_23 [i_1] [i_2] [i_1] = ((-((((min(817710596, var_14))) ? (arr_13 [i_1] [i_1] [i_2] [i_3]) : -237))));
                    var_18 = (min((min((arr_7 [i_3] [i_3]), var_9)), (((var_14 ? 164 : -1)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_19 &= ((202952296 == (((max((arr_0 [i_6 - 1]), (arr_0 [i_6 + 2])))))));
                        var_20 |= (arr_20 [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [4]);
                    }
                    var_21 = ((max(((min((-127 - 1), var_2))), ((~(arr_15 [i_1] [i_1] [i_6] [i_1]))))));
                    var_22 = max((((~((var_14 ? (arr_29 [i_1] [i_6] [i_7]) : (arr_2 [i_1])))))), (((arr_30 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 + 1]) ^ 181)));
                    var_23 = ((((max(((min((arr_28 [i_1] [i_6] [i_1]), (arr_2 [i_1])))), (arr_24 [i_1])))) && var_4));
                }
            }
        }
    }
    var_24 = (min(var_24, (((((((var_0 && var_14) ? (162 && var_8) : (!var_3)))) ? ((max(var_0, var_8))) : var_8)))));
    #pragma endscop
}
