/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 = (((((-(arr_4 [18]))) - var_4)));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((((max(31106, 15167))) && ((((arr_7 [i_0] [i_0] [i_2] [i_3] [i_4]) / var_4)))));
                            }
                        }
                    }
                    var_15 = ((~((((((-21 < (arr_7 [i_0] [i_0] [i_0] [3] [i_2])))) == var_4)))));
                }
            }
        }
    }
    var_16 = (31104 % -31113);
    #pragma endscop
}
