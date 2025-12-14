/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_13 [i_0] [i_2] [i_1] [i_1] [i_2] [i_3] = ((~((var_3 ? ((((!(arr_1 [i_0]))))) : (((arr_1 [i_0]) ? var_7 : (arr_0 [i_2])))))));
                        var_13 = var_7;
                        var_14 = ((((((((arr_9 [i_0 - 1] [i_1] [i_2] [i_3] [i_3] [i_2]) ^ (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((-(arr_9 [i_3] [i_3 + 3] [i_2 - 2] [i_1] [i_0] [i_0]))) : (~var_2))) ^ ((((!(((var_1 ? var_1 : var_6)))))))));
                        var_15 = (max((min((arr_6 [i_3 + 3] [i_2] [i_2] [i_0 - 1]), var_2)), (((!(arr_2 [i_3]))))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_16 [i_2] [i_2] = (19290 | 96);
                        var_16 -= ((((!((((arr_6 [i_0] [i_1] [i_1] [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0 - 1] [i_0] [i_0 - 1])))))) ? (((((arr_9 [i_4] [i_0] [i_2] [i_2] [i_1] [i_0]) ? var_8 : (arr_14 [i_0] [i_0] [i_2] [i_1] [i_0] [i_0]))) >> (((((arr_0 [i_0 - 2]) ? var_7 : var_11)) - 5837)))) : (arr_6 [i_0] [i_0] [i_0] [i_0])));
                    }

                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_17 = (((((min(((~(arr_11 [i_2] [i_0] [i_2]))), (arr_6 [i_0 - 1] [i_0 - 1] [i_2] [i_1]))) + 2147483647)) << (((-65520 > (arr_12 [i_2] [i_5] [i_2] [i_2]))))));
                        arr_19 [i_0] [i_0] [i_2] [i_2] [i_1] = ((-((min(var_0, (arr_10 [i_2 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_18 = ((5211 ? 32751 : 60326));
                        var_19 = var_8;
                        var_20 = (min(var_20, (((~(!var_5))))));
                    }
                    arr_23 [i_2] [i_1] [i_2] [i_2] |= var_10;
                    var_21 = ((((-32750 ? -32750 : -30)) + (((!(((-32765 ? 98 : 32750))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    arr_31 [i_8] [i_8] [i_7] [i_8] = ((var_1 >= ((((!(arr_28 [i_7])))))));
                    var_22 = ((((-((var_0 ? (arr_27 [i_7] [i_7] [i_7]) : (arr_28 [i_7]))))) / (((((-113 ? -7704101690196669604 : (arr_25 [i_7])))) ? ((max(32739, 1))) : ((1 >> (32740 - 32720)))))));
                    arr_32 [i_7] [i_7] = ((((var_1 ? (arr_25 [i_7]) : var_9))));
                }
            }
        }
    }
    #pragma endscop
}
