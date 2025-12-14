/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((!(((~(arr_0 [i_2 + 1]))))))));
                    arr_8 [i_1] [i_2] = ((((-45 ? 32767 : 32767)) > (((((arr_6 [i_0] [i_1] [i_1] [i_2]) << (((arr_0 [i_1]) + 1171977990)))) ^ (arr_2 [i_0])))));
                    var_17 = (((~5337735333979065895) ? var_13 : (((max(18595, var_12))))));
                }
            }
        }
        arr_9 [i_0] = (min((((!((max(var_2, 32750)))))), (arr_5 [i_0] [i_0])));
        arr_10 [i_0] = (!19146);
        var_18 -= (arr_4 [i_0]);
    }
    for (int i_3 = 4; i_3 < 12;i_3 += 1)
    {
        var_19 -= (((max(13109008739730485713, -24400)) == (arr_1 [i_3 - 1] [i_3 + 1])));

        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_19 [i_5] = -1729325267;

                        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_3] [i_4 + 1] [i_5 - 2] [i_3] [i_5] [i_5] [i_7] = (min(((-112 ? (((!(arr_6 [i_3 + 1] [i_3] [i_3] [i_3])))) : (((-32767 - 1) ? 32741 : -19826)))), ((min((arr_13 [i_5 - 2] [i_3 - 1]), (arr_16 [i_3] [i_3 - 1] [i_5]))))));
                            arr_23 [i_6] [i_6] [i_5] [i_6] [i_6] = var_14;
                            arr_24 [i_7] [i_5] [i_5] [i_5] [i_3] = ((max(1, (arr_16 [i_3] [i_3] [i_3]))));
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            var_20 = (min(((-1 - (min((arr_12 [i_3]), (arr_26 [i_4] [10]))))), (1849327837 > -163333292)));
                            var_21 = var_7;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                        {
                            var_22 = var_4;
                            arr_31 [0] [i_4] [i_4] [i_5] [i_5] = (((arr_20 [i_5 - 2] [i_5] [i_4 + 1] [i_4]) - (arr_20 [i_5 - 2] [4] [i_4 + 1] [i_3])));
                        }
                    }
                }
            }
            var_23 -= (min(13109008739730485723, -28010));
            arr_32 [i_3] [i_3] [i_4] = ((max(2147483647, ((3 ? -11 : 1229629606)))));
            var_24 -= ((((min((max(13639, var_11)), (arr_11 [i_3])))) ? (min(((min(32767, 127))), 9007199254740991)) : ((((((((arr_2 [i_3]) ? 2468 : 0))) && (((~(arr_14 [i_4] [i_3] [i_3]))))))))));
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                var_25 -= (((arr_29 [i_11] [i_10]) == 18446744073709551606));
                var_26 -= (((min(((var_13 ? var_2 : (arr_1 [i_3] [i_10]))), (arr_1 [i_3] [i_3]))) ^ (arr_20 [i_3] [i_10] [i_10] [i_3])));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        {
                            var_27 -= (min(((~(arr_29 [i_3] [i_10]))), (((!(arr_29 [i_3 + 1] [i_3 - 1]))))));
                            var_28 = (((min(30323, (arr_39 [i_13] [i_10] [i_11] [i_12] [i_13] [i_13])))));
                            var_29 = 3567;
                            var_30 = 0;
                            var_31 = (min((min((((2240 ? (arr_41 [i_3] [8] [8] [i_3] [i_3]) : 1352320363))), (max(var_6, var_9)))), ((((max(var_9, var_1))) ? ((min(1352320341, (arr_30 [i_11] [i_10] [i_10] [i_10])))) : (min((arr_4 [i_12]), (arr_28 [i_11])))))));
                        }
                    }
                }
            }
            var_32 += (min((min(1158936631, 122)), (max(((var_10 ? var_14 : var_0)), ((var_1 ? (arr_12 [i_3]) : var_4))))));
        }
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            var_33 -= ((((min((!var_13), var_11))) ? ((~((min(-7787, var_12))))) : var_4));
            var_34 = ((var_13 <= ((max(-14, 28501)))));
            var_35 += (((arr_34 [i_3 - 2]) ? (((((1 * (arr_39 [i_3] [12] [i_3] [i_3] [i_14] [11]))) / var_5))) : (min(1352320341, -35184372088831))));
            var_36 = var_14;
            var_37 = ((((!(arr_26 [i_3 - 3] [i_14]))) || ((min((arr_26 [i_3] [i_14]), var_5)))));
        }
    }
    var_38 = -13728;
    #pragma endscop
}
