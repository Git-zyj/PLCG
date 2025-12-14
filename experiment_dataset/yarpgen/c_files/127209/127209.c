/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((var_8 ? var_3 : -var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 &= min(945565554, 35016);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((((~1699384376124019486) ? var_13 : ((min((arr_4 [i_4] [i_4 - 1] [i_4]), (arr_4 [i_4] [i_4 - 1] [i_4])))))))));
                                var_17 = (max(var_17, var_10));
                                arr_15 [i_4] [2] [i_2] [2] [i_4] &= (max((1 - 3395700050), var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
