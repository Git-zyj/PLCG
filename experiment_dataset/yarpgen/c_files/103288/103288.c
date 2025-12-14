/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_14 = (max(var_14, (((-(~3841157048))))));
        var_15 = ((((-(!var_6))) >= (((arr_1 [i_0]) % var_11))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_4 [i_1] [i_1] &= ((!(arr_2 [i_1])));
        var_16 = var_8;
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_17 = ((var_8 | ((((!((((arr_6 [i_2]) * var_12)))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_18 = ((~(-127 - 1)));
                                var_19 = (min(var_19, var_9));
                                var_20 &= ((((-(var_3 ^ var_8))) > (((-(-127 - 1))))));
                            }
                        }
                    }
                    var_21 = (min(var_21, ((max((((arr_16 [i_3]) | var_0)), (~var_6))))));
                }
            }
        }
        arr_18 [i_2] &= (max(((max((arr_6 [i_2]), (arr_6 [i_2])))), ((var_4 << (((arr_12 [i_2] [i_2] [i_2] [i_2] [i_2]) + 2013325370446974353))))));
        var_22 = var_2;
    }
    var_23 = var_2;
    #pragma endscop
}
