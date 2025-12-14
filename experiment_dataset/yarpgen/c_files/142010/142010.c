/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = ((-((-(arr_2 [i_0] [i_0] [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = (((arr_1 [i_3] [i_4]) ? ((255 ? 0 : 4294967295)) : (((((1 ? -17019 : 4294967276)))))));
                                var_21 &= ((!((!(!32760)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_20 [i_0] [i_1] [i_5 - 1] = (((((-((-32767 ? var_5 : (arr_4 [i_1] [i_0])))))) & (max(((4294967295 ? 649470627 : var_18)), 0))));
                            arr_21 [i_0] [i_1] [17] [5] = var_4;

                            for (int i_7 = 0; i_7 < 20;i_7 += 1)
                            {
                                var_22 ^= ((-(((var_0 || (arr_13 [i_5 + 1] [i_5 + 1] [i_5 + 1] [16] [i_7]))))));
                                arr_24 [i_0] [i_1] [i_5] = ((~((((((arr_16 [i_0] [10] [i_1] [i_7]) ? -68 : 4294967294))) ? ((var_9 ? -932533268 : var_3)) : -451134042))));
                                var_23 = 4095;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_3;
    var_25 = (min(var_25, (((((255 ? var_0 : (!var_4)))) ? (-127 - 1) : (((((var_4 ? 10198020215709885833 : var_8))) ? (((min(var_14, 1)))) : ((53059 ? 2147483647 : 4294967284))))))));
    #pragma endscop
}
