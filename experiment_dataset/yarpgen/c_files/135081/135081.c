/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (max((((~var_12) & (min(var_15, var_13)))), (((var_1 & (min(var_7, 2514288275)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_18 = (max(var_18, (((var_9 ? var_8 : var_6)))));
                                var_19 = ((var_13 == (1780679018 == var_9)));
                            }
                            var_20 = ((~(max(9223372036854775797, 2514288268))));
                            var_21 = ((-var_10 * (13847375769248707713 < 1780679018)));
                            arr_15 [i_1] [i_1] [i_1] [i_3] = ((1 == 1780679020) ? -239 : (max(-1254, 1164480574143459480)));
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(3216593954284998277, ((max(((4599368304460843902 ? 1164480574143459472 : var_11)), ((max(var_4, var_16))))))));
    #pragma endscop
}
