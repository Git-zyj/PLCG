/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 ^= (max(2455385044916457149, 6910478156077749575));
        var_20 = (max(var_20, ((((((var_0 ? var_12 : var_13))) ? var_5 : var_14)))));
        arr_2 [0] [i_0] = ((arr_0 [i_0] [i_0]) >= (((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_12 [21] [i_0] [i_3] [i_3] = ((+(((~-2455385044916457160) ? var_17 : (var_6 & 18)))));
                        var_21 = ((((((!(arr_0 [i_3] [i_3]))))) | (((((-29 - (arr_9 [i_3] [i_1] [i_1])))) * (arr_7 [i_0] [i_0] [i_0] [i_0])))));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_22 = var_17;
                            var_23 *= min(10706, 25649623);
                            var_24 = (min(var_24, 502));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] = (((((126 ? var_7 : -4067))) != var_6));
                            arr_27 [i_0] = 31217;
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_31 [i_5] [i_5] [i_0] [i_9] = (min(var_4, 201));
                            var_25 *= ((var_3 == (~14)));
                            var_26 = -490;
                            arr_32 [i_0] [14] [0] [0] [0] [i_0] [i_0] = (!-2455385044916457169);
                        }
                        var_27 = ((((min((!-2147483638), (min(6794, 185))))) >> ((((max(-2455385044916457164, (arr_9 [i_6] [i_5] [i_6])))) - 168))));
                    }

                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {

                        for (int i_11 = 3; i_11 < 21;i_11 += 1) /* same iter space */
                        {
                            arr_39 [i_0] [i_0] [i_0] [13] [i_0] = ((~(arr_37 [i_0] [i_0] [i_6] [i_11 - 1] [i_11 + 1] [i_0] [i_6])));
                            var_28 = (max(var_28, ((((-3865386083587899560 ? (min(var_0, 1390789203) : (~505))))))));
                        }
                        /* vectorizable */
                        for (int i_12 = 3; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            var_29 = 31380;
                            var_30 = var_3;
                            arr_43 [i_0] [i_0] [i_6] = (((((-1466885599 ? var_3 : 45))) ? var_11 : -16003));
                        }
                        arr_44 [i_0] [i_6] [i_6] [i_5] [i_5] [i_0] = (arr_22 [i_0] [i_0] [i_0] [i_0]);
                        var_31 = var_6;
                    }
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        arr_47 [18] [i_6] [i_0] [i_0] [i_0] [i_0] = (max(((min(var_14, (!-1842583550)))), (2147483624 % var_10)));
                        var_32 |= ((~(!var_16)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
