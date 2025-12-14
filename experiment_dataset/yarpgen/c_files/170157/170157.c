/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0 - 2] [i_0 - 2] &= (((!0) | (((arr_2 [i_0 + 2] [12]) & (arr_2 [i_0] [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = (!1);
                                arr_14 [i_0] [i_3] = ((!((max(1, 51026)))));
                                var_12 &= (((var_2 ? 1 : var_2)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = (max(var_13, (((((!var_10) > var_9)) ? var_8 : -892829138485869602))));
    #pragma endscop
}
