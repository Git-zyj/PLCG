/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_7 ? (((var_11 ? (106 / var_14) : (max(116, (-2147483647 - 1)))))) : 18446744073709551615));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((min(((209 ? var_1 : 2260563763)), -var_3)) | (min(2034403533, (arr_0 [i_0])))));
        var_20 += (!(arr_0 [i_0]));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_21 = var_10;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                {
                    var_22 = var_7;
                    var_23 = (max(var_23, ((((((~(((arr_4 [i_1]) ? var_13 : var_14))))) ? (min(9223372036854775807, ((min(189, -112))))) : (((44 ? (arr_6 [i_1 - 1]) : (arr_3 [i_1 + 1])))))))));
                    var_24 = (!120);
                    var_25 = ((+(((arr_8 [i_1 + 1] [i_1 - 1]) / (arr_8 [i_1 + 1] [i_1 - 1])))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_26 = (min(var_26, (arr_8 [i_4] [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_27 *= 5709;
                                arr_27 [i_4] [i_4] [i_5] [i_4] [i_6] [i_7] [i_8] = (~72057594037927935);
                                var_28 = var_11;
                            }
                        }
                    }
                    var_29 = var_11;
                    arr_28 [i_4] [i_5] [i_6] &= ((~((min(212, 16)))));
                    arr_29 [i_4] [i_4] [10] [i_4] = ((((8160 ? -1698346691 : 65524)) / ((max(1, var_7)))));
                    var_30 = ((-((6073 ? ((min(127, 1))) : 63999))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    var_31 += (max(1, (~1)));
                    arr_34 [i_4] [i_4] [i_4] = (arr_18 [i_4]);
                }
            }
        }
        arr_35 [i_4] = 1;
        arr_36 [i_4] = -13514;
    }
    var_32 = (((((((max(var_18, 1))) ? (((27 ? 9208167474334393951 : 4983586374233333370))) : ((var_8 ? 1655562181425145243 : 44))))) ? ((max((32759 & var_11), ((var_10 ? 20 : var_3))))) : var_6));
    #pragma endscop
}
