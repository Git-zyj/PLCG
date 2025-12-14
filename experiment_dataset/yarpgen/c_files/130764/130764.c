/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(((~(var_13 < var_2))), ((var_5 ? ((max(var_0, var_5))) : (~0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = var_0;
                                var_18 ^= (((~(arr_10 [i_0] [i_2] [i_4]))));
                                arr_16 [i_1] [i_1] [i_1] [i_1] = (arr_13 [i_1] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 2] [i_4] [i_4 - 1]);
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0] = ((-((1 ? 0 : 0))));
                    var_19 = (max(((-((33554431 ? -33554417 : 997632779)))), (arr_4 [i_1])));
                    var_20 |= (arr_5 [i_1]);
                }
            }
        }
    }
    var_21 = var_2;
    var_22 = (min(var_22, (((((((((var_0 ? var_3 : var_4))) ? (((min(var_3, var_1)))) : (~var_6)))) ? var_6 : (((~(var_11 > var_4)))))))));
    #pragma endscop
}
