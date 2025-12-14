/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((var_5 & (((~((141 ? var_3 : 0))))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 &= -121;
                    arr_11 [i_0] [i_0] [i_0] = (max(18553, ((((arr_5 [i_0] [i_0]) ? var_3 : ((((arr_9 [i_2] [i_0] [i_0] [i_0]) && var_5))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 = ((((((((var_4 / (arr_13 [i_0] [i_0] [i_0 - 3] [i_0] [i_0])))) / (min((arr_3 [i_0]), var_2))))) ? (((var_8 + var_1) % ((((arr_7 [i_0 + 1]) - (arr_0 [i_0])))))) : (((((((arr_9 [i_0] [i_0] [i_0 - 1] [i_2]) * -124))) ? ((124 ? var_6 : (arr_9 [i_0] [i_0] [i_0] [i_3]))) : (arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                                var_13 = ((((((arr_8 [i_3 + 2]) ? (((14464396969509930940 ? (arr_6 [i_2] [i_0]) : (arr_4 [i_0 - 2] [i_0])))) : 14464396969509930940))) ? (((((((arr_5 [i_1] [i_4]) << (arr_13 [i_0] [i_3] [i_2] [i_3] [9])))) ? -7 : var_5))) : (arr_0 [i_2])));
                                arr_16 [i_0] [i_0] = (((!(arr_9 [i_2] [i_0] [i_2] [3]))) ? ((((arr_4 [i_3 + 2] [i_0]) ? (arr_4 [i_3 - 1] [i_0]) : (arr_4 [i_3 + 1] [i_0])))) : (max((max(823255271, 2882)), (-269685797 == var_2))));
                                arr_17 [6] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((arr_12 [i_0 + 2] [i_1 + 2] [i_0] [i_0] [i_3] [i_3]) * (arr_13 [i_0 - 2] [i_0 - 2] [i_3 + 1] [i_4] [i_4])))) ? (9080415117820395876 & -46) : (((((arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_2] [i_0]) > 1))))));
                            }
                        }
                    }
                    var_14 += ((((((arr_9 [16] [i_2] [i_1] [i_0 - 3]) ? (arr_9 [i_0] [i_2] [i_0] [i_0 - 1]) : (arr_9 [i_0] [i_2] [4] [i_0 - 3])))) ? (((arr_10 [i_0 - 1] [i_1 + 2] [i_1 + 2] [i_0 - 1]) ? (arr_14 [i_1] [i_2]) : (arr_10 [i_1] [i_1 + 2] [i_1] [i_0 + 2]))) : ((min((arr_10 [i_0] [i_1 - 1] [i_0] [i_0 + 1]), 1)))));
                    arr_18 [i_0] [i_0] [i_0] = (max(((-1 - (max(var_2, 6119390767494601932)))), ((max((((arr_3 [i_0]) - (arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_1 + 1] [i_1 + 1] [i_2]))), (3698980575 + 0))))));
                }
            }
        }
    }
    #pragma endscop
}
