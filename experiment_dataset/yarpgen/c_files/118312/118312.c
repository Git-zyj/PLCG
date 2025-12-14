/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_20 *= (min((arr_3 [i_0] [i_0] [i_1]), ((0 >> (arr_1 [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = (max(((var_1 < (max(var_0, 0)))), ((((max(16, var_9))) || (var_11 > var_5)))));
                            arr_12 [i_0] [i_1] = (((max((var_13 ^ var_13), ((var_5 ? var_6 : var_14)))) << (arr_1 [i_0 - 2])));
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] [i_0] = max(var_15, ((max(-var_17, var_17))));
                            arr_14 [3] = var_2;
                        }
                    }
                }
            }
        }
    }
    var_22 ^= (((min((var_7 >= var_2), (var_12 != var_2))) ? (((~var_11) >> (((var_8 | var_4) + 1461739598)))) : (((((18446744073709551615 > 7182442167294229074) <= var_15))))));
    var_23 ^= ((var_10 & (((var_17 >= (max(0, var_12)))))));
    var_24 = ((var_5 > ((var_7 ? (max(7979229232295116639, 1)) : (max(7979229232295116657, var_14))))));
    #pragma endscop
}
