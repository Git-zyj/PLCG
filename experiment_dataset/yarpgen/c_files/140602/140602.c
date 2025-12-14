/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(max((~var_8), (((var_1 + 9223372036854775807) >> var_12))))));
    var_17 = var_13;
    var_18 = ((-(!-var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = ((var_7 < (((((min(var_0, var_4))) <= var_6)))));
                var_20 = (((((var_10 ^ var_14) ? var_3 : (~var_7))) >= (max((~var_14), (2136568383 < 107)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((max(((min(var_9, var_4))), ((~((var_15 << (var_1 + 3531867668559142353))))))))));
                            var_22 = (max(var_22, (((!((!((max(var_9, var_2))))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                arr_16 [i_0] [i_0] [i_1] [0] [i_4] [8] [i_6] = ((-(max((var_5 ^ var_1), (max(var_6, var_10))))));
                                var_23 = (((((var_7 | var_11) != (((max(107, var_2)))))) ? (max(var_5, ((var_11 ? var_11 : var_6)))) : var_7));
                                var_24 = (((((var_0 ? ((min(var_3, var_9))) : (148 <= 4661387403170952403)))) ? (((!((max(var_8, var_10)))))) : var_9));
                            }
                            arr_17 [i_0] [i_0] [i_5] = (((var_13 || var_3) ? ((var_13 ? var_7 : var_14)) : (!var_3)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
