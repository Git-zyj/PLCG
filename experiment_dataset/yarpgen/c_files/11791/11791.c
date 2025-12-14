/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (((((arr_3 [i_0]) ? 87 : 122)) + ((max((arr_3 [i_1]), (arr_3 [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (arr_8 [i_4] [0] [i_2] [i_1]);
                                arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] = var_18;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((~((-(59149 || -48)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_22 = var_4;
                arr_20 [i_5] [i_6] = var_11;
                arr_21 [i_5] [i_6] [i_6] = ((~(~var_2)));
            }
        }
    }
    var_23 = var_13;
    #pragma endscop
}
