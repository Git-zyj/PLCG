/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] |= 242;
                var_13 = ((-(~246)));
                arr_5 [17] [i_1] = ((10988 - (max(796769690, (arr_2 [i_1] [16])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    arr_15 [3] [i_3] = (((+(min((arr_7 [4] [i_2]), (arr_1 [6]))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_14 &= var_6;
                            var_15 = (max(var_15, (((~(arr_7 [i_6] [10]))))));
                            var_16 = 4294967295;
                        }
                        arr_21 [i_2] = var_12;
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_17 = -var_10;
                        arr_24 [19] [i_4] [17] = ((~((1447463060 ? ((var_12 ? (arr_14 [i_2] [13] [11]) : var_1)) : -254))));
                        arr_25 [i_2] [i_2] [18] [18] [i_2] [17] = ((!(((((((arr_0 [i_2]) >= (arr_9 [i_7] [i_7])))) & (((!(arr_13 [i_2] [8] [2])))))))));
                        arr_26 [11] [18] [17] [10] [i_3] [21] = (max(-var_1, ((((1447463060 & 9223372036854775792) ? 1 : ((var_7 ? var_4 : var_0)))))));
                    }
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        arr_30 [16] [16] [i_4] [18] = var_4;
                        var_18 = ((-(arr_29 [i_3])));
                    }
                }
            }
        }
    }
    var_19 = (((-((var_4 ? var_8 : var_12)))));
    var_20 = (min(var_20, 242));
    var_21 = var_0;
    #pragma endscop
}
