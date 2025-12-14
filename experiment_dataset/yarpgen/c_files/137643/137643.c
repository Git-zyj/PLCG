/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_20 *= 19;
                        var_21 *= ((var_15 ? -1 : (((arr_4 [i_0]) ? var_5 : 236))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_1] [i_1] = (min(((-(arr_3 [i_0] [i_0] [i_0]))), (((var_10 < (arr_5 [13] [13]))))));
                        var_22 |= ((((arr_10 [i_0]) ? (arr_11 [i_2]) : (arr_10 [i_4]))));
                    }

                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        var_23 += var_3;
                        var_24 = (min(var_24, (((var_4 ? (arr_0 [i_0]) : (max(var_13, var_15)))))));
                    }
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_25 = (min(var_25, 10));
                            arr_21 [i_0] = var_9;
                            var_26 = (min(var_26, (((arr_17 [i_6 - 1] [i_6 + 1] [i_6]) << (var_18 - 209)))));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_27 = (~7);
                            arr_24 [i_1] = var_3;
                        }
                        arr_25 [i_0] [i_1] [i_6] [i_6] [i_1] = ((+((var_10 ? (-25 * -10616) : ((19 ? (arr_6 [i_0] [i_0] [i_2] [i_6]) : (arr_20 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        arr_26 [i_0] [i_1] [i_1] [i_6 - 1] [i_6] [i_0] |= (((var_2 ? 209 : var_9)));
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_0] = (min(0, (((arr_19 [i_2]) ? ((-267842246 ? 194 : 24576)) : ((max(384, 7)))))));

                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 20;i_10 += 1)
                        {
                            arr_32 [i_9] [i_1] [i_2] [i_1] = (var_12 - var_8);
                            var_28 = ((var_3 ? var_16 : -var_12));
                        }

                        for (int i_11 = 2; i_11 < 18;i_11 += 1)
                        {
                            arr_37 [i_0] [i_2] [i_9] [i_11] = (((min(var_12, 52))) ? (((arr_34 [i_11] [i_11 + 1] [i_11 - 2] [i_11] [i_11 - 1] [i_11]) ? (arr_34 [i_11] [i_11 + 1] [i_11 - 2] [i_11] [i_11 - 1] [18]) : (arr_34 [i_11] [i_11 + 1] [i_11 - 2] [i_11] [i_11 - 1] [i_11 + 1]))) : (((arr_3 [i_0] [i_9] [i_9]) ? (!63) : -19)));
                            var_29 = 194;
                            var_30 -= ((608968707 ? ((min((arr_9 [i_0] [6] [i_0] [i_0]), var_7))) : ((-(!2797406913)))));
                        }
                        arr_38 [i_0] [i_0] [i_0] [i_0] = (((93 ? (231 < var_12) : 7421)));

                        for (int i_12 = 2; i_12 < 19;i_12 += 1)
                        {
                            arr_41 [i_0] [i_1] [i_2] [i_1] [i_12] = (min(((var_3 ? (-4213435584935294102 < -53) : (((arr_20 [i_0] [1] [i_2] [i_2] [i_1] [i_1] [i_0]) ? var_16 : var_2)))), (arr_28 [i_0] [i_1] [i_2] [i_2] [i_2] [i_12])));
                            arr_42 [i_12] [i_2] [i_0] [i_0] = (min(var_5, (max(var_1, var_9))));
                        }
                    }
                }
            }
        }
    }
    var_31 = (min(var_31, var_4));
    #pragma endscop
}
