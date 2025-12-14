/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (((979449585 ? var_6 : (min(-5290308214789958103, 1780071825)))));
    var_13 = (min(var_10, (min(var_5, var_4))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = 41007;
        arr_2 [i_0] = (min((arr_0 [0]), ((5266272361789018733 != (arr_0 [i_0])))));
        var_15 = (min(var_15, (arr_0 [i_0])));
        var_16 = (min(var_16, -15));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
                    {
                        var_17 = arr_7 [i_4 + 1] [i_3] [i_1];
                        var_18 = (~var_3);
                        arr_12 [i_1] [i_1] [i_2] [i_3] [i_4] = (arr_9 [i_4 + 1] [i_2] [i_4 + 1]);
                        var_19 = ((((arr_0 [i_1]) ? var_8 : var_9)));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, (arr_9 [i_1] [i_2] [i_3])));
                        var_21 = ((var_10 ? var_10 : (arr_11 [i_1] [i_2] [i_2] [i_5] [i_5 + 1])));

                        for (int i_6 = 3; i_6 < 8;i_6 += 1)
                        {
                            arr_17 [i_1] [i_1] [i_1] [i_6] [i_1] [i_1] = 24529;
                            arr_18 [i_1] [i_1] [i_1] [i_6] [i_1] [i_1] [3] = ((-(arr_3 [i_1])));
                        }
                    }
                    for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
                    {
                        var_22 &= (((((var_5 ? (arr_1 [i_1] [i_2]) : var_6)) != 0)));
                        var_23 = 41007;
                    }
                    for (int i_8 = 1; i_8 < 9;i_8 += 1) /* same iter space */
                    {
                        var_24 = (max((-9223372036854775807 - 1), (arr_10 [i_1] [9] [3] [i_8] [5] [i_8 - 1])));
                        var_25 = (max(var_25, ((((((arr_21 [1] [i_8 - 1] [1] [i_8] [i_8 + 1]) ? (-9223372036854775807 - 1) : (arr_21 [1] [i_8 - 1] [i_3] [i_8] [i_2]))) / (arr_21 [i_1] [i_8 - 1] [i_8 - 1] [i_8] [6]))))));
                        var_26 -= (min((arr_6 [i_2] [i_2]), var_7));
                        var_27 = (((arr_16 [i_2] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1]) ? (arr_16 [i_1] [i_8 - 1] [2] [0] [0]) : ((((!(arr_16 [i_2] [i_8 - 1] [i_8 - 1] [5] [i_8])))))));
                        var_28 = (min((!-7), (((arr_13 [i_1] [i_2] [0] [i_8] [i_8 - 1]) ? (arr_13 [i_1] [i_2] [i_3] [i_1] [i_8 - 1]) : 6913168346703440147))));
                    }
                    arr_25 [i_1] [i_2] [i_1] = ((!(arr_1 [i_1] [i_2])));
                    var_29 = 3475428151587082334;
                }
            }
        }
    }
    #pragma endscop
}
