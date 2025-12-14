/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min((max(1, 4294967272)), (-var_2 != var_3));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = var_5;
        var_12 = (max(var_12, (arr_2 [1])));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [10] [i_1] [i_0] = (arr_2 [i_0]);
            var_13 &= (((arr_2 [i_1]) ? 5716847674611851630 : ((-5404027309371886196 ? -5716847674611851630 : 5090))));
        }
        var_14 = 1;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] = var_7;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_4] [i_2] [i_2] = (~17486);
                    var_15 = (arr_10 [i_2] [10] [i_4]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                {
                    var_16 = (arr_18 [i_5]);

                    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            arr_27 [i_5] [i_6] [i_5] [i_8] [i_7] = var_6;
                            arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] [i_8] [i_9] = ((var_3 ? (((~(arr_26 [i_9] [i_8] [i_7] [1] [i_5])))) : (arr_15 [i_6])));
                            var_17 = 1;
                            var_18 ^= var_0;
                        }
                        arr_29 [i_7] [6] [6] [i_8] = (137 % 10);
                        var_19 = (max(var_19, (((1 / ((((arr_20 [i_5] [i_8] [i_8]) < 4611668426241343488))))))));
                        var_20 = arr_17 [i_5];
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                    {
                        var_21 &= ((var_10 >= ((14 ? 213 : var_5))));
                        var_22 = ((var_4 < (arr_19 [i_10] [i_7] [i_6])));
                    }
                    var_23 = (max(var_23, -2740963996539901707));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 17;i_13 += 1)
                {
                    {
                        var_24 = (max(var_24, (((var_1 / (((arr_36 [i_12] [i_5] [i_5]) ? var_2 : 14929)))))));
                        arr_41 [i_11] [i_11] [i_11] [i_11] = var_7;
                        arr_42 [i_5] [i_11] = ((524256 || (0 & 14)));
                        var_25 = (!(arr_24 [i_5] [i_5] [17] [i_12] [i_12] [i_13 - 1] [i_13]));
                    }
                }
            }
        }
    }
    var_26 = 969207122240080597;
    var_27 = var_4;
    #pragma endscop
}
