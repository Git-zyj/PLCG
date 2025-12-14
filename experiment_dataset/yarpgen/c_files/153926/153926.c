/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_11));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_20 -= (max(((max(68, 0))), (arr_5 [i_1 - 3] [i_1 - 2] [i_1] [i_1 - 2])));
                arr_6 [i_1] [i_1] [i_1] [13] = ((max((((arr_2 [i_1]) ? var_6 : (arr_2 [i_1]))), (max(-1244460444, 14280968356207955282)))));
                arr_7 [i_1] [i_1 + 1] [10] = (max((arr_0 [i_0]), (((arr_5 [i_0] [i_1 - 2] [i_1 - 2] [i_2]) ? 5256458093233205969 : 1006635903))));
            }
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                var_21 = var_4;

                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    arr_12 [i_0] [i_1] [i_0] [15] [i_1] [i_4] = (((((arr_11 [i_1 - 3] [i_1] [i_0] [i_4 - 1] [i_0]) - (arr_9 [6] [i_4 - 3] [i_1] [i_4]))) ^ (min((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_4 : 18446744073709551615)), var_6))));
                    var_22 = (arr_11 [i_0] [i_1] [i_1 + 2] [i_3] [i_0]);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_23 = (min(var_23, (((var_8 ? ((var_4 ? var_12 : (arr_4 [i_0] [i_5] [i_3]))) : (arr_14 [i_3 + 3] [i_1] [i_1 - 3] [7] [i_1 + 1] [i_0]))))));
                    arr_16 [i_0] [i_1] [i_1] [i_5] = var_15;
                    var_24 = ((!(((var_4 ? 16270884102781499234 : -1)))));
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    var_25 = (((((arr_9 [i_0] [i_1] [i_1] [5]) > (arr_14 [1] [i_1] [i_1 + 2] [i_1 + 2] [i_6] [i_6 - 2]))) ? 2147483647 : 65535));
                    var_26 ^= ((var_13 == var_5) ? (arr_2 [6]) : (((arr_1 [i_3] [i_6]) ? 9690417817824176689 : (arr_0 [i_3]))));
                }

                /* vectorizable */
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    var_27 = (max(var_27, (((127 ? var_14 : 24050)))));
                    var_28 = (((((254 >> (((arr_17 [i_7] [i_3] [i_1] [i_1 - 2] [i_0]) - 8557440228305823196))))) ? (arr_4 [i_1 - 1] [i_1] [i_3 - 1]) : (((arr_18 [i_1] [i_1]) ? var_17 : var_3))));
                }
            }
            var_29 ^= (arr_5 [i_1] [2] [i_0] [2]);
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        {
                            var_30 = (!(((min((arr_0 [i_10]), (arr_3 [i_8] [i_0]))))));
                            var_31 = (max(var_31, 19998941));
                            var_32 = (min(var_32, var_2));
                        }
                    }
                }
            }
        }
        arr_31 [i_0] [i_0] = arr_20 [i_0];
    }
    for (int i_11 = 2; i_11 < 21;i_11 += 1)
    {
        var_33 = (min((arr_33 [i_11]), (min(((8690 ? (arr_33 [i_11 - 1]) : (arr_32 [i_11] [i_11]))), (arr_32 [i_11 - 1] [i_11 - 1])))));
        var_34 ^= 125;
        var_35 = ((((min(var_15, (arr_33 [i_11 - 2])))) != -13));
    }
    #pragma endscop
}
