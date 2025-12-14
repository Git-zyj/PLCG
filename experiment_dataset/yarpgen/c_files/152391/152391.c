/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_7 ? 55 : var_8));

        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            var_12 ^= (((((min(var_3, 46)) ? (((arr_5 [i_0] [i_0] [i_0]) ? var_10 : 66)) : var_2))));
            var_13 = (min(var_13, (((((max(var_10, (~-8906812767380493068)))) ? var_9 : (arr_5 [i_1 - 2] [i_1] [i_0]))))));
            var_14 = (max(var_14, -16));
        }
        var_15 -= 0;
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_16 = (min(var_16, ((min((arr_8 [0]), 36716)))));
                    var_17 ^= ((arr_8 [i_2 - 1]) ? (arr_8 [i_2 - 3]) : (((arr_8 [i_2 + 4]) | (arr_8 [i_2 + 1]))));

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_23 [i_2] [i_3] [18] [i_5] [i_3] [i_6 - 1] |= ((min(var_7, (arr_22 [i_3] [i_5] [i_3] [i_4] [i_3] [i_3] [i_2 - 3]))));
                            arr_24 [i_2] [i_3] [i_3] = (min((!4), (min(-1700526039, (max(var_1, var_1))))));
                            arr_25 [i_2] [i_3] &= (((((min(-110, 56852)))) % var_1));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_18 += ((min((arr_22 [i_2 + 1] [i_2 + 1] [i_3] [i_2 + 2] [i_2] [i_2 - 2] [i_2]), 0)) - (((min((arr_15 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 4]), (arr_15 [i_2 - 1] [i_2 + 2] [i_2] [i_2 + 3]))))));
                            var_19 *= ((!-3432545517185128587) >= var_3);
                            var_20 = (min(var_20, (((var_3 & (min(((min(var_3, var_8))), ((-4517161139176501208 | (arr_18 [i_2 + 4] [i_3] [i_2 + 4]))))))))));
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_21 |= (((var_6 ? (((!(arr_21 [i_8])))) : (!var_11))));
                            arr_33 [i_2] [i_2] [i_4] [i_5] [i_2] = ((((max((min(65520, 4)), (arr_11 [i_2 - 2])))) % (((min(var_11, (arr_21 [i_4])))))));
                            var_22 *= var_11;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_23 -= ((var_8 && 25357) == var_10);
                            var_24 = 0;
                        }
                        arr_36 [i_2] [i_2] [i_4] [i_5] [i_5] [i_3] = var_5;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                {
                    var_25 ^= (min(((3229536231 / (512 & 65532))), 2219494630));
                    var_26 *= (arr_30 [i_11] [i_10] [i_2 + 1]);
                    arr_43 [6] [i_10] [i_10] [i_11] &= ((min((~var_5), ((var_10 << (arr_38 [i_2 + 3] [i_10]))))));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        arr_46 [i_12] = ((-((var_5 * (var_10 * var_2)))));
        arr_47 [i_12] = (min(65531, (min((!3600479802), (max(var_1, -4405790696522268428))))));
        var_27 = (min(var_27, (((!(!-55))))));
    }
    var_28 = (min((6000333769922623061 - -21467), var_1));
    var_29 |= var_1;
    #pragma endscop
}
