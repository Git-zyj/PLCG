/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~(((arr_3 [i_0] [i_0]) ? ((max(109, -22894))) : ((var_1 ? var_5 : -22885))))));

                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 *= (max((((arr_7 [i_3] [i_0] [i_0]) != var_4)), ((!(!var_0)))));
                                var_12 = -109;
                                arr_16 [i_0] [i_0] [i_0] [i_0] [16] [i_0] [i_0] = ((!((min((max((arr_1 [i_4]), (arr_4 [i_0] [i_4]))), (((~(arr_7 [i_0] [i_0] [8])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_13 = (max(((max((arr_18 [i_2 - 2]), (arr_18 [i_2 - 1])))), ((var_3 ^ (!var_0)))));
                                var_14 = (min(var_14, (((~(arr_4 [8] [i_6]))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    arr_23 [i_0] [i_0] [i_7] = (((!var_6) == (86 == 56811)));
                    arr_24 [i_0] = (!var_1);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_31 [i_0] = ((var_7 ? var_4 : (arr_11 [i_9 + 1] [i_9 + 2])));
                                var_15 = (!(!var_3));
                                var_16 = 4294967295;
                                arr_32 [i_0] [i_0] [i_7] [i_8] [i_9] = (((arr_26 [i_9 + 2] [i_1] [i_7] [i_0]) - (((arr_7 [i_9] [i_8] [i_7]) + var_4))));
                                var_17 = 22910;
                            }
                        }
                    }
                }
                var_18 *= ((((1166760437 >= (arr_4 [1] [i_1]))) ? ((-(arr_9 [i_1] [i_1] [i_1] [i_1] [i_1]))) : ((((15160 != 19657) + (var_5 <= var_6))))));
            }
        }
    }
    #pragma endscop
}
