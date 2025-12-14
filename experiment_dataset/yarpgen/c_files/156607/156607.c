/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((!(var_15 || var_8)));
    var_21 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [12] [14] |= ((!((((arr_1 [i_0 - 1]) >> (((arr_1 [i_0 - 2]) - 9496953293906634685)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((max((((arr_0 [i_4 - 1]) >> (!4294967295))), -var_15)))));
                                var_23 = (min(var_23, (arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_3])));
                                arr_12 [i_2] [i_1] [i_0] [1] [i_4 - 1] = (min((((var_1 > (arr_5 [i_0 + 1] [i_0] [i_0] [i_0])))), var_5));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_24 = ((((((!var_1) ? (((arr_6 [i_0] [i_0]) ^ (arr_18 [i_2] [i_6]))) : var_16))) || ((!(((var_4 >> (var_12 - 3316278741746711879))))))));
                                arr_20 [i_0] [i_0] = (((arr_10 [i_0] [i_0]) ? ((((arr_10 [i_0] [i_0]) <= (arr_10 [i_0] [i_0])))) : (arr_10 [i_0] [i_0])));
                                arr_21 [i_0 - 1] [i_1] [i_0] [i_6] = (i_0 % 2 == 0) ? (max((arr_13 [i_6] [0]), ((var_3 >> (((arr_17 [i_0] [i_0] [i_0] [i_5] [i_6]) - 35130629)))))) : (max((arr_13 [i_6] [0]), ((var_3 >> (((((arr_17 [i_0] [i_0] [i_0] [i_5] [i_6]) - 35130629)) - 1899731446))))));
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] [i_0] [i_0] = ((var_3 ? (!var_13) : ((max((max(var_5, var_2)), (max(var_6, (arr_2 [i_0] [i_1 + 1]))))))));
                    var_25 = (max((((!((max(59473, (arr_11 [i_0] [17] [i_2]))))))), (arr_9 [i_2] [4] [7] [i_0])));
                }
            }
        }
    }
    var_26 |= ((var_1 ? (var_6 > var_0) : ((((max(var_1, var_16))) ? ((127 ? 114 : 1)) : (var_13 <= var_7)))));
    var_27 |= ((-(((!(((var_11 ? var_9 : var_12))))))));
    #pragma endscop
}
