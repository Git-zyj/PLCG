/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (max(var_1, var_14));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_18 = (arr_1 [17]);
        var_19 = (((var_1 && var_8) ? (((var_9 ? var_7 : var_8))) : 4053707190547824451));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_20 += ((((var_11 ? var_12 : var_11)) <= (~var_15)));
        var_21 = var_5;
        var_22 = ((2097151 ? -15985 : 65523));
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_23 = var_15;
                                var_24 = ((((((arr_11 [i_2] [i_2 - 1] [i_4 + 1] [i_5]) * ((((var_6 <= (arr_16 [i_3] [21] [1])))))))) ? var_6 : (((((arr_16 [4] [16] [i_4]) ? var_16 : var_9)) + (arr_11 [14] [18] [i_2 + 1] [i_2 - 3])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_25 += (arr_11 [2] [3] [i_4] [i_8]);
                                var_26 += (min((((65523 >> (-122 + 129)))), (min(-113, -2097151))));
                                var_27 = (arr_23 [6] [4] [i_4] [i_7] [i_8] [7] [3]);
                                var_28 = var_4;
                                arr_25 [i_2] [i_2] [i_3] [i_3] [i_4] [21] [i_8] = ((max(84, 4294967292)));
                            }
                        }
                    }
                    arr_26 [20] [14] [i_4] &= var_5;
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_29 = (!var_15);
                                var_30 = (max(var_30, (((((((var_5 - var_9) ? (arr_29 [i_10] [i_4 - 2] [i_4 - 3] [4] [22]) : (arr_18 [i_9])))) ? ((min((arr_5 [i_2 + 1]), (max(var_12, var_16))))) : ((var_6 % (arr_29 [i_9] [22] [i_9 + 1] [i_9 - 1] [6]))))))));
                                arr_31 [6] [i_3] [i_3] [2] [15] = (~var_14);
                            }
                        }
                    }
                    arr_32 [i_3] [i_3] [20] [i_3] = ((((((-9223372036854775807 - 1) ^ 2475541701))) ? (arr_20 [i_3]) : ((~(arr_28 [i_2 - 1] [i_3] [i_4] [i_4] [i_4 - 3])))));
                }
            }
        }
        var_31 += var_7;
        var_32 = (min(var_32, ((min((((arr_6 [i_2]) % (arr_6 [i_2 - 1]))), -104)))));
        arr_33 [i_2 - 2] = ((3 ? 1 : 1));
        arr_34 [i_2 + 1] [18] = var_10;
    }
    var_33 = (min((var_3 + var_13), ((min(-13968, 19643)))));
    #pragma endscop
}
