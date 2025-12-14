/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_19 += max((((!(arr_5 [i_1 - 1] [14] [i_1 - 3])))), (-2019827301 >= -2019827297));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 19;i_4 += 1)
                            {
                                var_20 &= (~1121822219);
                                arr_15 [i_2] [18] [i_0] [i_2] [i_0] [6] [i_0] = ((((var_11 % var_0) / var_7)));
                                arr_16 [i_0 - 3] [i_0] [i_2] [i_0 - 3] = ((!((!((min(var_9, var_3)))))));
                            }

                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_21 = (arr_8 [i_0]);
                                var_22 = (max(var_22, ((min((((~var_8) ? (min(65535, 9007199254740480)) : (((~(arr_20 [i_5] [i_3] [i_2] [i_1] [i_1] [13] [2])))))), var_18)))));
                                var_23 = (((!var_12) ? (max(var_4, var_0)) : var_12));
                            }
                            arr_21 [i_0] [i_1] [i_0] [i_3] [i_3 + 2] [7] = ((!(((-(((arr_7 [i_0 + 4] [i_1 - 3] [4] [i_0]) ? (arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3]) : 2019827288)))))));
                            var_24 = (min(var_24, (((2019827300 ? 2162 : -2019827304)))));
                        }
                    }
                }
                arr_22 [i_0] [i_0] = -2019827297;
            }
        }
    }
    var_25 |= (min(156, 149));
    #pragma endscop
}
