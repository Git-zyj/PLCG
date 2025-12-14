/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 *= ((var_2 ? (max((arr_0 [i_0]), (max((arr_2 [i_0]), (arr_4 [i_0]))))) : (((~(((var_6 && (arr_7 [13])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [14] [i_2] [i_3] = (max((arr_9 [i_1] [i_1] [i_3]), ((((min(73030461200896766, 1024))) ? (arr_10 [2] [9] [15] [i_1]) : (min(2395842113, -13685))))));
                            arr_14 [i_1] [i_1] = (max((((arr_8 [i_0] [i_1] [i_1]) ? (((arr_12 [5] [i_1] [i_1] [i_1] [i_2] [i_3]) & var_0)) : var_10)), ((((max((arr_6 [i_0]), 5701))) << (-90 + 102)))));

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_12 = ((-((+((var_7 ? (arr_10 [i_3] [i_3] [i_3] [i_1]) : (arr_1 [i_1])))))));
                                var_13 = (((arr_4 [i_1]) ? (arr_0 [i_2]) : (((((-21 != (arr_3 [i_0])))) * (!-32)))));
                                var_14 = ((+(((arr_15 [i_0] [i_0] [i_2] [19] [i_3] [i_2]) / (arr_15 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0])))));
                                var_15 = (max(-1534321398, var_10));
                                var_16 = ((+(((arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] [i_3]) ? var_10 : (arr_11 [i_1] [i_2] [i_1] [i_1])))));
                            }
                            arr_17 [i_0] [i_1] [i_1] [i_1] = (((((-(arr_9 [i_3] [i_1] [i_0])))) ? (arr_10 [i_0] [i_1] [i_2] [i_1]) : ((((((arr_12 [15] [i_2] [i_1] [i_1] [i_0] [i_0]) ? var_10 : (arr_15 [i_0] [13] [i_1] [i_2] [i_2] [i_2])))) ? var_0 : (arr_2 [i_3])))));
                        }
                    }
                }
            }
        }
    }
    var_17 = var_5;

    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = (-(((arr_18 [i_5]) ? (arr_18 [i_5]) : (arr_18 [4]))));
        var_18 = var_0;
        arr_21 [1] [i_5] = ((~((-20 ? 51270 : var_0))));
        arr_22 [9] = ((((max(63201, (max(9046, var_0))))) + (max((((!(arr_10 [i_5] [4] [i_5] [i_5])))), var_3))));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
    {
        var_19 ^= (max((arr_15 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (max((((~(arr_1 [i_6])))), var_9))));
        var_20 = (var_4 >= (((arr_16 [i_6] [i_6] [4] [i_6] [i_6] [i_6] [12]) ? (arr_24 [i_6]) : (arr_16 [i_6] [i_6] [i_6] [i_6] [5] [i_6] [i_6]))));

        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_21 = var_8;

            for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
            {
                var_22 = -32;
                var_23 += (arr_5 [i_8] [20] [i_6]);
            }
            for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
            {
                arr_35 [i_6] [i_7] [i_9] [i_9] = -11734;
                var_24 -= (arr_9 [i_6] [i_7] [i_7]);
                var_25 = (max(var_25, (arr_31 [i_6] [i_7] [i_6])));
            }

            /* vectorizable */
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                arr_39 [i_7] [i_6] = (!-15481);
                var_26 += (arr_6 [i_6]);
                var_27 ^= -214643265;
            }
        }
    }

    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        var_28 += (arr_6 [i_11]);
        arr_42 [i_11] = (max(((((max((arr_11 [i_11] [i_11] [i_11] [i_11]), 125))) ? var_7 : (arr_11 [i_11] [i_11] [i_11] [i_11]))), (((37944 ? ((var_5 ? (arr_3 [i_11]) : -13480)) : (((33521664 ? (arr_10 [i_11] [i_11] [i_11] [i_11]) : 43062))))))));
        var_29 = (max(((max((arr_12 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]), (arr_12 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))), ((19127 ? (arr_16 [1] [i_11] [16] [i_11] [i_11] [10] [i_11]) : var_7))));
        var_30 *= (arr_9 [i_11] [i_11] [i_11]);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
    {
        var_31 = 20255;
        var_32 = ((1244352063 ? (arr_7 [i_12]) : (arr_7 [i_12])));
    }
    #pragma endscop
}
