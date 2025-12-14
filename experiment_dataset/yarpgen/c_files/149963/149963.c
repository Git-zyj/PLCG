/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(var_2, (!var_1));
    var_13 -= var_6;

    for (int i_0 = 1; i_0 < 6;i_0 += 1) /* same iter space */
    {
        var_14 = max(530850957, 1);
        var_15 = (max(var_15, var_7));
        arr_3 [i_0] = (~(min(-var_11, ((0 ? (arr_0 [i_0]) : var_0)))));
    }
    for (int i_1 = 1; i_1 < 6;i_1 += 1) /* same iter space */
    {
        var_16 -= ((!((((arr_2 [4]) | var_8)))));
        var_17 = ((~(max(((max(var_5, var_5))), (max((arr_5 [i_1 + 4]), 1))))));
        var_18 += (max(18446744073709551615, (((!(arr_0 [i_1]))))));
        arr_6 [i_1] = (((((((arr_1 [i_1 - 1]) < (arr_1 [i_1 + 2]))))) >= (max((arr_1 [i_1 + 4]), var_8))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_11 [1] [2] [1] &= (arr_2 [0]);
            var_19 = (!-32541);
            var_20 = (((arr_4 [i_1 - 1]) || (arr_8 [i_2] [i_2] [i_1])));
            arr_12 [i_2] = (arr_1 [i_1]);
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 7;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                        {
                            var_21 = var_0;
                            var_22 &= (max(((max(1, (arr_16 [9] [i_3] [i_3] [i_4 + 3])))), ((-(arr_8 [i_6 + 1] [i_4 - 2] [i_1 + 4])))));
                        }
                        for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
                        {
                            arr_24 [7] [i_5] = var_5;
                            arr_25 [i_1 + 3] [i_5] = max(((min(684260203, -32541))), (max((arr_21 [i_4 - 4] [i_4 + 3] [i_4]), var_3)));
                        }
                        var_23 = (min(var_23, ((max((arr_8 [i_1 + 1] [i_1] [i_4 - 1]), ((-(arr_2 [6]))))))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_35 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] = (arr_31 [i_1] [i_1] [i_1] [i_1] [4] [i_1]);
                            arr_36 [i_1] [i_8] [i_9] = (arr_2 [i_10]);
                            var_24 = (min((max(var_6, var_6)), (((var_6 != (arr_19 [i_9] [i_9] [1] [i_8 + 1] [i_3] [i_1 - 1]))))));
                        }
                    }
                }
            }
            arr_37 [i_1] [i_1] [i_1] = ((((max(((max((arr_13 [i_3]), (arr_4 [i_1])))), (max((arr_29 [i_1] [i_1] [i_1] [1]), (arr_15 [i_3] [i_1] [i_1])))))) ? (arr_16 [0] [i_3] [i_1] [0]) : (min((arr_29 [i_1] [i_3] [2] [i_3]), (arr_27 [i_1 + 4] [i_1 + 1])))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
        {
            var_25 = ((36 || (arr_10 [i_1 + 2] [i_11] [i_11])));
            var_26 = (arr_10 [i_11] [i_1] [i_11]);
            var_27 = ((~(((arr_15 [0] [i_1 + 1] [i_1]) + (arr_22 [i_1] [i_1 + 3] [i_1] [i_1] [i_11] [i_11])))));
            var_28 = (arr_32 [i_1 + 4] [i_11]);
            var_29 -= (!var_11);
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_30 = (arr_40 [i_1]);

            for (int i_13 = 2; i_13 < 8;i_13 += 1)
            {
                arr_45 [4] [i_12] [i_12] [i_1] = var_3;
                var_31 = (min(var_31, (((((((arr_21 [i_13 - 1] [i_12] [i_1 + 4]) ? (arr_31 [i_1] [i_12] [i_12] [9] [i_12] [i_13 + 1]) : (arr_16 [i_13] [i_13 - 2] [i_13 - 2] [i_1 - 1])))) ? (((((max(1, 0))) || ((!(arr_39 [i_1] [i_13])))))) : (1 && 20001))))));
            }
            arr_46 [i_1] [i_12] [i_12] |= 997210103;
            var_32 = ((+(((arr_28 [i_1 + 4] [i_12]) ? (arr_28 [i_1 + 3] [i_12]) : (arr_28 [i_1 + 2] [i_12])))));
            var_33 -= ((!(~0)));
        }
    }
    var_34 ^= var_10;
    #pragma endscop
}
