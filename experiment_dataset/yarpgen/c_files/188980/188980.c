/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    var_17 = (max(var_14, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 += (min((arr_4 [i_0] [i_0]), 1));
                arr_5 [i_1] = ((!((((arr_0 [i_0]) * 9355685242909001033)))));
                arr_6 [i_0] [i_1] [i_1] = (((arr_2 [i_0] [i_1] [i_1]) ? (arr_3 [i_1]) : (max((min(28281, 9355685242909001037)), ((((arr_0 [i_0]) ? (arr_4 [i_0] [i_1]) : var_3)))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_19 ^= 28288;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_20 *= (((arr_0 [i_1]) - (arr_11 [i_0] [i_2] [0] [i_3] [i_2] [i_1])));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_4] [i_1] [i_1] [i_1] = (--67);
                            var_21 = (max(var_21, (((24 ? 18446744073709551615 : 1568817341)))));
                            var_22 = (min(var_22, (((!(arr_9 [8]))))));
                            arr_16 [i_0] [i_1] [i_2] [i_1] [i_1] = (~var_13);
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_3] [7] = ((var_7 == ((var_0 ? 9091058830800550587 : var_9))));
                            arr_22 [10] &= (((((9355685242909001024 ? var_4 : (arr_3 [i_0])))) || var_6));
                            var_23 = (!28281);
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2] = ((var_10 ? (arr_10 [9] [i_3] [i_2] [i_1]) : (arr_10 [i_6] [i_3] [i_2] [i_0])));
                            var_24 = (((((-111 ? 13 : var_1))) ? (arr_1 [1]) : -28281));
                            var_25 = (~var_6);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_34 [i_0] [i_7] [i_0] [i_1] [i_8] = (((((4095 ? var_2 : (arr_27 [i_8] [i_1] [i_2])))) < ((var_0 ? 9091058830800550588 : var_12))));
                                arr_35 [i_0] [i_1] [i_1] [i_7] [i_0] [i_8] = ((var_8 << (var_6 + 1705796977)));
                            }
                        }
                    }
                }
                arr_36 [i_0] [i_1] [i_1] = ((var_2 <= (arr_29 [i_0] [i_0] [i_1])));
            }
        }
    }

    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        var_26 = (min(var_26, ((((min(-2147483617, (4095 <= var_13))) & (((!(((var_11 ? 6689824597538437271 : var_7)))))))))));
        arr_40 [i_9] = (max((max((!9355685242909001037), (((arr_39 [13] [i_9]) ? 9091058830800550588 : 7323929228910330131)))), (max(4611686018427387903, 9355685242909001033))));
    }
    #pragma endscop
}
