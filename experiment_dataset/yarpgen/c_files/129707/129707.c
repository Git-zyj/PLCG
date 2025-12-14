/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~(min((~var_9), (var_6 < var_10))));
    var_19 = (max((((127 * var_14) * (-106 / var_11))), -var_8));
    var_20 = (max(((var_6 % ((max(var_0, var_5))))), (min((!var_6), (127 | 252)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 = ((((!(var_13 && var_14))) && ((min((max(-1, 127)), ((((arr_11 [i_0] [i_1] [i_1] [i_1]) && (arr_5 [i_1] [i_2] [i_1] [i_1])))))))));
                                arr_13 [i_4 - 1] [i_4] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_1] [i_0] &= (max((((!(((-16135 * (arr_10 [i_0] [i_1] [i_2 - 1] [4] [i_4]))))))), (var_11 / 503695997)));
                                var_22 = (max(((~((var_15 << (((-106 + 131) - 8)))))), ((~((~(arr_9 [i_0] [i_1] [i_1] [0] [6])))))));
                            }
                        }
                    }
                }
                var_23 = ((((((max(var_7, var_4)) ^ (var_0 ^ var_11)))) && ((((max(119, var_14)))))));
                arr_14 [i_0 - 1] [i_1] = ((((~(((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) | var_1)))) ^ ((((~32767) ^ (~-5538))))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_24 |= (~10);
        var_25 = (min(var_25, ((min((((min(-110, 1882948082)) * (32743 >= var_16))), (!-var_17))))));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_26 = ((!((((~-5538) * (!-1882948082))))));
        var_27 = (max(var_27, (((((+(((arr_18 [i_6]) ^ (arr_15 [i_6] [i_6]))))) >= (((~(min((arr_18 [i_6]), -13823))))))))));
        var_28 |= ((+(((var_13 == 5538) - (arr_15 [i_6] [i_6])))));
        var_29 = (((-(var_14 < 63))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            arr_27 [15] [i_8] [i_8 - 1] = (((72 * (arr_17 [i_7]))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    {
                        var_30 = (min(var_30, ((((!18446744073709551615) * 0)))));
                        arr_34 [i_7] [i_8] [i_9] [i_8] = (((var_7 & -16113) * (((-16149 || (arr_33 [i_8] [i_9] [i_8 + 1] [i_8 + 1] [i_8]))))));
                        var_31 = ((!(!var_4)));
                    }
                }
            }

            for (int i_11 = 1; i_11 < 17;i_11 += 1)
            {
                var_32 = ((((65531 < (arr_17 [i_8])))));
                var_33 ^= ((~((~(arr_20 [i_11])))));
            }
        }
        for (int i_12 = 1; i_12 < 17;i_12 += 1)
        {
            var_34 = (((var_4 / -32767) || (~-511808335)));
            var_35 = ((((~(arr_18 [i_7]))) * ((((arr_23 [i_7]) != (arr_17 [13]))))));
        }
        var_36 = ((((86 >> (var_1 - 13964312320240308560))) >> (!106)));
    }
    #pragma endscop
}
