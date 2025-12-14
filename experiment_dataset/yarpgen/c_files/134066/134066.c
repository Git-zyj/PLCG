/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (min(var_12, (((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [7]) : var_2))) ? ((var_8 ? var_6 : -25)) : ((((arr_0 [i_0]) ? var_9 : var_2))))))));
        var_13 *= ((!(arr_1 [i_0] [i_0])));
        var_14 = (((((arr_0 [11]) ? var_4 : var_1)) % ((805306368 ? var_7 : var_3))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_15 = ((~var_7) < ((((arr_2 [i_1] [i_1]) ^ var_9))));
        var_16 = (max(var_16, (!2016)));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_17 = (max(var_17, (~-1778873266)));
                        arr_14 [i_2] [i_3] [i_3] [i_4] [i_4] [i_2] = (arr_5 [i_2] [i_5]);
                        var_18 = (min((0 ^ var_7), ((((1 - var_2) == (((arr_12 [i_2] [i_2] [i_4]) - 1)))))));
                    }
                }
            }
        }
        var_19 ^= ((((((arr_6 [i_2]) ? (arr_2 [i_2] [i_2]) : var_8))) ? ((min((arr_6 [i_2]), (arr_2 [i_2] [i_2])))) : (~-3083291499023308924)));
        var_20 = (((max(((var_9 ? (arr_12 [i_2] [i_2] [i_2]) : 0)), (arr_5 [i_2] [i_2]))) < ((((((arr_11 [i_2] [i_2] [i_2] [i_2]) ? (arr_10 [i_2] [i_2] [i_2]) : var_6)) | ((((var_6 < (arr_2 [i_2] [i_2]))))))))));
        var_21 = arr_3 [i_2];
        var_22 = (arr_13 [8] [i_2] [i_2]);
    }
    var_23 = ((((((!((min(39648, -2123120585))))))) >= var_6));
    var_24 -= ((((((((var_4 ? var_1 : var_1))) ? ((293006337 ? 0 : var_4)) : var_4))) ? var_3 : (max((max(19, -1039361436348014568)), (min(var_6, var_1))))));
    #pragma endscop
}
