/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = ((!(arr_10 [i_0] [i_1] [i_2] [i_3] [i_4])));
                                var_17 *= ((!(((arr_11 [i_0] [i_1 - 1] [i_2] [i_4]) && (arr_7 [i_0 - 1] [i_1 + 1] [i_2])))));
                                var_18 = ((+((((0 % 1) >= (var_9 ^ 1))))));
                            }
                        }
                    }
                    var_19 += (((((-(arr_7 [i_0] [i_1] [i_2])))) ? var_14 : ((max(((-(arr_5 [i_0] [i_1] [i_2]))), ((max(1, var_7))))))));
                    var_20 = ((!(arr_7 [i_0 - 1] [i_1] [i_1])));
                    var_21 = (((max((((arr_8 [i_2] [i_1] [i_2] [i_1] [i_1] [i_0]) ? (arr_3 [i_0] [i_1]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((!(arr_7 [i_0] [i_1] [i_2]))))))) >= 262143);

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_2] [i_5] = arr_10 [i_5] [i_1 - 1] [i_2] [i_0 - 3] [i_5];
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5] = ((1 ? 255 : 16895));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_22 = (max(var_22, (arr_19 [i_6] [i_6] [i_2] [i_1] [i_1] [i_0])));
                        arr_21 [i_1] [i_2] = ((~((((min(var_0, (arr_4 [i_6] [i_2] [i_1] [i_0])))) % (arr_6 [i_1 + 1] [i_0 - 2])))));
                    }
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    arr_24 [i_0] [i_0] [i_0] = 48649;
                    arr_25 [i_7] [i_1] [i_1] [i_0] = ((((var_7 < (arr_18 [i_1 + 1] [i_0 - 1] [i_7] [i_0] [i_7] [i_7]))) ? (((arr_11 [i_0 - 2] [i_1 + 4] [i_7] [i_7]) ? var_4 : (arr_11 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1]))) : (min(3151, var_1))));
                    var_23 = (((((~(arr_23 [i_7])))) ? ((((!((max(var_3, (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))))) : (min((arr_18 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_1 - 1]), (((48640 / (arr_6 [i_0] [i_1]))))))));
                    var_24 &= (arr_22 [i_0 - 2] [i_0] [i_1 + 1]);

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        var_25 *= (arr_10 [i_1 + 1] [i_1] [i_7] [i_0] [i_8]);
                        var_26 += (((arr_11 [i_1] [i_1] [i_1] [i_1 + 1]) % (arr_11 [i_1] [i_1] [i_1] [i_1 - 1])));
                    }
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_27 = ((70 >= (arr_12 [i_10] [i_9 - 1] [i_1 + 4] [i_0 + 1] [i_0] [i_0])));

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_36 [i_9] [i_9] = 62410;
                            arr_37 [i_0] [i_1] [i_9] [i_10] [i_9] [i_11] = (0 > 16886);
                        }
                    }
                    arr_38 [i_1] [i_9] = var_5;
                }
                arr_39 [i_0] [i_0] [i_1] = ((((~var_3) ? ((min((arr_10 [i_0] [i_1] [i_1] [i_0] [i_1]), (arr_2 [i_0] [i_0] [i_0])))) : (((arr_5 [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : var_6)))));
            }
        }
    }
    var_28 += var_13;
    #pragma endscop
}
