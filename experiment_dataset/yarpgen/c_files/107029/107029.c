/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [12] [i_0] [12] = (((-var_3 + 2147483647) >> (((max((arr_7 [10] [i_1] [10] [10]), (var_3 != var_15))) - 740376184))));
                    arr_11 [0] [i_1] [i_0] = ((((93 > 228) == (arr_2 [i_0]))));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            var_16 = (~var_6);

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                arr_19 [i_3] [i_3] = (max(((((arr_5 [i_3] [i_4 + 1]) > (arr_4 [i_3] [i_3 - 1] [i_4 - 2])))), (arr_14 [0] [i_3])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            arr_26 [i_3] [i_6] [19] = (((((~(arr_24 [i_3 - 1] [1] [i_3])))) ? (2363942515 >> 28) : var_1));
                            arr_27 [18] [i_4 + 1] [i_3] [i_6] [i_6] = (max((((((~(arr_3 [i_3])))) ? ((-(arr_15 [i_3] [i_4 - 2] [i_5]))) : ((max(37327, -6))))), (max((arr_7 [1] [i_5] [i_6] [20]), var_6))));
                            var_17 = (arr_12 [i_3]);
                            arr_28 [i_3] [i_3] [i_3] [i_6] [i_6] [i_3] = (((-18428513 * 0) ? ((((min((arr_15 [i_7] [i_5] [i_4]), var_14))) ? -var_5 : var_5)) : ((1 ? 28 : 69))));
                            arr_29 [i_7] [i_3] [i_3] [i_4] = ((-(((var_14 & 2363942520) ? (((var_8 ? var_11 : var_2))) : ((~(arr_3 [i_3])))))));
                        }
                    }
                }
                var_18 = ((((-1653215488 / (((arr_16 [i_3]) * (arr_8 [i_3] [i_3] [i_3]))))) / ((+(((arr_21 [3] [i_4] [i_5]) / var_13))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_19 = (((((var_3 ? ((((!(arr_24 [i_5] [i_8] [i_3]))))) : ((var_15 ? var_2 : 16947066489448806792))))) ? (((((max(var_8, 155))) == (~var_15)))) : var_10));
                            var_20 = var_2;
                            var_21 = (((231 ^ -206370116) ? var_0 : (27902 ^ 1931024780)));
                        }
                    }
                }
            }
            arr_34 [i_4] |= (~(((!(arr_2 [i_4])))));
        }
        var_22 -= ((-((120 ? (((~(arr_14 [i_3] [i_3 - 1])))) : (max((arr_15 [i_3] [i_3 - 1] [11]), var_4))))));
        arr_35 [2] [i_3] &= ((((var_2 > (arr_4 [i_3] [i_3 - 1] [i_3]))) ? (((arr_17 [i_3] [i_3 - 1] [i_3]) + (arr_2 [18]))) : var_2));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_23 = var_3;
        var_24 = (max(var_24, ((max(((((max((arr_2 [16]), var_7))) ^ ((228 ? 8 : 160)))), (((!(arr_1 [i_10])))))))));
        arr_38 [i_10] = ((((((arr_7 [i_10] [i_10] [i_10] [i_10]) >= ((var_10 ? 1499677584260744801 : (arr_6 [9] [9])))))) == var_3));
        var_25 = (min(var_25, (((((-2 && (arr_37 [i_10] [i_10]))) ? (arr_8 [i_10] [i_10] [12]) : (!var_15))))));
    }
    var_26 = var_1;
    #pragma endscop
}
