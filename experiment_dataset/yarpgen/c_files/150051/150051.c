/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((var_0 >> (((arr_4 [i_0] [11] [i_0]) ? (arr_2 [i_0]) : 114))));
                var_16 = arr_2 [i_0];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] = (((!((((arr_1 [i_3] [i_3]) << (var_11 + 22920)))))));
                            var_17 = ((65527 ? -114 : 10983645437255347776));
                        }
                    }
                }
                arr_12 [i_1] [i_0] = ((((((var_14 % var_14) | (!var_1)))) ? ((((var_7 ? 10502279014508606096 : (arr_9 [i_0] [i_0]))) ^ (max((arr_7 [i_0] [i_0] [i_1] [i_1]), 10983645437255347767)))) : (((~((1 ? -89 : var_5)))))));
            }
        }
    }
    var_18 = ((min(7463098636454203835, (-106 && 1338105855456712734))));
    var_19 = (((var_8 ? -var_2 : -116)));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                var_20 = var_14;
                var_21 = (((var_13 != 7463098636454203843) < (((!(arr_6 [i_4]))))));
                var_22 = var_3;
            }
        }
    }
    #pragma endscop
}
