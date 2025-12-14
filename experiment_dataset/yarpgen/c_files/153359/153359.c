/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_19 = (min(var_19, ((((((var_11 ? 0 : ((-(arr_6 [i_0] [i_1])))))) && ((((-127 - 1) ? var_6 : var_16))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = (1477288380 || 64);
                        var_21 -= (((((arr_8 [i_1] [i_1] [i_0 + 2]) || var_13)) ? (!var_8) : (arr_8 [i_0] [i_1] [i_0 + 1])));
                        arr_13 [i_0] [i_1] [i_3] [i_3] [i_2] [i_0] = min(((-65 ? 21717 : var_15)), 120);

                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            var_22 = (max(var_22, (((arr_7 [i_0 - 2] [i_1] [i_0 - 2] [i_4]) ? ((4294967295 ? 6917529027641081856 : (~var_4))) : ((((arr_12 [i_1] [i_4 - 1]) ? (arr_12 [i_1] [i_4 + 1]) : 64)))))));
                            var_23 = ((var_8 & var_13) ? ((((var_14 ? (-127 - 1) : 4294967287)))) : (((28596 ? (arr_5 [1]) : (arr_5 [i_3])))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_24 = (min(var_24, (((31907 ? 80 : (!var_0))))));
                            var_25 = 164;
                            var_26 -= -91;
                        }
                        arr_19 [i_3] [i_1] = 18446744073709551615;
                    }
                }
            }
            arr_20 [i_1] [i_1] [i_0] = (((((166 - 0) + var_18)) - (((var_18 + 1) - 4253))));
            var_27 = (min(var_27, (((!(((var_5 && var_18) || var_1)))))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_28 += var_7;
                        var_29 = (-26349 ? var_12 : (((((var_5 ? 182 : var_6)) >= 28620))));
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {
            arr_29 [10] [i_8] = ((((var_6 ? 8 : var_9)) >> 1));
            var_30 = (max(var_30, ((((arr_1 [i_0] [i_0 - 2]) ? var_13 : ((-1 ? 14623 : 2147467264)))))));
        }
        var_31 = var_15;
    }
    for (int i_9 = 4; i_9 < 15;i_9 += 1)
    {
        arr_32 [i_9] [i_9] |= (min(var_7, var_3));
        arr_33 [i_9] = var_18;
    }
    var_32 = var_2;
    #pragma endscop
}
