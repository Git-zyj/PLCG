/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max(var_17, (-1775939980256322536 ^ -1775939980256322536)));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_18 = (((arr_0 [i_0] [i_0]) ? var_1 : 108442537));
            arr_7 [i_0] = (!1775939980256322536);

            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                arr_12 [i_0] = var_5;
                var_19 = (arr_0 [i_0] [i_1]);
            }
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    arr_20 [i_3] [i_0] [i_0] [i_4] = var_5;

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_20 += ((arr_23 [i_0] [i_0] [i_0] [i_4] [i_5]) ? 255 : 101);
                        var_21 = (((!var_14) ? (arr_17 [i_4] [i_4] [i_4] [i_4]) : (arr_1 [i_5])));
                        arr_24 [i_4] [i_4] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_0]);
                        var_22 = (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        var_23 = (((arr_23 [i_0] [i_1] [i_4] [i_4] [i_6 + 1]) ? (arr_23 [i_0] [i_1] [i_4] [i_4] [i_6 + 1]) : (arr_23 [i_0] [i_0] [i_0] [i_0] [i_6 + 1])));
                        var_24 -= (arr_23 [i_6 - 1] [i_6 + 4] [i_6 - 1] [i_6 + 3] [i_6 - 1]);
                    }
                }
                arr_27 [i_0] = -51;
            }
            var_25 *= (((arr_17 [i_0] [i_1] [i_1] [i_1]) ? (arr_17 [i_0] [i_0] [i_1] [i_1]) : 65535));
            var_26 = (max(var_26, 249));
        }
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                arr_34 [i_0] [i_0] [i_0] = (((arr_13 [i_7 + 2] [i_0]) ? (~33718) : var_9));
                var_27 = (min(var_27, (arr_16 [16] [i_7] [16])));
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                arr_39 [i_0] [i_0] [i_0] = (arr_3 [i_9]);
                var_28 = (((((arr_2 [i_0]) ? 5966861610291669514 : 12479882463417882102)) <= 30982));
                arr_40 [0] |= (((arr_19 [i_7 + 3] [i_7 + 2] [i_7 + 3] [i_7 - 1]) << (((arr_19 [i_7 + 1] [i_7 + 3] [i_7 + 1] [i_7 + 1]) - 40))));
            }
            var_29 = (min(var_29, var_11));
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            {
                var_30 = (((--1775939980256322536) <= ((min(1, (arr_42 [i_10]))))));
                var_31 = (((((((var_9 ? var_11 : var_0))) ? (~119) : 255)) != ((((arr_43 [i_11]) > (arr_43 [i_10]))))));
            }
        }
    }
    #pragma endscop
}
