/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((!(((var_4 ? -11644 : ((max(27069, -309))))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] |= var_11;
        var_16 = (min(var_16, ((((arr_1 [i_0 - 2]) ? (((var_3 + 9223372036854775807) << (((arr_0 [i_0] [i_0]) - 1)))) : (var_4 / -7977993456867919943))))));
        arr_3 [i_0 - 2] = (((arr_1 [i_0 - 1]) ? (~230) : 2785559053));
        var_17 = (!308);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_18 *= (arr_8 [i_2] [i_2] [i_2]);
                        arr_18 [i_4] [i_3] [i_3] [i_2] [i_1] = ((var_11 / (arr_14 [i_3] [i_3] [i_3 + 2] [i_2] [i_2] [i_2])));
                        var_19 *= (!var_7);
                        arr_19 [i_1] [i_1] [i_1] [i_1] = 333;
                    }
                }
            }
        }
        var_20 = (arr_8 [i_1] [i_1] [i_1]);
    }
    var_21 = var_1;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_22 = arr_0 [i_5] [i_5];
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_23 += (min(((-var_10 % ((0 ? var_6 : 30851)))), (+-333)));
                                arr_32 [i_5] [i_6] [i_6] [i_6] [i_6] = (arr_27 [i_5] [i_6] [i_9 - 1] [i_9 - 1] [i_9] [i_9]);
                                arr_33 [i_5] = ((((arr_27 [i_8 - 1] [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1] [i_8 - 1]) ? var_8 : var_1)) % (arr_0 [i_6] [i_7]));
                                var_24 = (arr_22 [i_5] [i_7]);
                            }
                        }
                    }
                    var_25 = (max(var_25, ((((arr_23 [i_6]) ? var_10 : (((((var_11 ? (arr_29 [i_5] [i_5] [i_7] [i_7]) : 333))) ? var_5 : (min(172, var_3)))))))));
                    var_26 += (arr_9 [i_5] [i_5] [i_7]);
                    var_27 = 172;
                }
            }
        }
    }
    #pragma endscop
}
