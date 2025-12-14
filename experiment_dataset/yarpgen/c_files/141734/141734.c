/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((max((arr_1 [i_0]), 0)));
                arr_5 [0] = 1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_13 [i_2] = (arr_0 [14]);

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    arr_17 [i_2] = (arr_11 [i_2]);
                    arr_18 [i_4] [i_2] [i_2] = 7278464641493979707;

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_22 [i_2] [i_3] [i_3] [i_3] [i_3] [1] = (arr_2 [i_2]);
                        arr_23 [i_3] [i_3] [i_3] [i_2] &= ((~((var_5 ? var_6 : var_5))));
                    }
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_27 [i_3] [i_3] [i_6] [i_3] = (min((min(7936, (~0))), ((218 ? 1 : -7937))));
                    arr_28 [i_3] = ((max(var_6, -17148)));
                    arr_29 [i_2] [i_3] [2] [i_2] = (max((arr_2 [i_2]), (arr_2 [i_2])));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_35 [i_2] = ((max((arr_16 [i_2] [i_2] [i_7]), var_5)));
                            arr_36 [i_2] = (min((arr_14 [i_3]), 180));
                            arr_37 [i_2] [4] [i_2] = (16891006285876488843 * 0);
                            arr_38 [i_2] [i_2] [i_7] [i_3] = min((min((!-9223372036854775805), ((var_5 || (arr_34 [i_7]))))), ((((min((arr_20 [i_2] [i_3] [i_7] [i_2]), 9223372036854775807))) && var_12)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
