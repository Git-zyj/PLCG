/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((~var_12) ? ((var_0 ? var_1 : var_10)) : 0))) ? ((((!(((var_16 ? var_17 : -1))))))) : var_4));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_21 = (max(var_21, (arr_5 [0])));
            arr_8 [i_0] = (((6 && ((min(241, (arr_0 [i_0])))))));
            var_22 = var_7;
            var_23 = (max(var_23, ((((((((((arr_0 [8]) <= var_1)))) == (arr_0 [0]))) ? (((((32756 / (-2147483647 - 1))) >> (((arr_2 [i_1]) + 17821))))) : (min((3513158224 / 2147483647), 7519632486130078983)))))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    {
                        var_24 = ((!(arr_4 [i_2] [i_3] [i_4])));
                        arr_15 [i_0] [8] [8] [i_0] [i_0] [i_4 - 2] = (((arr_4 [i_2] [i_3] [i_4]) & (((3 ? 64 : -7)))));
                        var_25 = ((((((44600 ^ 8128) ? (max((-2147483647 - 1), 15)) : ((64 ? (arr_13 [i_0]) : -6))))) ? (((((((arr_6 [1] [i_2] [i_3]) & 124))) ? (((-278180522 != (arr_10 [i_0] [i_2] [i_0])))) : ((max((arr_12 [i_0] [i_2] [i_3]), 40890)))))) : ((((max(10, var_8))) ? (64 ^ -2147483644) : var_4))));
                    }
                }
            }
            var_26 = ((((((arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? 6873 : 2147483643))) ? (((arr_4 [i_0] [i_2] [i_2]) >> 6)) : ((((!(((var_4 >> (40890 - 40872))))))))));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_27 = (max(var_27, ((31 ? (arr_12 [i_5] [i_0] [i_0 + 2]) : (arr_12 [i_5] [i_5] [i_0 - 1])))));
            var_28 = (max(var_28, (((2147483647 / ((((var_4 ? 1509345857 : (arr_3 [i_5]))))))))));
        }
        arr_18 [4] |= -16;
        arr_19 [i_0] = (((((40890 >> (56271 - 56249)))) ? (((arr_1 [i_0]) << (arr_14 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0]))) : (arr_9 [i_0 + 2])));
        var_29 = ((-((((var_19 & (arr_1 [i_0]))) >> ((((40 ? -7 : 3289483337)) - 4294967277))))));
    }
    #pragma endscop
}
