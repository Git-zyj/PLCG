/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((((var_6 ? var_10 : var_1)))) ? var_5 : var_1)))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_16 = ((1 ? 19 : 127));
        var_17 = (max(var_17, var_13));
        arr_2 [i_0] = (((14820581493366610902 ? 1514616339557255044 : -1)));
        var_18 = (max(var_18, (((~(((arr_1 [i_0 - 1] [i_0 - 1]) ? ((~(arr_1 [i_0 + 1] [i_0]))) : (((var_14 & (arr_0 [0])))))))))));
        var_19 = (max(var_19, var_4));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_20 = var_11;
        arr_5 [i_1] &= ((24 ? 1514616339557255045 : 21));
        var_21 -= ((1 ? 192 : var_3));
    }
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        arr_8 [i_2] = var_3;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {
                    var_22 = (max((arr_11 [i_2 - 1]), ((max(79, 110)))));
                    arr_15 [i_2] [i_2] [i_2] [i_2] = ((2809346232 | ((9 ? (((var_6 ? (arr_12 [i_4 - 1] [i_2]) : 157))) : ((var_9 ? var_6 : 1946273895))))));
                }
            }
        }
        var_23 = 13;
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                {
                    arr_22 [0] [i_5] [i_6] [i_5] = (~179);
                    var_24 += (min((min(2017712415, 1)), (((var_10 == (arr_20 [i_2] [i_5 + 1] [i_2] [i_2]))))));
                    var_25 = (((arr_20 [i_2 - 3] [i_2] [i_2 - 1] [i_2]) | ((((!(arr_13 [i_2 - 2] [i_5 + 1])))))));
                    var_26 = ((-(((var_14 * 0) ? 80 : (max(18446744073709551613, 216))))));
                    arr_23 [i_2] [i_5 + 1] [i_6 - 2] [i_2] |= -var_1;
                }
            }
        }
    }
    var_27 = (min(var_27, var_6));
    #pragma endscop
}
