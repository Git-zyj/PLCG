/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_7 [i_2] [i_1] [i_2] = (min((arr_1 [i_2] [i_0]), (arr_1 [i_0] [i_0])));
                    var_14 = (min(var_14, ((min((((var_11 ? var_11 : -2030633534))), ((((arr_6 [i_1] [i_0] [i_1 - 3]) ? (arr_6 [i_1] [6] [i_1 - 1]) : (arr_6 [i_1] [i_0] [i_1 + 2])))))))));
                    var_15 = (min(var_15, ((((!(((0 ? 119 : var_6))))) ? (min((var_2 - var_2), var_10)) : ((108 ? (min(var_12, var_11)) : (1 | -425044894)))))));
                }
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_16 = ((-(120 * 31217)));
                        arr_13 [i_1] [i_3 + 2] [i_1] [i_0] = (min((min(3870780551235809772, 153)), (((((min(-766979638, -772122498117309828))) ? (((arr_3 [i_4]) ^ 1)) : ((max((arr_2 [i_0]), 107))))))));

                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 17;i_5 += 1)
                        {
                            arr_16 [i_5] [i_4] [i_3 - 1] [i_1] [i_0] [i_0] &= (arr_4 [1] [i_1] [i_1] [i_5]);
                            var_17 = (min(var_17, (((-(((arr_12 [i_0] [i_0] [i_0] [i_0]) ? (arr_15 [i_0] [i_0] [i_3 + 2] [i_3] [i_0] [i_5 - 1]) : 1)))))));
                            arr_17 [i_1] [i_3] = arr_14 [i_1] [8] [i_3 + 1];
                            var_18 *= var_5;
                        }
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            var_19 += (arr_9 [i_0] [i_0]);
                            arr_20 [i_6 + 2] [i_4] [i_3] [i_1] [i_0] = (((min(131068, (arr_15 [i_1] [i_1 + 1] [i_1] [i_1 + 2] [i_1] [i_1]))) / (((((arr_6 [i_3] [i_4] [i_4]) <= (~var_2)))))));
                            var_20 = (((((-(((var_4 && (arr_11 [i_6] [i_4] [i_0] [i_1] [i_0]))))))) <= ((-(max(-4624379762863305012, var_13))))));
                            var_21 = -1570775419;
                        }
                    }
                    var_22 = (min(var_22, 25));
                }
                var_23 = 8249745231589910364;
                arr_21 [i_0] [i_1] = (((255 && 6553) ? (arr_6 [i_1] [i_1] [4]) : ((((min((arr_3 [i_0]), var_1))) ? (((min(var_8, (arr_11 [i_0] [i_0] [i_1] [i_1] [1]))))) : (arr_12 [i_0] [i_0] [i_1] [i_1])))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_24 = (max(var_24, (((((var_0 > ((~(arr_2 [i_0]))))) ? (arr_14 [i_1] [i_7] [i_1]) : var_4)))));
                            arr_28 [i_8] [i_7] [i_1 - 2] [i_0] = (min((arr_12 [i_8] [11] [i_0] [i_0]), (((((-16 && (-127 - 1))) ? (((arr_3 [i_1 - 4]) ? (arr_23 [i_0] [i_1] [i_7] [i_7]) : 11)) : 32)))));
                            arr_29 [i_0] [i_0] [4] [i_0] [15] [i_0] = (max((((arr_22 [i_1] [i_1] [i_1 - 1]) ? (arr_27 [i_0] [18] [i_1 + 1] [i_8 - 1]) : 32)), ((var_0 ? (arr_27 [i_1] [i_1] [i_1 - 4] [i_7]) : 1))));
                            var_25 = (max(var_25, (((-((-1396419796 ? ((-1806606617664491464 ? 9 : 81)) : 4)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 19;i_10 += 1)
                    {
                        {
                            arr_36 [i_0] [i_0] [i_9] [i_9] = ((min((!0), -1041819160)));
                            var_26 = (min(var_26, (((((min(((((arr_24 [i_1]) ? 82 : var_5))), (min(8050559555285974731, -71))))) && (((var_8 ? ((min((arr_8 [i_0] [i_1 - 3] [17] [i_10]), 19333))) : (1 % 28)))))))));
                        }
                    }
                }
            }
        }
    }
    var_27 = (((((((-15816 ? var_13 : var_13))) ? -255 : 5312382056306783393)) > -19333));
    #pragma endscop
}
