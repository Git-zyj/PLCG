/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        var_14 = (arr_6 [i_1 + 3] [i_1 + 1] [i_2] [i_1 + 1]);
                        arr_10 [i_0] [i_2] [i_0] [i_0] = ((-(max((max(114, 2926492439)), (((var_12 ? 10714 : 165)))))));
                        var_15 = (max(var_15, (((~(166 < -2041584429))))));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, (((~((min((arr_2 [i_2]), (arr_9 [i_1] [7] [6] [i_1 - 1])))))))));
                        var_17 = (min(8, -64));
                        arr_13 [i_1] [i_1] [1] [19] [i_0] [1] = (max((arr_7 [i_1 + 2] [i_4] [i_4] [i_4]), -71));
                        var_18 = (max(var_18, (((~(((!(arr_6 [i_2 + 1] [i_2 + 1] [i_0] [i_1 + 3])))))))));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {
                        var_19 = (min(((max(155, -64))), ((-(arr_14 [i_2] [i_1 - 1] [i_0])))));
                        arr_16 [i_0] [i_2] = (max((max((2041584424 < 5), ((var_13 - (arr_11 [i_0] [i_2] [i_0]))))), (((((((arr_14 [i_0] [i_0] [i_2]) >= (arr_4 [i_5])))) << (((min((arr_0 [i_0]), (arr_1 [i_5]))) - 21)))))));
                        var_20 = (((max((((3018890431 > (arr_2 [i_0])))), var_5)) == (arr_14 [i_1] [i_2] [i_5])));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_21 = var_5;
                            var_22 = (-(arr_17 [1] [1] [i_6] [1] [1] [i_6] [i_6]));
                            arr_20 [i_0] = ((-(arr_17 [i_0] [i_1] [i_2] [i_2] [i_5] [i_2] [i_6])));
                            var_23 = ((!var_6) ? (!1608827284) : (((var_13 || (arr_17 [i_0] [i_2] [i_6] [3] [i_6] [i_0] [i_0])))));
                        }
                    }
                    arr_21 [i_2 + 1] [i_0] [i_0] = (((((-(arr_19 [i_0] [i_0] [i_0])))) ? (min(var_3, (var_6 * var_6))) : (((-((var_11 ? var_12 : (arr_9 [i_2] [1] [i_0] [i_0]))))))));
                }
            }
        }
    }
    var_24 = (((max(var_5, ((max(123, var_3))))) <= ((max((min(700709846, 2013265920)), (-64 || 1))))));
    var_25 = ((~((-(max(var_4, var_8))))));
    var_26 = -64;
    #pragma endscop
}
