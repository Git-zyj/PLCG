/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [3] [i_0] = ((~(max((arr_1 [i_0]), (max(65535, 1984611928217158388))))));
        arr_3 [i_0] [i_0] = -20242;
        arr_4 [i_0] = (((((((var_2 <= var_7) ? var_8 : (arr_0 [i_0 - 2]))) + 2147483647)) >> ((((arr_1 [i_0 + 1]) > (-18916 || 0))))));
        arr_5 [i_0] [1] = (!(((arr_0 [i_0 - 2]) > (arr_0 [i_0 - 1]))));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_11 = (min(var_11, (((!((min((29275 >= -10044), ((243 >> (-7801 + 7817)))))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_20 [3] [3] [i_3] [2] [i_4] [i_1] = max(((((arr_13 [i_2] [i_3 - 2] [i_1] [2]) ? (arr_17 [i_1] [i_2] [i_1] [i_4] [i_5]) : (arr_17 [i_1] [i_2] [i_2] [i_4] [i_4])))), (min(var_2, 2108573459)));
                                var_12 *= (((2852276377 | var_3) << (((((arr_8 [i_3]) ? (arr_9 [i_5] [i_5 + 1]) : 251)) - 44129))));
                                arr_21 [i_1] [2] [2] [2] [i_1] = ((-1 + (arr_1 [i_1])));
                                arr_22 [i_3] [6] [1] [2] [i_2] [i_2] [i_3] |= (arr_14 [i_3] [i_3] [i_3] [i_3 + 1] [i_3]);
                                arr_23 [i_1] = ((-((8044 - (arr_12 [i_1] [i_3 + 3] [i_1])))));
                            }
                        }
                    }
                    arr_24 [i_3] [i_1] [i_2] [i_3] |= -48;
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_29 [i_6] = ((~(min((arr_27 [i_6]), var_4))));
        arr_30 [1] [i_6] = (~5568736671224314760);
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                arr_36 [i_8] [i_8] = (((max(((((arr_25 [i_8]) ? (arr_27 [i_7]) : 340))), (~8983318522231371840))) > (arr_31 [i_7])));
                var_13 = ((3810795728 * ((((!4095) ? (arr_33 [i_7]) : -10044)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    arr_46 [i_9] [i_10] [i_10] [i_10] = ((((min((arr_39 [i_9 - 1]), (var_6 < 1108065859627806430)))) ? ((-(0 || 13894280760925400911))) : ((var_9 ? 3615409056 : (((-748235468 < (arr_38 [i_9] [i_10]))))))));
                    arr_47 [i_11] = max(((319 / ((var_1 ? 65535 : var_1)))), (var_7 % -1153237955));
                }
            }
        }
    }
    #pragma endscop
}
