/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_2 ? ((var_2 ? var_11 : var_6)) : ((max(var_11, var_13))))) - var_12));
    var_21 -= 1;
    var_22 = (((((var_19 ? (min(var_13, var_5)) : var_13))) + var_14));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_23 = (max((((+((var_19 ? (-9223372036854775807 - 1) : (arr_8 [i_0])))))), var_8));

                    for (int i_3 = 3; i_3 < 14;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            arr_14 [1] [i_1] [1] [11] [i_4 - 2] = ((524287 ? var_0 : (max(((max(0, 150))), var_4))));
                            var_24 = ((((min(var_1, (arr_13 [i_1] [i_1 + 2] [i_2 + 1] [i_3] [i_2])))) ? (((arr_13 [i_1] [i_0] [i_2 + 1] [i_2] [7]) ? var_17 : (arr_11 [i_0] [i_2] [i_2 + 1] [i_3]))) : -224));
                        }
                        var_25 = (max(var_25, (((min(var_8, var_10))))));
                    }
                    for (int i_5 = 3; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        var_26 = var_6;
                        var_27 = (((((var_6 || var_8) ? (106 > 2986687143) : (max(var_12, (arr_0 [i_2 + 2]))))) < ((((arr_9 [i_1 + 1]) ? (arr_9 [i_1 + 1]) : (arr_9 [i_1 - 1]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_28 = (min((arr_15 [i_0] [i_1 + 2] [i_1 + 1]), (var_1 | var_10)));
                                arr_23 [i_1] [i_1] [i_2] = ((!((max(var_2, (arr_16 [i_0] [i_1] [i_7]))))));
                                var_29 = ((~(var_12 % var_13)));
                                var_30 = ((((var_0 ? (((arr_5 [i_0]) ? (arr_2 [i_1] [i_1 + 2] [i_1]) : var_14)) : (arr_9 [i_1 + 2]))) != (((-(arr_13 [i_1] [i_6] [i_2 - 2] [i_1] [i_1]))))));
                            }
                        }
                    }
                    arr_24 [i_0] [i_1] = max(var_11, (max(12, 65535)));
                }
            }
        }
    }
    #pragma endscop
}
