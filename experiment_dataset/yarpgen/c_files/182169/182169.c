/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (((var_1 + 2147483647) << ((((var_19 ? 1 : var_15)) - 1))));
                    var_21 = (((arr_7 [i_1] [i_1] [i_1] [i_2 + 2]) ? (~41440) : var_5));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_22 = (max(var_22, (arr_1 [i_3])));
                        arr_12 [i_0] [i_0] [i_0] [i_3] = arr_11 [i_0] [i_1] [i_2 + 2] [i_3] [i_0] [i_0];
                        var_23 = (var_10 ? (((arr_3 [i_0] [i_2]) ? var_19 : var_4)) : (var_7 - var_16));
                        var_24 = (-1 == var_16);
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (((arr_9 [i_1] [i_2 + 2] [i_1] [i_4]) >= (((14379705616945181381 <= (arr_7 [i_0] [i_1] [i_1] [i_4]))))));
                        var_25 = (~93);
                    }
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        arr_19 [i_0] [i_2] = 46;
                        var_26 = 4403074020659214827;
                    }
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_27 = ((arr_20 [i_0] [i_0] [i_2] [i_0] [i_0]) % (((-379967652317349510 + 9223372036854775807) << (6941448374433917376 - 6941448374433917376))));
                            var_28 = (min(var_28, (((~(~255))))));
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                        {
                            var_29 = ((~(arr_6 [i_2 + 2])));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_8] = (32767 * -19);
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                        {
                            var_30 = ((3851354664360998283 ? (var_0 & -652149362811297966) : 4041719164232909292));
                            arr_29 [i_0] [i_6] [i_9] = 128;
                            var_31 = ((-(arr_27 [i_9] [i_6 - 1] [i_2 - 2] [i_2 - 2])));
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_32 = (arr_28 [i_0] [i_1]);
                            var_33 = var_9;
                            var_34 = 9223372036854775807;
                        }
                        var_35 = (18 >= 41442);
                        arr_32 [i_0] [i_0] [i_1] [i_0] [i_0] = (((~2577070643) * (((var_14 % (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    }
                }
            }
        }
        var_36 *= var_9;
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_37 *= -23;
        arr_36 [i_11] = (((((((var_16 ? 254 : (arr_33 [i_11])))) && (!var_0))) || ((((min(96, 254))) && (arr_34 [i_11])))));
        /* LoopNest 3 */
        for (int i_12 = 3; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    {
                        arr_46 [i_14] [i_12] [i_12] [i_14] [i_12] = ((((53 << (-32767 + 32785))) - 65535));
                        arr_47 [i_12] = var_16;
                        var_38 ^= var_18;
                    }
                }
            }
        }
    }
    #pragma endscop
}
