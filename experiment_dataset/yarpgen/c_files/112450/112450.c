/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((~((var_0 ? (arr_5 [i_1] [i_1 - 2] [i_2 + 3] [8]) : (arr_5 [i_1] [i_1 + 2] [i_2 - 1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = (arr_2 [i_0]);
                                var_15 = ((3190663861 || (arr_12 [i_0] [i_1 + 2] [i_2] [i_3])));
                                var_16 = (((((~var_13) | (-10541 < 26))) == (min((arr_2 [i_0]), var_5))));
                                arr_17 [i_2 - 1] [i_3] [i_0] = (~var_7);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                arr_24 [i_5] = ((((((arr_1 [i_5]) ^ 212))) ? 36 : ((min(var_4, var_3)))));
                arr_25 [i_5] [i_5] [i_5] = (~(((10513 >> var_0) - var_6)));
                var_17 = (((var_10 > 3654743401) || (!var_7)));

                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {

                    for (int i_8 = 2; i_8 < 8;i_8 += 1)
                    {
                        arr_32 [i_5] [3] [i_5] [i_7] [3] [i_8] = ((((((arr_11 [i_5] [10] [i_7 + 2] [i_8 + 1]) ? var_1 : (arr_11 [0] [i_5] [i_7 + 1] [i_8 - 1])))) ? (!17) : (((arr_11 [i_5] [i_8] [i_7 + 2] [i_8 - 2]) ? (arr_11 [i_7 + 2] [i_6] [i_7 + 2] [i_8 - 2]) : -1))));
                        var_18 = (((max((arr_14 [i_5] [i_5] [i_6] [i_7] [i_8 + 1] [i_8] [i_8 - 2]), var_12)) >> (((arr_14 [i_5] [i_5] [i_6] [i_7 + 2] [i_8] [i_8 + 1] [i_8 - 1]) - 163))));
                        arr_33 [0] [0] [i_6] [i_5] |= max((min((arr_26 [i_5] [i_7] [i_6]), 0)), (((((max(var_11, 8134119776361308572))) ? ((max(var_12, var_6))) : ((var_0 ? 69 : var_0))))));
                    }
                    arr_34 [i_7] [i_7] [i_7] [i_5] = (max((arr_31 [i_5] [i_5] [8] [i_6] [i_5] [i_7 + 2]), var_12));
                    var_19 = ((!(!22688)));
                }
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    arr_37 [i_5] [i_9] [i_6] [i_5] = (((((~(arr_16 [i_5] [1] [i_5])))) / -5538875954703398953));
                    var_20 = var_1;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 8;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 10;i_12 += 1)
            {
                {
                    arr_46 [i_11] = ((((~((var_5 ? (arr_44 [11]) : (arr_43 [i_10] [i_11] [i_10]))))) * ((((arr_43 [i_10] [i_11 + 4] [i_12 - 1]) & (arr_41 [i_11 - 1] [i_12 + 1]))))));
                    arr_47 [9] [i_11] [i_11] = (((((arr_43 [i_10] [i_12 - 1] [i_12 - 1]) ? (arr_43 [5] [i_12 - 1] [11]) : 26)) ^ (arr_43 [i_12 + 1] [i_12 + 1] [i_12])));
                }
            }
        }
    }
    var_21 = ((((-2147483644 ? var_1 : (!var_6))) > (((((!10515) && ((max(218, var_4)))))))));
    #pragma endscop
}
