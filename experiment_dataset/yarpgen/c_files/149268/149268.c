/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] [i_2] [i_0] [i_4] [i_3] [i_2] = (((1 ? (((arr_6 [i_0] [i_1] [6] [i_3]) ? 1879048192 : (arr_8 [i_4 - 1]))) : var_12)));
                                var_15 += var_3;
                                var_16 = (((~0) ? (((var_7 && (((~(arr_8 [i_0]))))))) : 0));
                                arr_14 [i_0] [i_2] [2] [i_3] = ((((((1 ? 1 : -1368973718)))) ? var_6 : var_6));
                                var_17 = ((!(((1 ? (~var_13) : ((var_11 ? (arr_2 [i_4] [i_1] [i_2]) : var_11)))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_18 = (max(var_18, 1));
                                var_19 |= var_11;
                                var_20 = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
