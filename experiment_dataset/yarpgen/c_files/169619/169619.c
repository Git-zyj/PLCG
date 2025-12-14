/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 = 914968638295887212;
        arr_2 [i_0] [i_0] = var_9;
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (arr_3 [i_1 + 2]);
        var_11 = 4210;
    }

    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_12 = 32763;

            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                arr_14 [i_2 + 2] [i_2] [i_4] = ((-var_9 % ((-((max(32767, (arr_10 [i_2 - 1] [i_3] [i_4 + 2]))))))));

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_18 [i_2] [i_2] [i_2] [0] = (((((((arr_9 [i_4]) ? -15 : -8))) ? ((((!(arr_8 [i_2 + 2]))))) : var_1)));
                    arr_19 [i_3] [i_2] = ((var_8 > ((14 ? ((((arr_8 [i_4 - 1]) ? -28 : var_3))) : (8241897679306104759 | 28)))));
                    arr_20 [i_2] [i_3] [i_4] = (arr_11 [i_3]);
                    arr_21 [i_2] [i_3] [15] = var_2;
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                {
                    var_13 = (-(!var_5));
                    arr_25 [i_2] [i_2] = (max(28, ((-(arr_12 [i_2 + 2] [i_2 + 2] [i_2] [i_4 + 2])))));
                    var_14 = (max(15, ((+(((arr_15 [i_2 + 1] [i_3] [i_4] [i_6]) + (arr_13 [i_2] [i_2] [i_2 + 2])))))));
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                {
                    var_15 = 4294967295;
                    arr_28 [i_2] [i_2] [i_3] [i_2] [i_2] [i_7] = (arr_26 [i_2] [i_2] [i_3] [i_4 - 1] [i_7]);
                }
            }
        }
        var_16 = ((((max((arr_17 [i_2 + 1] [i_2 + 1] [i_2] [i_2]), 15))) ? var_1 : 34));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        arr_31 [i_8] = ((((((arr_0 [i_8]) & (arr_0 [i_8])))) ? 23 : (arr_0 [i_8])));
        arr_32 [i_8] = ((-4294967295 ? (((var_8 ? (arr_4 [i_8] [i_8]) : -20))) : (max((max(23792, (arr_16 [i_8] [i_8] [1] [i_8] [i_8]))), 1))));
        var_17 = ((15 ? ((((min(-15, var_9))) ? (~27) : var_1)) : ((~(arr_3 [i_8])))));
        arr_33 [i_8] = (18446744073709551615 > (max((~13659992495622901240), (arr_13 [i_8] [i_8] [i_8]))));
    }
    for (int i_9 = 2; i_9 < 15;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                {
                    arr_42 [i_9] [i_9 - 1] [i_10] [i_11] = (((~492) ? ((0 | (arr_39 [i_9 - 2] [i_9 - 2]))) : var_4));
                    var_18 = ((!(((-6 ? 61042 : 2)))));
                }
            }
        }
        arr_43 [i_9] = ((((43 ? -32524 : (((arr_41 [i_9 + 1] [i_9] [i_9 - 1]) ? var_9 : var_2)))) > -15));
        arr_44 [i_9] [i_9] = 30857;
    }
    var_19 = var_6;
    var_20 = var_0;
    #pragma endscop
}
