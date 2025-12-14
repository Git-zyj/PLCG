/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_16, var_4));
    var_21 = (min(var_21, var_2));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((max((min((arr_1 [i_0]), (arr_0 [i_0]))), (arr_0 [i_0])))) ? (((((!var_17) && ((min((arr_1 [i_0]), (arr_0 [i_0])))))))) : (max((arr_0 [i_0]), ((max((arr_1 [i_0]), (arr_1 [i_0]))))))));
        var_22 *= var_10;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] = min((arr_5 [i_0]), (min((arr_6 [i_2 + 3] [i_2 + 3] [i_2] [i_2 - 1]), (arr_6 [i_2 + 3] [i_2] [i_2] [i_2 + 1]))));
                    arr_8 [i_1] [i_1] [i_2 + 2] [i_2] = ((max((((((arr_6 [i_0] [i_0] [i_0] [i_1]) + 2147483647)) >> (((arr_1 [i_0]) + 42)))), ((((arr_5 [i_1]) == (arr_1 [i_2 + 2])))))));
                    var_23 = (~var_14);
                    arr_9 [i_0] [i_0] [i_2] [i_0] = var_3;
                    arr_10 [i_0] [i_2] [i_2] = ((((-(arr_6 [i_2] [15] [i_2] [i_1]))) + ((((!(arr_3 [i_0] [i_0])))))));
                }
            }
        }
        arr_11 [i_0] [i_0] = max((arr_1 [i_0]), (((~(arr_0 [i_0])))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_21 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = ((((max(var_1, (arr_5 [i_0]))) | ((max((arr_17 [i_0] [i_3] [i_4] [i_5]), (arr_1 [i_4])))))));
                        arr_22 [i_4] [i_4] [i_4] [i_5] &= arr_17 [i_5] [i_3] [12] [i_3];
                        var_24 *= (((arr_17 [12] [i_3] [i_4] [i_5]) < var_13));
                        arr_23 [i_5] [i_3] [i_4] [i_3] [i_3] [i_0] = (arr_5 [i_5]);
                        var_25 = (arr_5 [i_3]);
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_26 = ((((((!(arr_17 [i_6] [i_6] [i_6] [i_6]))))) + ((var_0 ? (min((arr_6 [i_6] [i_6] [i_6] [i_6]), (arr_5 [i_6]))) : ((((var_0 >= (arr_27 [i_6] [i_6])))))))));
        arr_28 [i_6] = (min((((arr_16 [i_6] [i_6] [i_6]) ^ (((arr_27 [i_6] [i_6]) & var_0)))), ((((min(var_12, (arr_14 [i_6]))) > (arr_1 [i_6]))))));
        arr_29 [i_6] = (((max((~var_1), (((arr_12 [i_6] [i_6] [i_6]) ? (arr_15 [i_6] [i_6] [i_6]) : (arr_6 [i_6] [i_6] [i_6] [i_6]))))) & ((((arr_24 [i_6]) >= (arr_3 [i_6] [i_6]))))));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        arr_32 [i_7] [i_7] |= ((((max((max((arr_15 [i_7] [i_7] [i_7]), var_12)), ((max((arr_18 [i_7] [i_7] [i_7] [i_7]), (arr_18 [i_7] [i_7] [i_7] [i_7]))))))) && (arr_17 [i_7] [i_7] [i_7] [i_7])));
        arr_33 [i_7] = (arr_15 [i_7] [i_7] [i_7]);
        var_27 = (max((arr_0 [i_7]), ((min((max((arr_25 [i_7]), (arr_17 [i_7] [12] [i_7] [i_7]))), ((max(var_18, var_3))))))));
    }
    #pragma endscop
}
