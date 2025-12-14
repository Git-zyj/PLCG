/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (((var_4 ? 0 : (min(0, 0)))) ^ var_7);
    var_13 = -var_6;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_14 = (((arr_0 [i_0 - 2]) ? (max((arr_0 [i_0 - 2]), (arr_2 [i_0 - 1]))) : (min(18446744073709551600, (arr_2 [i_0 - 2])))));
        arr_3 [i_0] = (((arr_2 [i_0 - 2]) ? (arr_2 [i_0 - 2]) : (arr_1 [i_0 - 2])));
        arr_4 [i_0] [i_0] = (2612738215 + 6652504798457418865);
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                var_15 = (max(var_15, ((((((17833640352607878268 ? var_5 : 11732118040518838797))) || 10366)))));
                arr_16 [i_3] [i_1 + 1] = (!(arr_14 [i_3 + 2] [i_3 - 2] [i_3 - 1] [14]));
                var_16 = (max(var_16, var_2));
                arr_17 [i_1 + 2] [i_2] [i_2] [i_3 - 1] = ((~(arr_11 [20] [i_3 - 3])));
            }
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_17 = (min(var_17, ((((arr_10 [i_1 - 1]) ? (arr_5 [i_1 + 3]) : (arr_10 [i_1 + 2]))))));
                            arr_27 [7] [i_4] [i_4 - 2] [i_5] [i_6] = ((((8219550385013494054 ? 1 : 63))) ? ((12771 ? var_2 : var_0)) : (arr_24 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_18 = (((arr_9 [i_1 + 1] [i_4 + 2] [i_4 + 2]) / (arr_9 [i_1 + 3] [i_4 - 1] [i_4 + 2])));
                    arr_31 [i_4] [i_2] [i_4] = ((var_6 ? 54103 : (arr_10 [i_4 - 1])));
                    arr_32 [i_4] [i_2] = ((((var_5 ? var_5 : (arr_25 [i_4] [i_2] [i_4] [i_7] [1])))) ? (8336820946971831632 / 5681497788931554110) : (((((arr_19 [i_1] [i_4] [i_1] [i_1]) != 537930970)))));
                }
                var_19 = (arr_12 [i_1 + 3] [1] [1]);
                arr_33 [i_4] = (((arr_19 [i_4 + 1] [i_4] [i_4] [i_1]) ? ((17833640352607878268 ? 613103721101673373 : 456033703)) : (arr_28 [13])));
            }
            var_20 = (min(var_20, 0));
            var_21 = (min(var_21, 11732118040518838788));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_22 = (max(var_22, 6652504798457418864));
            arr_38 [i_8] = (arr_12 [i_1] [16] [i_1]);
        }
        var_23 = (max(var_23, (65535 & 613103721101673339)));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_24 += -29859;
        arr_42 [i_9] = (min(((min(var_5, (arr_30 [i_9] [i_9] [i_9] [i_9])))), (min(17892020515039567480, 11732118040518838807))));
        var_25 = (min(var_25, ((max(((~(((arr_11 [4] [i_9]) ^ 957568863911262121)))), (arr_19 [8] [18] [6] [8]))))));
    }
    #pragma endscop
}
