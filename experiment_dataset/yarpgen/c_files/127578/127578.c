/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((!1) ? (!var_10) : 11)) > (~205)));
    var_16 -= (((~var_5) ? var_5 : (!var_4)));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_17 += (max((max((arr_2 [i_0 - 2]), (max(var_5, -2147483642)))), (arr_1 [i_0 + 1])));
        var_18 = ((((((max(var_13, var_11))) ? (arr_1 [i_0 + 1]) : 233)) / var_7));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_19 = -1053641166;
        var_20 = (max(var_20, (((~11) | ((46974 | (~29839)))))));

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_21 = (!var_13);
                            var_22 = (((1970922839 || (arr_8 [i_1] [i_1 + 1] [i_4]))));
                        }
                    }
                }
            }
            var_23 = ((0 ? (((!(~18580)))) : (((!(var_0 - var_1))))));
        }
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            var_24 |= ((-(arr_12 [i_1 + 1] [i_6] [1] [i_6 + 2])));
            var_25 &= -1295401945672766218;
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 7;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_26 -= ((((-(max(32, (arr_32 [i_7] [i_8] [i_8 - 3] [i_8 - 3] [i_10]))))) * (((3 ? 18547 : -3)))));

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_27 = 18575;
                            var_28 = (var_1 + var_10);
                        }
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            var_29 = 0;
                            var_30 = (max(var_30, ((min((-32767 - 1), 56145)))));
                            var_31 = ((-((53134574 & (~1970922856)))));
                        }
                    }
                    for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
                    {

                        for (int i_14 = 4; i_14 < 6;i_14 += 1) /* same iter space */
                        {
                            var_32 *= 2;
                            var_33 = ((46955 >> (9223372036854775788 - 9223372036854775774)));
                            var_34 &= var_9;
                        }
                        for (int i_15 = 4; i_15 < 6;i_15 += 1) /* same iter space */
                        {
                            var_35 = (max((min(var_8, (min(46977, 238)))), (!var_5)));
                            var_36 = var_14;
                        }
                        /* vectorizable */
                        for (int i_16 = 1; i_16 < 6;i_16 += 1)
                        {
                            var_37 = -var_10;
                            var_38 = ((-1295401945672766214 <= (arr_32 [i_7] [i_8] [i_9] [i_13] [i_8])));
                        }
                        var_39 = ((((!(!-823970627))) ? (-var_5 / -2147483629) : ((max(27953, -1888520088)))));
                        var_40 = (((((arr_32 [i_8 + 3] [i_8] [i_8 + 2] [i_8 - 2] [i_8]) ? 126 : var_5)) / ((((arr_32 [i_8 + 2] [i_8 + 2] [7] [i_8 + 1] [i_8]) - 5)))));
                        var_41 = (max(var_41, (min(-51, (min(var_3, (((var_8 ? (arr_41 [i_9] [i_9] [i_9]) : var_12)))))))));
                    }
                    for (int i_17 = 0; i_17 < 10;i_17 += 1) /* same iter space */
                    {
                        var_42 = ((-((18567 ? var_1 : 13890))));
                        var_43 = ((-0 / ((8226171444918462192 + (-9223372036854775807 - 1)))));

                        for (int i_18 = 2; i_18 < 8;i_18 += 1)
                        {
                            var_44 |= (max((arr_2 [i_8]), (((255 | 413670781) & (arr_27 [i_18 + 2] [i_7] [i_8 - 2])))));
                            var_45 = (!((max((~-413670781), 255))));
                        }
                    }
                    var_46 += (((((!(arr_36 [i_8 - 2])))) + 1551084725));
                }
            }
        }
    }
    #pragma endscop
}
