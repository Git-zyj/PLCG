/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_13 = (var_11 < var_8);
                            var_14 = ((var_12 && (var_7 & var_10)));

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                var_15 = var_7;
                                var_16 = (max(var_16, ((((var_5 && var_11) * (((!(var_8 != var_10)))))))));
                                var_17 -= (var_5 == var_0);
                            }
                            for (int i_5 = 2; i_5 < 16;i_5 += 1)
                            {
                                arr_18 [i_0] [i_3 - 1] [i_0] [i_3] [i_5] = ((!(((!var_1) == var_4))));
                                var_18 += (~var_2);
                            }
                            for (int i_6 = 1; i_6 < 14;i_6 += 1)
                            {
                                var_19 = var_5;
                                var_20 -= ((-(~-var_7)));
                                var_21 = var_5;
                                var_22 = (!-var_10);
                            }
                        }
                    }
                }
                var_23 ^= (~var_8);
                var_24 = var_9;
                var_25 = (((!var_8) - (var_12 ^ var_1)));
            }
        }
    }
    var_26 = var_2;
    #pragma endscop
}
