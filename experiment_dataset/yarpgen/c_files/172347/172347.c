/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [7] [i_1] [i_0] = (arr_4 [i_0] [i_1] [17]);
                        var_20 = (((arr_7 [i_3] [8] [i_0] [i_0]) < ((14118182176826803515 - (((54566 ? (arr_2 [i_0]) : var_6)))))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            var_21 = (arr_7 [1] [14] [i_0] [1]);
                            var_22 = (min(var_22, (arr_14 [i_0] [i_1] [i_3] [i_4 + 1])));
                            var_23 = (arr_6 [i_4 - 1] [i_1 - 3]);
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_19 [i_0] [13] [i_2] [i_2] [i_3] [i_5] = (arr_0 [i_1 + 2]);
                            var_24 &= (min(((~(arr_7 [i_1 + 2] [i_2] [i_2] [i_2]))), -101));
                        }
                        for (int i_6 = 4; i_6 < 17;i_6 += 1)
                        {
                            var_25 = (max(var_25, ((((((!(arr_22 [6] [i_3] [i_3] [6] [i_6 + 2] [i_3] [i_6])))) | (((((100 ? (arr_11 [i_0] [i_0] [1] [i_0] [i_0] [i_0]) : (arr_20 [i_0] [i_1] [17] [10] [i_1])))) ? (arr_11 [i_6] [i_6 + 1] [i_6] [i_6 - 4] [i_6] [i_6 - 3]) : (var_7 << 0))))))));
                            arr_24 [i_0] [0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_11 [i_6] [6] [i_2] [6] [6] [i_0]);
                            var_26 -= ((((((((arr_5 [i_0] [i_1]) ^ (arr_5 [i_1 - 1] [i_6 - 3])))) | (arr_0 [i_0]))) << ((((-(((arr_15 [i_0]) ? (arr_21 [i_2] [i_1] [i_3] [i_2] [i_1] [i_1] [i_0]) : -1948059674)))) + 70))));
                        }
                    }
                }
            }
        }
        var_27 = ((((var_19 && 145272318180144579) && ((var_18 || (arr_6 [i_0] [i_0]))))));
        arr_25 [3] = ((((((((var_0 ? 8191 : (arr_1 [i_0] [17])))) ? (!145272318180144579) : (arr_7 [i_0] [1] [i_0] [i_0])))) ? (min((arr_0 [i_0]), (var_5 + var_18))) : (((max(-1, (arr_3 [i_0])))))));
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            {
                arr_31 [i_7] [i_8] [i_7] = ((var_15 ? ((1 ? 98 : (arr_2 [i_7 + 1]))) : (((arr_20 [i_7] [i_7 + 2] [i_7 + 2] [i_8] [i_8]) ? (arr_30 [i_7] [i_8 - 1]) : (min((arr_9 [i_7 + 1]), 3))))));
                var_28 = var_18;
                arr_32 [8] [i_7] = 113;
                var_29 = ((10975 ? ((8220 ? (arr_21 [i_7 + 1] [17] [i_7 + 1] [i_8] [i_8 - 1] [17] [i_8]) : 1)) : 1));
                var_30 = ((((((((arr_17 [i_7 + 2] [i_7] [1] [1] [i_8] [i_8] [i_8]) ? (arr_12 [i_8] [13] [i_7 + 2] [i_7]) : (arr_11 [i_7] [i_7] [15] [i_8] [i_8] [i_7]))) - var_6))) ? (((((var_2 <= (arr_21 [i_7] [i_7] [i_7] [i_7 + 2] [i_7] [i_8 - 1] [i_7])))) >> (((arr_20 [i_7] [i_7 + 1] [i_8] [i_8 - 1] [1]) + 76)))) : (-127 - 1)));
            }
        }
    }
    var_31 = ((((((((1 ? -1 : 26133)) | ((max(var_17, var_18))))) + 2147483647)) << (((var_9 + 77) - 27))));
    #pragma endscop
}
