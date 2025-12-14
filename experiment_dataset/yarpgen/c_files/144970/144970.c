/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_12 [i_0 + 1] [3] [i_2] [i_2] [i_3] [i_0] = ((((((((8355840 ? 0 : 1))) ? var_2 : (var_6 <= -8355840)))) ? (min((((216 ? (arr_0 [i_0]) : (arr_7 [i_0] [i_0] [i_3])))), ((8355840 - (arr_11 [i_0 - 2] [i_0] [i_1] [i_1] [i_3]))))) : ((((var_4 - (arr_1 [i_3]))) | (((arr_4 [i_0] [i_0] [i_3]) ? (arr_3 [i_2]) : (arr_11 [i_0] [i_1] [i_2] [i_3] [i_3])))))));
                        arr_13 [i_0] [i_0] [i_2] [i_3] = ((-34 ? (((min((arr_0 [i_2 - 4]), (arr_0 [i_2 + 1]))))) : (2496642049 ^ 65)));
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_16 += ((((((((arr_2 [i_0]) ? 255 : var_4))) != (2767605935 * 0))) ? (((~(~59)))) : (((arr_11 [i_0] [i_1] [i_2] [i_2 - 3] [0]) + ((((arr_9 [i_1]) ? 2 : 2)))))));
                        arr_17 [i_0] [i_0] [i_0] [i_2] = (max((((arr_2 [i_2 - 1]) ? (arr_5 [i_2 - 3] [i_4 + 1]) : (arr_2 [i_2 - 3]))), (arr_8 [i_2 - 3] [i_4 - 2] [i_2 - 3] [i_0 + 1])));
                        var_17 = (((max((arr_2 [i_0]), var_8))));
                        var_18 = (((((!var_12) ? (3251264016 * 8355843) : 0)) & (arr_14 [i_0] [i_1] [i_2] [i_4 - 1] [i_1] [i_1])));
                    }
                    var_19 = var_4;
                    var_20 = (max(var_20, (arr_0 [i_2])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_21 = (max(var_21, (((((((arr_0 [3]) ? (arr_11 [i_5] [i_5] [i_6] [i_7] [i_5]) : (arr_11 [i_5] [i_0] [i_6 + 2] [i_7] [i_7])))) ? (min((min((arr_11 [i_0] [i_0] [i_6] [i_0] [i_7]), var_5)), (((-8355844 ? (arr_14 [i_0] [i_5] [i_6 - 2] [i_7] [i_6] [i_5]) : 3782))))) : 5851145692830548962)))));
                        arr_25 [i_0] [i_7] [i_0] [8] = 0;
                        arr_26 [i_0] [i_5] [i_6] [i_0] [i_7] [i_7] = (((((max(28479, (arr_14 [i_5] [13] [i_6] [i_5] [13] [13]))))) ? (arr_23 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_6 - 1]) : (((100 >= (((arr_6 [i_0]) ? var_0 : -2)))))));
                        arr_27 [i_0] [i_5] [i_0] [i_7] = arr_21 [i_0] [i_5] [i_6] [i_7];
                        arr_28 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] = (((arr_2 [i_0 - 2]) ? (arr_15 [i_0] [i_0] [i_0] [i_0]) : (arr_24 [i_7] [i_6] [i_5] [i_0])));
                    }
                }
            }
        }
        var_22 += (((arr_7 [i_0] [i_0] [i_0]) ? ((((var_1 ? (arr_23 [i_0] [i_0] [i_0] [i_0]) : var_11)) >> (((!(arr_7 [0] [0] [i_0])))))) : -107));
    }
    for (int i_8 = 2; i_8 < 15;i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] = (((arr_31 [i_8 - 2]) | ((73 | (arr_31 [i_8 - 2])))));
        arr_33 [i_8] = (max(0, (max((arr_5 [i_8 - 2] [i_8 - 1]), (arr_5 [i_8 - 1] [i_8 + 1])))));
    }
    for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
    {
        var_23 = 8355843;
        var_24 = arr_7 [i_9 + 1] [i_9 - 1] [i_9 - 1];
        arr_36 [i_9] = ((37057 ? 511 : 4423));
        arr_37 [15] [i_9] = (~5779731761012988917);
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 13;i_10 += 1)
    {
        var_25 &= arr_30 [i_10 - 2];
        arr_40 [i_10] = ((~(arr_39 [i_10 - 2])));
    }
    var_26 += 0;
    #pragma endscop
}
