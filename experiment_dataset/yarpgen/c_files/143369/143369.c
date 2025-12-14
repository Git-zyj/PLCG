/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_19 [1] [i_1] [1] [i_3] [1] = 82045314973034009;
                                arr_20 [i_0] [i_1] [i_2] [i_2] [i_4] &= ((((((~var_14) * (15 ^ 15)))) ? (((255 <= ((min(241, (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]))))))) : (((!(((var_11 ^ (arr_6 [i_0] [2] [i_0])))))))));
                                var_18 = (max(var_18, ((min((min((((!(arr_16 [i_0] [i_1] [i_2] [i_1] [i_2] [i_1] [i_4])))), 8592019398803560820)), (~12))))));
                            }
                        }
                    }
                    var_19 = (min(var_19, (((((((arr_6 [i_0] [i_1] [12]) * ((-(arr_10 [i_2])))))) ? var_4 : ((max((-127 - 1), -2))))))));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_20 = (((~var_4) | ((-(arr_13 [i_0] [i_0] [19] [i_0])))));
                        var_21 ^= (((-(1 != 65521))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_26 [i_0] = (((!var_10) - (min((arr_11 [16] [16] [i_1] [i_2] [i_2] [i_6]), -1))));
                        arr_27 [1] [i_2] [i_2] [i_1] = ((!(arr_1 [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] = ((-(((!var_16) % (arr_14 [i_0] [i_1] [i_1] [i_1] [i_7] [i_8])))));
                                arr_35 [i_0] [i_7] [i_2] [i_0] = (max((-127 > var_3), ((((0 == (arr_5 [14])))))));
                                var_22 ^= 8559231047823652958;
                                arr_36 [i_7] [i_8] [i_2] [i_7] = (arr_7 [i_8]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (((var_11 && var_0) ^ var_17));
    var_24 = (max(29, -var_6));
    #pragma endscop
}
