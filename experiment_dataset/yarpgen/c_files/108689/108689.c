/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_13);
    var_17 *= ((((((max(var_4, 2801518647)) || (var_4 ^ var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 *= (arr_2 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((max((min((arr_0 [i_2 - 1] [i_2 - 1]), 4255501667)), (arr_6 [i_0] [i_0] [i_0]))))));
                            var_20 *= (min((((!(arr_0 [i_2 + 1] [i_2 + 1])))), ((var_9 ^ (arr_6 [i_2 + 1] [2] [i_2 - 1])))));
                        }
                    }
                }
                var_21 = (arr_9 [i_1] [i_1] [1] [i_0]);
            }
        }
    }
    var_22 = var_4;
    var_23 = (max(var_23, (((~((-(var_3 < var_12))))))));
    #pragma endscop
}
