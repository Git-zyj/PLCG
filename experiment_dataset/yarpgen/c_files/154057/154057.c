/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = ((((-1 ? (1 + var_13) : (min(-68, 3860619548519154793)))) >= ((((min(17087, 46072))) ? ((var_0 ? var_6 : var_10)) : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_2] [i_0] [i_1] [i_0] [i_0] = (3359253495976246408 == 794567044);
                            var_17 -= (((((var_14 ? 1 : var_1))) & (((arr_5 [i_3]) | (arr_5 [i_1])))));

                            for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                            {
                                var_18 = ((var_4 & ((-21396 ? -4618038433217749018 : 17290878975314220870))));
                                var_19 = (((((-(arr_10 [i_1 + 1] [12] [i_2] [i_3 + 2] [i_4] [i_3])))) ? ((var_7 ? var_1 : (arr_10 [i_1 + 1] [i_1] [i_2] [i_3 + 2] [i_1 + 1] [i_2]))) : ((((arr_10 [i_1 + 1] [7] [i_2] [i_3 + 2] [i_4] [7]) >= (arr_10 [i_1 + 1] [i_1 + 2] [i_2] [i_3 + 2] [i_4] [i_0]))))));
                                var_20 = (((((arr_8 [i_1 - 1] [i_3 - 1] [2] [i_4]) == var_1)) ? (((((((arr_6 [i_1]) >= var_0))) >= (var_7 == var_8)))) : ((-(((var_13 >= (arr_0 [i_0]))))))));
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                            {
                                arr_16 [i_0] [i_1] [20] = (arr_1 [i_2]);
                                arr_17 [i_5] [i_2] [21] [i_0] = 172;
                                var_21 = (((9665834249601432977 == -9665834249601432986) ? (((((247 ? (arr_7 [i_0] [4] [4] [i_3]) : -4618038433217749026)) >= var_5))) : var_7));
                            }
                        }
                    }
                }
                arr_18 [i_1] [i_1] [i_1] = 3779559620;
                arr_19 [i_1 - 3] [15] = (arr_5 [2]);
            }
        }
    }
    #pragma endscop
}
