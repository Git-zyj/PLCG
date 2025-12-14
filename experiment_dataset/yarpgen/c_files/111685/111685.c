/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = (max((min(0, var_13)), ((max((!6539767762679176750), var_17)))));
                                var_21 ^= max(((min((arr_7 [i_3 - 2] [i_1] [i_3 - 1] [i_0 + 4] [i_4] [i_3 - 2]), (arr_7 [i_0] [i_3] [i_3 - 1] [i_0 + 4] [i_3 - 1] [i_3 - 1])))), (max((arr_5 [i_0 - 3] [1] [2] [i_3 - 3]), (arr_1 [i_0 - 1] [12]))));
                            }
                        }
                    }
                }
                var_22 = (!1);
            }
        }
    }
    var_23 = (min(var_23, ((max(var_2, (((!((min(1, 4637)))))))))));
    #pragma endscop
}
