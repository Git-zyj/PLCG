/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_10 = ((max(1, ((1 ? 1 : 0)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_11 = ((-(var_6 != -78)));
            arr_6 [i_0] [i_0] [16] = (~var_9);
        }

        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_12 = -27482;
            var_13 &= ((1 ? 1 : -11928));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    {
                        var_14 = (((arr_16 [i_4] [15] [i_4 + 2] [i_5 - 2] [i_5 - 1]) ? (arr_15 [i_4 + 2] [i_4 - 1] [i_4] [i_5 + 1]) : 1));
                        var_15 = ((!(arr_1 [i_5 + 1])));
                        var_16 = (arr_0 [i_5]);
                        var_17 = 14;
                        var_18 = ((1 ? 15979 : 12038));
                    }
                }
            }
            arr_18 [i_0] [i_3] = var_0;
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_19 = (!4080);
                            var_20 *= (((arr_14 [4] [i_7 + 3] [1] [i_7 - 2]) ? (arr_14 [i_3] [i_7 - 2] [i_7] [i_7 - 2]) : 39728));
                            var_21 = (((arr_21 [i_7] [i_7 - 2] [i_7 - 1] [i_7]) ? ((-(arr_4 [i_3] [i_3] [i_6]))) : (((32713 ? -1 : (-32767 - 1))))));
                        }
                    }
                }
            }
            arr_26 [18] [i_0] = 176;
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
        {
            arr_30 [i_9] = (((~-2181) ? (!0) : ((~(arr_22 [i_9] [i_9] [16] [12])))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_22 = ((((1 ? (((28171 <= (-32767 - 1)))) : (arr_7 [i_12 + 1]))) <= (arr_24 [i_9] [i_9])));
                            var_23 ^= (min(-15854, (-9223372036854775807 - 1)));
                        }
                    }
                }
            }
            var_24 = ((-((((30959 ? var_7 : (arr_17 [i_0] [10] [5] [i_9])))))));
            arr_38 [i_9] [i_9] = ((((((max(var_2, (arr_23 [i_0] [i_9] [i_0])))) ? (arr_20 [i_0] [16] [3]) : 0))) ? var_8 : -963893890611683600);
        }
        var_25 = 224;
    }
    var_26 = var_9;
    var_27 += -var_5;
    var_28 |= ((min(var_1, var_4)));
    var_29 += var_4;
    #pragma endscop
}
