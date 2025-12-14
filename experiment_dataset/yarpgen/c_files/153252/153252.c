/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (((((65512 ? 35143531 : 14016019383927549112))) ? (((max(var_1, var_17)))) : (((arr_1 [i_0] [i_1]) | var_7))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3 - 1] [i_1] = var_2;
                                arr_14 [i_0] [i_1] = (arr_12 [i_3 - 2] [i_1] [i_3 - 1] [i_4] [i_4 - 1]);
                                var_21 += (arr_12 [i_2] [i_0] [i_3 - 2] [i_4 - 1] [i_4]);
                                var_22 &= ((((var_17 & (((var_15 & (arr_11 [i_0] [i_1] [i_2] [i_0])))))) >= var_10));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
