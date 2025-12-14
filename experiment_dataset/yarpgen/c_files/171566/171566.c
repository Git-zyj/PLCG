/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((-(min(var_14, ((var_13 ? (arr_2 [i_1]) : (arr_0 [i_0] [i_0])))))));
                arr_8 [i_1] [i_0] [i_0] = (((max(var_2, ((var_10 ? (arr_5 [6]) : (arr_6 [i_1 - 1]))))) < var_3));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_17 += (((((arr_10 [i_2]) ? (arr_10 [i_2]) : (arr_10 [i_2]))) > var_5));
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [i_3] [i_4] [i_2] [i_6] = var_0;
                                arr_23 [i_6] [i_6] = (-(min((var_3 * -90), 1997757505)));
                                var_18 = (arr_14 [i_5 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
