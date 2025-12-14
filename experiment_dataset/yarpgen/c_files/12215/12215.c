/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 += (min(var_0, ((((arr_0 [i_0] [i_1]) - ((var_14 ? 22856 : var_4)))))));
                var_20 *= (arr_0 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_21 = (arr_4 [i_0] [22] [12]);

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_22 *= (((arr_10 [i_0] [i_0]) / (arr_10 [i_0] [i_3])));
                                arr_14 [16] [16] [i_2] [1] [i_4] = (((arr_6 [i_0] [i_0] [12]) << (arr_0 [i_0] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (-var_3 | 85);
    var_24 *= -6;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_25 -= (!-57);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_28 [i_5] [i_6] [i_6] [i_5] [i_5] [i_5] [i_7] = (((((-(arr_15 [i_5] [i_5])))) && (((((((arr_8 [i_5] [i_5]) != (arr_24 [i_5] [i_6] [i_6] [10] [i_9] [i_6])))) ^ -14996)))));
                                var_26 += var_9;
                                arr_29 [i_5] [i_5] [i_7] [i_5] [i_9] = ((var_6 ? (((((max((arr_27 [i_5] [i_6] [i_7] [i_8] [i_9]), (arr_13 [i_5] [18] [i_6] [i_7] [i_8] [i_8] [i_9])))) ? (((arr_25 [i_5]) | 65535)) : 75))) : ((~(((arr_22 [i_7] [i_5]) + 581987702826299537))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            {
                var_27 = (((((arr_34 [i_10] [i_11] [i_11]) < 961199000)) || var_7));
                var_28 -= (((((-var_9 > (arr_31 [i_10] [8])))) >> (1749009738 - 1749009732)));
                arr_35 [i_10] [i_11] = (((((var_13 ? (arr_2 [i_10] [i_10]) : 100)) ^ (arr_31 [i_11] [i_10]))) == ((min((arr_4 [i_10] [i_10] [i_10]), (arr_4 [i_10] [i_10] [23])))));
            }
        }
    }
    #pragma endscop
}
