/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_0] = ((!(((((((arr_3 [i_0] [i_0]) ? 2704958218 : var_5))) ? (((1590009077 ? var_1 : 24187))) : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]))))));
                                var_10 = (max(var_10, (arr_8 [i_0])));
                                var_11 = 1590009082;
                                arr_14 [i_0] [i_2] [i_3] [7] [i_0] = ((((((((arr_4 [i_0] [11] [4]) >= 2704958231)) ? (arr_4 [i_0] [i_1 + 2] [i_1]) : 9429958963115035445))) ? 2704958214 : 2704958231));
                            }
                        }
                    }
                    var_12 += ((!(((min(2704958231, (arr_10 [i_0] [i_1] [i_1] [11] [13])))))));
                }
            }
        }
    }
    var_13 *= (1590009083 <= 1590009082);
    var_14 = (max((((~var_6) / 214)), (~var_2)));
    #pragma endscop
}
