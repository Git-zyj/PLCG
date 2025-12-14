/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        var_14 = (max(var_14, (((((((!127) ? ((var_10 ? 255 : (-9223372036854775807 - 1))) : (arr_7 [i_0] [i_1] [i_2] [i_1] [i_3])))) ? (arr_5 [i_3 - 1] [i_3] [i_3] [16]) : (((arr_2 [i_0]) ? (((247 >> (((arr_1 [i_0]) - 11350200025381863997))))) : (((arr_6 [i_0] [i_1 + 2] [i_1 + 2] [i_3]) ? (arr_3 [i_3 - 1] [i_2]) : (arr_7 [i_0] [i_1] [i_1] [i_3] [i_3 - 2]))))))))));
                        var_15 += (max((((var_9 <= (((arr_0 [8]) ? var_2 : (arr_3 [i_1] [i_3])))))), ((~(arr_0 [i_0 - 2])))));
                    }
                }
            }
        }
        arr_8 [i_0] [i_0] = (~(((!(arr_5 [i_0] [i_0 - 2] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 12;i_4 += 1)
    {
        var_16 += -305800231;
        var_17 = var_1;
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {

        for (int i_6 = 3; i_6 < 21;i_6 += 1)
        {
            var_18 = ((123 ? (arr_16 [i_5 + 1]) : 110));
            var_19 += 2083691572691272427;
            arr_18 [12] = ((((((arr_13 [i_5 - 2]) ? var_6 : (arr_12 [12] [i_6])))) ? (((arr_16 [i_5]) ? var_10 : (arr_12 [18] [1]))) : -119));
        }
        var_20 = (((arr_12 [i_5 - 3] [i_5 + 4]) - (arr_12 [i_5 - 1] [i_5 - 1])));
        var_21 = (arr_17 [i_5 + 3]);
        var_22 = (arr_17 [i_5]);
    }
    var_23 = var_2;
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            {
                arr_24 [i_7] [i_7] = -305800248;
                var_24 = (min(var_24, (((~(((arr_16 [i_7 + 2]) ? (arr_16 [i_7 + 2]) : (arr_16 [i_7 + 1]))))))));
                arr_25 [i_7] [12] [i_7] = (max((arr_11 [i_7] [i_7 + 3]), (((arr_20 [i_7 + 1]) ? (arr_11 [7] [i_7 + 3]) : (arr_20 [i_7])))));
                var_25 = -256;
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {

                            for (int i_11 = 1; i_11 < 11;i_11 += 1)
                            {
                                var_26 = (((((((arr_15 [0]) ? -2218 : 124)))) ? (min(((~(arr_23 [5]))), (~114))) : var_12));
                                var_27 = var_6;
                            }
                            var_28 = (max(var_28, ((max((arr_17 [1]), 139)))));
                            var_29 = ((-1 ? (-32767 - 1) : (((!(~-719182516))))));
                            var_30 &= ((!(arr_30 [i_7] [5])));
                            var_31 = (arr_9 [i_10]);
                        }
                    }
                }
            }
        }
    }
    var_32 = (max(var_3, var_4));
    #pragma endscop
}
