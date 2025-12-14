/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_14 = ((!(!3087576898259439092)));
                                var_15 -= ((((max(14, -1))) + ((max((!var_5), (!-27))))));
                                var_16 = (max(var_16, ((((var_3 ? var_2 : -var_5))))));
                                var_17 = (arr_5 [i_3]);
                                arr_13 [i_1] [22] [i_2] [i_1] [i_1] = ((-(((arr_0 [i_3 + 2]) ? (arr_0 [i_3 + 1]) : -1))));
                            }
                            for (int i_5 = 0; i_5 < 25;i_5 += 1)
                            {
                                var_18 = (max(32043, ((var_10 + (arr_1 [i_3 + 1])))));
                                arr_16 [i_2] [i_5] [i_2] [i_5] [i_0] &= (arr_4 [i_0] [i_0]);
                            }
                            arr_17 [24] [17] [i_2] [i_1] = ((~var_2) ? (((-((~(arr_14 [i_3 - 2] [18] [i_1] [i_1] [i_0] [i_0])))))) : ((min(var_9, var_10))));
                        }
                    }
                }
                arr_18 [i_1] [i_1] = var_6;
                var_19 ^= ((var_0 ? var_13 : -var_9));
                arr_19 [i_1] [i_1] = (-(var_8 + 18997));
                var_20 = (-(~var_3));
            }
        }
    }
    var_21 = (min(var_21, ((min((max((!var_13), var_10)), (((!(((var_0 ? var_5 : var_2)))))))))));
    var_22 = (min(var_22, var_0));
    #pragma endscop
}
