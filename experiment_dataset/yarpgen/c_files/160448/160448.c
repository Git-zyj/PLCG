/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 + 2] = ((-(((arr_0 [i_0 + 2] [6]) ? (arr_0 [i_0 + 1] [15]) : (arr_0 [i_0 - 1] [i_0 - 1])))));
        var_16 = (((max(((max(var_3, var_0))), ((12327122226468001960 ? (arr_0 [i_0] [i_0]) : -79)))) > (max(var_3, (((arr_1 [i_0]) ? var_14 : var_11))))));
        var_17 = (!var_9);
        var_18 = ((!(((max((arr_1 [4]), -72))))));
        var_19 = (((((arr_1 [i_0 + 1]) ? -var_11 : (-79 || 8192)))) ? (max((((arr_0 [i_0] [i_0]) ? var_15 : var_7)), (!14841679271383427824))) : -var_5);
    }

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_20 = (+(((arr_3 [i_1]) ? (arr_3 [i_1]) : ((-79 ? -7 : 1)))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_21 = ((!(arr_8 [i_1] [i_3] [i_3] [i_4])));
                    var_22 *= ((~((12236 ? 8217 : (arr_10 [18] [18])))));
                    var_23 = ((-((((arr_4 [i_1]) != var_2)))));
                }
                var_24 = (max(var_24, ((((arr_8 [12] [i_1] [i_2] [i_3]) || -79)))));
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                arr_15 [i_1] [i_2] [i_1] = (i_1 % 2 == 0) ? ((((arr_12 [i_1] [1] [i_2] [i_5]) >> (-1 + 20)))) : ((((((arr_12 [i_1] [1] [i_2] [i_5]) + 2147483647)) >> (-1 + 20))));
                var_25 = (min((max((((var_2 ? var_8 : var_4))), (var_13 * var_7))), ((((((-12237 ? 18411049305320844332 : 39366))) ? 18009 : (var_13 <= 642687248))))));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_26 &= (var_12 > (!var_0));
                    var_27 = (max(var_27, (arr_9 [i_1] [i_2] [i_5] [i_6] [22])));
                    var_28 = (arr_14 [i_1] [i_2]);
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    arr_21 [i_5] [i_1] [11] = (((((var_3 ? 35694768388707303 : var_7))) ? var_13 : (1 / 56517)));
                    arr_22 [i_1] [i_1] [i_5] [i_7] = (((arr_11 [i_7 - 1] [i_7] [i_1] [i_7 - 2] [i_7 - 1] [i_7 + 1]) ^ (arr_5 [i_7] [8] [i_1])));
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_29 = (!var_4);
                            var_30 = ((1 ? ((max((~var_3), (arr_20 [i_1] [i_1] [i_8] [i_1] [i_9] [i_10])))) : var_9));
                            var_31 = (max(var_31, ((max(9342474953882262407, -98)))));
                            var_32 = max(var_5, (min(var_7, ((222 ? 9689094099380718739 : 3458223535)))));
                        }
                    }
                }
            }
            var_33 = (max(var_33, (((~(((arr_14 [0] [i_2]) ? var_10 : (arr_14 [6] [i_2]))))))));
        }
    }
    for (int i_11 = 4; i_11 < 24;i_11 += 1)
    {
        var_34 = ((((max((max((arr_30 [i_11] [i_11]), (arr_30 [i_11] [i_11]))), var_11))) ? (arr_30 [i_11] [i_11]) : var_4));
        arr_31 [i_11] [i_11] = (~4091011955);
        var_35 = (arr_30 [i_11] [i_11]);
    }
    var_36 = ((17386592773037270901 ? ((-6 ? 8265386332909423345 : 0) : 35694768388707273)));
    #pragma endscop
}
