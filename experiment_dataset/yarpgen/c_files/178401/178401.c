/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (55163 > var_18);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_0] = (((~15489148056930015825) ? (~45488) : (~3171129839159933033)));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_12 [i_0] [i_2] [i_2] [i_3] [i_3] = ((var_7 > (~15275614234549618601)));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_15 [i_4] [i_0] [i_2] [i_1] [i_4] = var_10;
                            arr_16 [i_2] [i_1] [i_2] [i_1] [i_2] = 20047;
                        }
                        arr_17 [i_0] [i_0] [0] [i_3] |= ((((var_1 ? 15 : var_10)) / (-2147483647 - 1)));
                        arr_18 [i_2] = var_4;
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_21 [i_2] [i_1] [i_2] [i_5] [i_5] [i_5] = ((31 ? -9223372036854775799 : 57145));
                        var_20 += 246;
                        var_21 = (max(var_21, 2007440875));
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        var_22 = (max(var_22, ((max((((2007440876 ? 430775909 : 54564)), 16515092461191685684))))));
                        var_23 = ((-(((max(var_0, var_13)) ? ((25327 ? var_0 : 147)) : var_8))));
                        var_24 = (((~var_1) == (var_8 / 2007440885)));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_26 [i_0] [i_1] [i_2] = (((((2007440860 ? ((1 ? 4294967273 : 123)) : 95))) ? (-2147483647 - 1) : 126));
                        arr_27 [i_0] [i_2] [i_0] = -var_8;
                        arr_28 [i_2] [i_2] [13] [i_0] [i_2] = (var_8 & 231924843);
                    }

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_32 [i_0] [15] [i_2] [i_2] [i_0] [i_0] = 237;
                        var_25 *= 241;
                    }
                    var_26 ^= var_6;
                    var_27 *= (121978934 <= var_5);
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {
        arr_35 [i_9] = (max(89, 2147483647));
        var_28 = (max(var_28, 5549235820209501450));
    }
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 10;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 9;i_12 += 1)
            {
                {
                    arr_44 [i_10 - 1] [i_10] [i_10] [i_10] |= (((((((max(var_2, var_18))) ? (((arr_6 [i_10] [i_10]) << var_8)) : (((var_5 ? 237 : var_17)))))) ? var_8 : (((-338318285593570151 & 63345) ? 1 : (arr_2 [i_10 + 1])))));
                    arr_45 [i_10 - 1] [i_10 - 1] [i_11] [i_12 - 1] = (arr_31 [i_11] [i_10 - 1] [i_10 - 1] [i_10 - 2] [i_10 + 1]);
                    arr_46 [i_11] [i_12 - 4] = var_4;
                }
            }
        }
    }
    #pragma endscop
}
