/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (((arr_2 [i_1]) >= (arr_2 [i_1 + 1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_3] [i_1] [16] [i_3] = (((arr_10 [i_0 - 2] [i_1] [i_2 - 1] [i_3]) ? var_4 : ((((((var_6 ? var_12 : (arr_2 [i_3])))) ? ((min(var_11, 19040))) : var_2)))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_14 = (max(((((min((arr_10 [i_4] [i_3] [i_2] [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0])))) ? (arr_10 [i_0] [1] [4] [9]) : (arr_13 [i_0 - 1] [i_0]))), ((((min(var_7, (arr_13 [i_0] [i_0 - 1])))) ? (((!(arr_8 [i_0] [i_0] [i_2] [i_3] [6])))) : (arr_6 [24] [i_2] [i_3] [24])))));
                                var_15 &= ((~((var_0 ? (arr_1 [i_3]) : (arr_1 [i_0])))));
                            }
                        }
                    }
                }
                var_16 = arr_4 [i_1];
            }
        }
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_17 = (min(var_17, ((((~14) ? (max((((arr_15 [i_5]) ? (arr_6 [0] [2] [i_5] [9]) : (arr_10 [i_5] [19] [i_5] [i_5]))), var_3)) : -var_9)))));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 10;i_8 += 1)
                {
                    {
                        var_18 *= var_10;
                        arr_23 [i_5] [i_6] [i_7] [8] [8] = (arr_8 [i_5] [i_6] [i_7] [i_7] [12]);

                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            var_19 = (min(var_19, ((((arr_24 [i_8] [1] [i_8] [i_8] [i_8 - 2] [i_8] [i_8]) || (arr_24 [i_8] [i_8] [i_8] [i_8] [i_8 + 1] [8] [4]))))));
                            arr_27 [8] [i_6] [i_7] [8] [i_9] = (arr_8 [i_5] [i_5] [i_5] [i_8] [i_5]);
                        }
                        var_20 = (arr_1 [i_7]);
                    }
                }
            }
            var_21 = ((!(arr_1 [i_6])));
        }
        for (int i_10 = 3; i_10 < 9;i_10 += 1)
        {
            arr_30 [i_10] [8] [i_5] &= ((-((var_1 ? (arr_14 [i_5] [i_5]) : (((var_2 ? var_5 : var_9)))))));
            var_22 = (min(var_22, ((((var_9 >= (((var_3 && (arr_1 [i_5])))))) ? (arr_26 [i_10] [4] [i_10] [4] [i_5]) : (arr_22 [i_5] [i_10] [i_10 + 3] [i_10] [i_10] [i_10 - 2])))));
            var_23 *= (min((((var_2 ? ((var_5 ? var_3 : (arr_13 [i_5] [i_10]))) : (arr_29 [i_5] [i_5] [i_5])))), var_0));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_24 = (arr_21 [8] [i_5] [i_11] [8] [10] [i_11]);
            var_25 = ((~(arr_5 [22])));
            var_26 = (15413 && 50124);
        }
        var_27 = ((((((max(var_8, var_3))) || (arr_9 [i_5] [22] [1] [18]))) ? ((((((arr_0 [i_5] [i_5]) ^ 50132))) ? var_7 : 15435)) : (((+((var_8 ? (arr_19 [i_5] [4] [i_5] [i_5]) : var_9)))))));
    }
    #pragma endscop
}
