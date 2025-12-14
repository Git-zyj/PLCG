/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 *= ((13205008523071875119 ? ((((min(4088, var_2)) >> (((min((arr_1 [i_4]), (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]))) + 25))))) : (min((arr_12 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0 + 2] [i_1 - 2]), (((-2147483638 + (arr_5 [i_0]))))))));
                                var_17 *= (arr_2 [i_0]);
                            }
                        }
                    }
                }
                var_18 = (max(2147483641, 2147483642));
            }
        }
    }
    var_19 = -var_8;
    var_20 = (min(var_20, var_9));
    #pragma endscop
}
