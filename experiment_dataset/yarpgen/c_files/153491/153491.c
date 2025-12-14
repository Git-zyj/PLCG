/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (((((min(var_4, 0))) ? (!var_2) : (arr_2 [i_0] [i_0]))));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_18 = (arr_4 [i_0] [11] [11]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        var_19 *= ((((max((arr_11 [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1] [i_1 + 1]), (arr_11 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_1 + 1])))) && ((max(123, var_6)))));
                        var_20 = (min(var_20, (((((-(var_10 < var_16)))) ? ((((((1 ? 1 : -1591537078))) >= ((120 ? var_15 : var_1))))) : ((~((max(var_14, 0)))))))));
                        arr_12 [i_0] [i_1 + 1] [i_3 + 1] [i_2] = (arr_9 [i_3] [i_2] [i_2] [i_2] [i_0]);
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_16 [i_4] = -1;
            var_21 |= 92;
            var_22 = (min(var_22, (~var_7)));
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_23 = ((((var_11 ? (arr_18 [i_7] [i_6]) : (arr_18 [i_5 - 1] [i_0])))) + (1 - var_15));
                        arr_26 [i_0] [i_5] [i_6] [i_7] [i_0] [i_5] = (((((var_11 ? var_10 : 1)) < -var_3)));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_31 [i_0] [i_6] [2] [i_8] [i_5] = (((18446744073709551615 % 6953767246219174739) ? var_0 : -1738546697));
                        arr_32 [i_8] [i_8] [1] [10] [i_8] = (var_0 * var_10);
                        arr_33 [i_8] [i_8] [i_5 - 1] [i_8] = -1;
                    }
                    var_24 = ((-(!var_11)));
                    var_25 = (max(((min((!-32), 89))), ((-((var_13 | (arr_22 [i_0] [i_5 - 1] [i_0])))))));
                }
            }
        }
    }
    var_26 = var_6;
    #pragma endscop
}
