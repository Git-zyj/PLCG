/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = (~var_9);
    var_16 = (min(var_16, var_3));
    var_17 += (max(((min((((var_1 ? var_7 : var_13))), (max(var_8, var_4))))), (((max(2841340874298896739, 1)) * (((min(147, 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 -= ((((((max(1, 1))))) > ((min(var_11, 3529667279)))));
                var_19 += (arr_3 [i_0] [i_0 - 1] [i_0 - 3]);
                arr_4 [i_0] [i_0] [i_1] = (i_0 % 2 == 0) ? (((((max((((var_9 >> (((arr_2 [i_0] [i_0] [i_0]) - 1962651781))))), -4417172877546158515))) ? ((var_2 - (max((arr_3 [i_0] [i_1] [i_1]), (arr_0 [i_1]))))) : ((max((min((arr_1 [i_0] [i_0]), 63)), (arr_2 [i_0] [i_0] [i_0]))))))) : (((((max((((var_9 >> (((((arr_2 [i_0] [i_0] [i_0]) - 1962651781)) + 366710578))))), -4417172877546158515))) ? ((var_2 - (max((arr_3 [i_0] [i_1] [i_1]), (arr_0 [i_1]))))) : ((max((min((arr_1 [i_0] [i_0]), 63)), (arr_2 [i_0] [i_0] [i_0])))))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, var_3));
                                var_21 = ((+(max((arr_2 [i_0 - 2] [i_0] [i_0]), (arr_2 [i_0 + 1] [i_0] [i_0 + 1])))));
                                arr_12 [i_0] [i_0] [i_0] = (arr_10 [i_0] [i_0] [i_2] [i_0] [i_4] [i_0]);
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_2] [i_2] = (max(1, 0));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, ((48 != (((-(arr_7 [i_1] [i_1]))))))));

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        var_23 = ((arr_3 [i_0] [i_0] [i_0]) + (arr_8 [i_6] [i_0] [i_0] [i_0]));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_16 [i_0] [i_0]);
                        arr_19 [i_0] [i_1] [i_1] [i_0] = (arr_10 [i_6] [i_0] [i_6] [i_6] [i_6 + 1] [i_6 + 1]);
                    }
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_0] [i_0] [i_0] = (max(1, 432814416));
                    var_24 = (min(var_24, ((max((arr_5 [i_0] [i_0] [i_0] [i_0]), ((17468836853109645996 ? 1152919305583591424 : (min(3821750195716597454, 288230376151711743)))))))));
                    arr_23 [i_0] [i_0] [i_7] [i_0] = (((arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0]) ? (((arr_10 [i_7] [i_0] [i_0] [i_7] [i_7] [i_7]) + var_10)) : 6));
                    var_25 ^= (max(4, 1));
                }
            }
        }
    }
    #pragma endscop
}
