/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_2] = ((((-(arr_8 [i_0 - 2]))) % (arr_8 [i_2])));
                    var_18 = ((((min((arr_7 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 + 1]), (arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1])))) < (((max((arr_0 [i_0 + 1] [i_1]), -2748))))));
                }
            }
        }
    }
    var_19 = ((((var_3 ? (max(11431003240787730034, var_0)) : var_0))) ? ((((32768 ? var_13 : 2758)))) : (max(((var_17 ? var_11 : var_0)), ((var_7 ? 0 : 0)))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_20 -= 2758;
                                arr_24 [i_4] [i_6] = ((((arr_19 [i_5] [i_6] [i_7 + 2]) ? (arr_19 [i_4] [i_5] [i_4]) : 58)));
                                arr_25 [i_3] [i_4] [i_3] [i_5] [i_6] [i_7 - 1] = var_4;
                                arr_26 [i_3] [i_4] [i_5] [i_4] [i_6] [i_7 - 3] &= (((arr_12 [i_7 - 3]) * (((arr_18 [i_3] [i_5] [i_6]) ? (arr_14 [i_3]) : (arr_18 [i_3] [i_3] [i_3])))));
                                arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((((min((min(var_16, 32256)), (32761 > -127)))) ? (max((min(var_8, (arr_12 [i_3]))), var_10)) : var_6));
                            }
                        }
                    }
                    var_21 = var_13;
                }
            }
        }
    }
    #pragma endscop
}
