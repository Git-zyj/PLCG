/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_1] = var_6;
                var_14 = (max((min((max(var_10, var_4)), (arr_2 [i_1 + 2]))), ((((((max(var_2, var_2)))) < (arr_5 [i_1 + 2] [i_1 + 2]))))));
            }
        }
    }
    var_15 *= 1;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            {
                var_16 = (min(((((arr_11 [0] [i_3 + 2] [i_3 + 2]) <= (min(var_13, var_10))))), (((arr_4 [i_3 + 2]) ? (((((arr_3 [i_3]) <= (arr_6 [i_2] [i_3] [i_2]))))) : (var_8 + var_6)))));
                arr_13 [i_2] [0] [i_2] = var_6;
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_21 [6] [i_3] [i_4] [i_2] [i_6] = ((((var_4 - (arr_11 [i_2] [i_3 + 2] [i_4]))) + ((~(arr_15 [i_3 + 2] [i_4 - 1] [i_5])))));
                                arr_22 [i_6] [i_2] [0] [i_2] [i_2] = (!var_7);
                            }
                        }
                    }
                }
                var_17 = (max(var_17, ((min((arr_15 [i_2] [i_2] [i_3]), ((((arr_12 [i_3 - 1] [i_3 - 1]) != (!1)))))))));
                arr_23 [i_2] [i_3 + 2] = 1;
            }
        }
    }
    var_18 = (((!75) * ((var_4 ? 0 : (60 >= var_0)))));
    #pragma endscop
}
