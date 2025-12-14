/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = ((((((var_16 % 1024) ? (arr_11 [i_0] [i_1] [3] [1] [18] [i_4]) : (max(var_7, var_1))))) ? 1896886685 : (((!((min(149, var_3))))))));
                                var_20 = 9023;
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4 - 1] [1] = -130553065;
                                var_21 *= (var_11 ? 2390890308071387451 : (arr_6 [i_0 + 1]));
                            }
                        }
                    }
                    var_22 = (2207646459528334745 | 130553061);
                }
            }
        }
        var_23 = (min(var_23, ((((((~(arr_1 [i_0] [i_0])))) ? var_3 : ((((130553063 ? 16055853765638164156 : var_1)))))))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    var_24 = ((!((((16055853765638164156 ? 1 : 18446744073709551602))))));

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        arr_27 [i_5] [i_6] [i_7] [i_8] = (((arr_2 [21]) ? ((32420 ? (max(1, -1564635435)) : 3307)) : 1));
                        var_25 = (max(var_25, (((((min(9446365969060894391, 2390890308071387455))) ? var_12 : var_15)))));
                    }
                }
            }
        }
        arr_28 [i_5] = -var_14;
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_26 = ((((((arr_5 [i_9] [i_9] [i_9]) ? (arr_5 [i_9] [i_9] [i_9]) : (arr_5 [i_9] [i_9] [i_9])))) | (((arr_7 [i_9] [i_9] [i_9] [i_9]) | var_8))));
        arr_32 [i_9] = ((~((var_5 - (min(var_2, var_16))))));
        var_27 *= ((((min((var_1 != var_6), 16055853765638164163))) ? (arr_4 [i_9] [i_9] [i_9]) : ((-(min((arr_1 [i_9] [1]), 12795642843623288799))))));
    }
    var_28 = (((((var_16 ? var_1 : ((min(var_2, var_2)))))) || ((((12400 >= 130553081) ? ((max(var_1, var_3))) : var_10)))));
    var_29 = var_9;
    var_30 = (+-18446744073709551602);
    #pragma endscop
}
