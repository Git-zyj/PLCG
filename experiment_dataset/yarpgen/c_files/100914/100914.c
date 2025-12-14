/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                            {
                                var_17 = (max(var_17, ((min((((((max(33292288, (arr_11 [i_4] [i_3] [i_3] [12])))) ? (~var_4) : (min(var_4, var_4))))), (min((arr_2 [i_4]), 1)))))));
                                var_18 = ((!(-32767 - 1)));
                                var_19 = var_15;
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_3] [i_3] [i_3 + 1] [i_3] [i_0] = (i_0 % 2 == zero) ? ((((max(((((arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] [i_0]) << (((arr_16 [i_0] [i_1] [i_0] [i_5] [15] [i_3 + 1]) - 1227917223))))), var_0)) < (((var_9 * var_8) / (1 * var_12)))))) : ((((max(((((arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] [i_0]) << (((((arr_16 [i_0] [i_1] [i_0] [i_5] [15] [i_3 + 1]) - 1227917223)) - 730462406))))), var_0)) < (((var_9 * var_8) / (1 * var_12))))));
                                arr_19 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3] [i_5] = ((((18446744065119617024 == (((arr_3 [i_0] [i_0]) ? 1 : var_3)))) ? ((1 ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (((min((arr_8 [1] [i_0] [1] [1]), (arr_0 [i_0] [i_0])))))));
                                arr_20 [i_0] [i_0] [i_1] [i_2] [i_1] [i_5] = ((-(((arr_17 [i_0] [i_1] [i_2] [1] [i_5] [i_1] [i_3 - 1]) ? 33292310 : 0))));
                                arr_21 [i_0] [i_1] [i_1] [i_1] [i_0] = var_11;
                                var_20 |= 3518242333;
                            }
                            arr_22 [i_0] [i_0] [i_2] [i_3] [i_1] = (((((min(32759, var_4)) != (2 / var_13))) ? var_3 : (min(1, 2251782633816064))));
                            var_21 = (((var_6 == (arr_8 [i_3 - 1] [i_0] [i_3] [i_3]))) || (~var_15));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((arr_15 [i_0] [i_0] [1] [i_3 - 1] [i_3 - 1] [i_0]) && (((arr_15 [i_0] [i_0] [8] [i_3 - 1] [i_0] [i_3]) || (arr_15 [i_0] [i_0] [i_2] [i_3 + 1] [i_3] [i_3]))));
                            var_22 = -7077321744201447911;
                        }
                    }
                }
                arr_24 [i_0] [i_1] [i_1] = var_0;
            }
        }
    }
    #pragma endscop
}
