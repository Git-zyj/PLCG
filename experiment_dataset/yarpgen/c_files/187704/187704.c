/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_10;
    var_20 = 1023;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((((((arr_4 [i_0]) >= 1023)) ? (max((min((arr_4 [i_1]), (arr_2 [i_0] [i_0]))), ((max(var_0, var_8))))) : ((var_18 ? -var_1 : (9411630341473897044 ^ var_6))))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0 + 1] [i_1] [16] [i_2] = (arr_6 [i_0] [i_1] [i_0]);
                    var_22 = (max(1023, (min((max(242310944, (arr_1 [i_1]))), (var_4 > var_3)))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_17 [i_5] [i_4] [i_1] [i_1] [i_1] [i_1] [i_0] = ((0 ? (max(((min(3963283948, var_13))), (((arr_14 [i_0] [i_0] [i_0] [i_4] [i_1] [i_3]) ? var_14 : var_17)))) : ((((var_17 >= ((min((arr_15 [i_0] [i_1] [i_1] [i_1] [i_5] [i_4]), 3068133311)))))))));
                                arr_18 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = (max((((!((((arr_13 [i_0] [i_1] [i_1] [i_4]) ? var_2 : 18446744073709551615)))))), (((max(var_6, (arr_9 [i_5] [i_3] [i_0] [i_0]))) ^ ((((arr_13 [i_0 + 1] [i_1] [i_1] [15]) ^ var_18)))))));
                                arr_19 [i_1] [i_1] [i_3] [i_4] [i_3] = (max(1020, ((((((arr_2 [i_1] [i_1]) > var_3)) && (arr_10 [i_0 - 1] [i_0 - 2]))))));
                                var_23 = ((((212 >= ((var_14 ? 1 : var_15))))));
                            }
                        }
                    }
                    arr_20 [i_1] [i_1] = (((arr_16 [i_3] [i_3] [i_1] [i_1] [i_1] [i_0]) ? ((max((arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 1]), (min(242310943, (arr_16 [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0])))))) : (min((min(22132, 18446744073709551597)), 2))));
                }
                var_24 = (max(var_24, var_8));
            }
        }
    }
    var_25 = 6;
    #pragma endscop
}
