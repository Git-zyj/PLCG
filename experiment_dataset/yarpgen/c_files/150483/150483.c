/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((-(1884948739 < -var_8))))));
                arr_6 [i_0] [i_1] = ((1 / (((arr_3 [i_1] [i_0] [i_0 - 1]) ? (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (!1)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] = var_3;
                            arr_13 [i_0] [i_1] [i_1] [i_1] = var_0;
                        }
                    }
                }
                arr_14 [i_1] [8] [i_1] = ((max(((min(var_7, var_3)), (arr_1 [i_0])))));
            }
        }
    }
    var_17 = 53;
    #pragma endscop
}
