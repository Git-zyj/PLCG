/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_11 *= (max((max(((((arr_0 [i_0] [6]) <= (arr_0 [i_0] [6])))), (arr_0 [i_0 + 4] [14]))), (max((arr_0 [16] [16]), var_8))));
        var_12 -= (((~var_9) ? (min((arr_1 [i_0 + 4] [i_0]), (arr_1 [i_0 + 4] [i_0 + 4]))) : -34683));
        var_13 *= min((arr_0 [i_0 - 4] [18]), (arr_1 [i_0] [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_14 = (arr_2 [i_1] [i_1 + 2]);
        var_15 &= (((((var_4 ? var_3 : var_3))) - (((arr_0 [i_1] [2]) + var_8))));
    }
    for (int i_2 = 4; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_16 -= var_6;
        var_17 = 59721;
    }
    for (int i_3 = 4; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_18 = (((~(max(var_0, (arr_4 [i_3 - 4]))))) & ((min((~1245975417), ((max(var_8, (arr_7 [i_3] [i_3]))))))));
        var_19 = (((~13135261017885254110) || ((((max(33138, 56222))) || 43397))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_20 ^= ((-12319577793913990379 / (arr_13 [i_4] [i_4] [i_4])));

                        for (int i_7 = 3; i_7 < 19;i_7 += 1)
                        {
                            var_21 = (arr_18 [i_7 - 2] [i_3 + 4] [i_7] [i_3 + 4] [i_7] [i_4] [i_3 + 4]);
                            arr_20 [i_3] [i_3] [i_7] [i_3 - 4] [i_3 - 2] [i_3] = ((arr_19 [i_7 - 2] [i_3]) / (min((arr_18 [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_7] [i_7] [i_4 + 1]), ((-(arr_15 [i_3 + 1] [i_3 + 1] [i_5] [i_6]))))));
                            var_22 ^= (arr_4 [i_7]);
                            var_23 -= var_0;
                            var_24 = (min(var_24, (((((max((((arr_2 [i_3 - 3] [i_3 - 3]) ? (arr_5 [i_3]) : 5232647742507968451)), (((1253855144 ? (arr_14 [i_6] [i_6] [i_6]) : (arr_12 [i_4] [i_6] [i_7]))))))) ? (((65535 & 6447) ^ var_10)) : (((arr_7 [i_7] [i_3 + 4]) | -1245975417)))))));
                        }
                        for (int i_8 = 2; i_8 < 19;i_8 += 1)
                        {
                            var_25 = max((((arr_2 [i_5] [i_4]) - (arr_1 [i_6] [i_6]))), (arr_3 [i_5] [i_3]));
                            var_26 = (arr_11 [i_3 - 1] [i_3 - 1] [i_4 + 1]);
                        }
                    }
                }
            }
        }
        var_27 = ((3689 & (max(4025, 3274328639))));
        var_28 |= (arr_4 [i_3 - 4]);
    }
    var_29 &= (max((min((var_8 - var_6), var_7)), ((var_10 | (~var_6)))));
    var_30 |= -var_0;
    #pragma endscop
}
