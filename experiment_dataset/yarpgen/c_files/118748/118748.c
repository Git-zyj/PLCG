/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = (((max(((64 ? var_0 : var_11)), (var_10 < 3821459992))) < var_6));
    var_18 += var_1;
    var_19 = var_0;

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = 1;
        arr_4 [i_0] = ((!(arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((((((arr_0 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_1])))) ? ((-(arr_0 [i_1] [i_1]))) : -536870912));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [17] [i_1] = 473507304;

                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        var_20 &= (((max(((((arr_12 [i_4] [i_3] [i_2]) < var_8))), ((1 ? -1 : var_12)))) & var_11));
                        var_21 -= (arr_12 [i_3 + 1] [i_2] [i_1]);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_18 [i_1] [i_2] [i_3] [i_5] [i_5] = ((~(max((arr_11 [i_3 - 1]), var_3))));
                        arr_19 [i_1] = ((~(~var_9)));
                        arr_20 [i_1] [i_1] [i_1] [i_1] = (arr_15 [i_1] [i_1] [i_2] [i_3 + 2] [i_5] [i_5]);
                        var_22 -= (min(((max(var_11, 60317))), (~var_7)));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_27 [i_1] [15] [11] [15] [15] = (!473507304);
                            arr_28 [i_7] [i_7] [7] [i_3 + 2] [i_3 - 1] [i_2] [8] = ((~(arr_15 [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 2] [i_3 + 1])));
                            var_23 = ((var_7 + (var_1 - var_0)));
                            var_24 = 4294967295;
                            var_25 = (arr_5 [i_1]);
                        }
                        var_26 = (((arr_17 [i_6 - 1]) < (((arr_17 [i_3]) & (arr_9 [i_3 + 2] [i_1] [i_1])))));

                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            arr_31 [i_1] [i_1] [i_1] [i_3] [i_8] [i_8] = ((3821459992 & ((var_9 ? var_1 : 65536))));
                            var_27 = (max(var_27, (arr_12 [15] [i_2] [11])));
                            var_28 = (((((0 ? var_13 : var_9))) ? var_0 : (arr_14 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])));
                        }
                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            var_29 = (max(var_29, var_3));
                            var_30 &= -65537;
                            var_31 |= 1;
                        }
                    }
                    var_32 *= var_5;
                    arr_34 [15] [2] [6] = -0;
                }
            }
        }

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_33 = ((((-var_14 ? -1594843815 : ((~(arr_6 [1] [i_10]))))) & (arr_25 [i_1] [i_10] [2] [14] [i_1] [i_1])));
            arr_37 [1] [i_1] [i_10] = ((~(arr_21 [i_10] [13] [i_1])));
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                {
                    var_34 = (arr_5 [i_11]);
                    var_35 = var_5;
                }
            }
        }
        var_36 = ((~(var_14 & 10600)));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
    {
        arr_46 [1] [i_13] = ((((473507304 ? (arr_15 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) : 1))) < var_13);
        arr_47 [i_13] [i_13] = (arr_15 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);
        arr_48 [i_13] = (arr_36 [i_13] [i_13] [i_13]);
    }
    #pragma endscop
}
