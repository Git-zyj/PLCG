/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [8] [i_0] = ((4294967295 ? (((arr_1 [i_1]) ? 65516 : (arr_1 [i_0]))) : (arr_0 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_2] [i_2] [i_2] = var_2;
                            arr_11 [i_0] [i_0] [i_2] [i_3 + 1] = (((arr_8 [i_0]) || (arr_6 [i_0] [i_1] [i_0] [i_0])));
                            arr_12 [i_0] = ((max((arr_3 [i_0]), (min(var_9, var_6)))));
                        }
                    }
                }
                arr_13 [i_1] = ((-(((((1 / (arr_2 [i_0] [i_0] [i_0])))) ? (((arr_1 [i_1]) / (arr_2 [i_1] [i_0] [i_0]))) : var_9))));
                arr_14 [i_0] [i_0] |= (((arr_7 [i_0] [i_0]) * (min((arr_9 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_1] [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_27 [i_6] [i_6] = 60654;
                    arr_28 [i_6] [i_5] [i_6] [i_6] = ((!((((arr_25 [i_6] [i_6] [i_6] [i_4]) ^ (((-(arr_23 [i_6] [i_4] [i_4] [i_4])))))))));
                    arr_29 [i_4] [i_4] = (((((((arr_23 [i_4] [1] [i_4] [i_4]) / var_1)) + var_6)) >> ((min((var_11 && var_4), (!var_13))))));
                }
            }
        }
    }
    #pragma endscop
}
