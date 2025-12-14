/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 *= (!var_12);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_20 = (min(var_20, var_5));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_21 = (!-2098821301);
                            var_22 *= (~19906);
                            var_23 = arr_7 [i_0] [i_1] [i_2];
                        }
                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            var_24 = (max((!13915505653058266359), ((min((arr_8 [i_5 - 2] [i_5 + 1]), (arr_8 [i_5 + 3] [i_5 - 2]))))));
                            var_25 += ((var_11 + ((((((-(arr_0 [i_0])))) ? (arr_13 [i_0] [i_1] [i_1] [i_3] [i_5] [i_2]) : (((arr_7 [i_5] [i_1] [i_0]) / 4294967295)))))));
                            var_26 = ((((~(~var_11))) * (((~(arr_14 [i_5 - 2] [i_3] [i_3] [i_3] [i_0]))))));
                            var_27 = var_3;
                            arr_16 [i_5] [i_5 + 1] [i_3] [i_2] [i_1] [i_1] [i_0] |= (+((((!-906920985561759395) || var_4))));
                        }
                    }
                }
            }
            var_28 &= (min(((!(-19905 >= var_10))), (((arr_2 [i_0]) >= var_7))));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_29 |= ((((~(~var_15))) ^ (-19928 ^ -19895)));
            arr_20 [i_0] [i_0] = var_12;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    {
                        var_30 = 4531238420651285256;
                        arr_25 [i_0] [i_6] [i_7] [i_0] [i_8 - 1] [i_8] = (((((~(19927 >= -19928)))) * ((-19923 ? var_18 : var_6))));
                    }
                }
            }
        }
        arr_26 [i_0] = 13;
        arr_27 [i_0] = (!28721);
        var_31 = (min(var_31, (((((min((arr_19 [i_0] [i_0] [i_0]), (arr_19 [i_0] [i_0] [i_0])))) ? ((-(arr_8 [i_0] [i_0]))) : ((var_5 ? (arr_19 [i_0] [18] [i_0]) : (arr_19 [i_0] [i_0] [i_0]))))))));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        arr_36 [i_12] [i_12] [i_12] = ((-1226 ? 15978577019654841263 : 65535));
                        var_32 = (arr_28 [i_11]);
                    }
                }
            }
        }
        var_33 = (-6778860571282945815 ? ((min(var_8, -31))) : ((((min((arr_18 [3] [i_9] [i_9]), 14))) / (min(var_1, 6072484176402087435)))));
    }
    var_34 = 5110085255714469963;
    #pragma endscop
}
