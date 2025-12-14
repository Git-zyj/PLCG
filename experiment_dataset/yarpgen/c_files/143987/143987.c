/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = (-48 >= -1802055645);

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_14 = ((!((max((arr_0 [i_0]), (arr_0 [i_0]))))));
        arr_2 [i_0] = var_10;
        arr_3 [i_0] = ((!((min((!var_9), (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((arr_0 [i_1]) ? (min(var_4, (!var_1))) : (!var_8)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [1] [1] [i_4] [i_1] [i_1] = min(var_3, var_1);
                        arr_14 [i_1] [i_1] [i_2] [i_1] [i_4] = ((!((!(((var_3 ? var_9 : var_8)))))));

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_15 -= ((((((arr_15 [i_1] [i_1] [i_3] [i_4] [i_3 + 1]) ? var_11 : (arr_12 [i_5] [i_2] [i_2])))) ? ((((arr_9 [i_5] [0] [0] [0]) == (arr_15 [i_1] [i_2] [i_2] [i_4] [i_3 - 4])))) : (!var_8)));
                            arr_17 [i_1] [i_2] [6] [i_4] [6] = ((!((min((min((arr_12 [i_1] [i_1] [i_1]), (arr_1 [i_2]))), (((!(arr_7 [0] [i_4])))))))));
                            arr_18 [i_1] [i_2] [8] [i_1] [i_5] = (((((var_1 ? (arr_16 [i_1] [i_3 - 4] [i_3] [i_3] [i_3] [i_1] [i_3 - 2]) : var_7))) ? ((var_0 << (((arr_11 [i_3 - 1]) - 4209078289100764562)))) : (((((((!(arr_5 [i_3]))))) > ((var_3 ? var_3 : (arr_7 [i_1] [i_1]))))))));
                            arr_19 [i_5] [i_4] [i_3 - 3] [i_1] = ((var_4 ^ (((var_10 - (!var_1))))));
                        }
                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            arr_22 [3] = ((!((max((arr_12 [i_1] [i_6 - 2] [i_3 + 2]), (arr_12 [i_1] [i_6 + 3] [i_6 + 3]))))));
                            var_16 = ((((((((var_10 ? var_7 : var_1))) ? (arr_1 [i_1]) : (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])))) && ((!(((-(arr_10 [i_1] [i_2] [i_3]))))))));
                            arr_23 [10] [i_1] = ((!((var_9 > (arr_11 [i_1])))));
                        }
                        var_17 = (max(var_17, ((((((!((((arr_9 [i_3] [i_3] [i_4] [i_4]) ? var_0 : (arr_4 [i_1] [i_1]))))))) << (((!(!var_4)))))))));
                    }
                }
            }
        }
    }
    var_18 = var_11;
    #pragma endscop
}
