/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (((var_3 || var_7) * ((var_1 ? (var_18 % var_13) : (!19185)))));
    var_20 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = 102;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_22 = (arr_3 [i_0] [i_0] [i_0 - 1]);
                                var_23 &= (max((min((~var_6), var_6)), (max((((arr_5 [i_0]) ? (arr_1 [i_0]) : 15809)), (arr_6 [i_0] [i_0] [1] [i_0 + 2])))));
                                var_24 |= 64193;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
