/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (((((1 ? (arr_2 [i_0]) : 15805285021201106444))) ? (arr_2 [i_0]) : 248));
        var_13 = var_11;
        var_14 = -22040;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_15 ^= (((1 * 22050) ? (arr_2 [i_1]) : ((-(((arr_1 [i_1] [i_1]) ? 0 : 815764835))))));
        var_16 += ((max(((1 ? (arr_0 [i_1]) : 815764835)), (((815764835 << (216 - 215)))))));
        var_17 = ((~((var_4 ^ (arr_2 [i_1])))));
    }
    var_18 = (min(var_18, var_10));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            {
                var_19 = (((arr_1 [7] [i_3 - 1]) ? ((118 ? (arr_5 [i_3 + 1] [i_3 + 1]) : (arr_5 [i_3 - 1] [i_3 - 2]))) : (-2147483647 - 1)));
                var_20 = -595580303;
            }
        }
    }

    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        var_21 = var_6;
        arr_14 [i_4] [i_4] = (arr_13 [i_4 - 1]);
        var_22 = (((((~(arr_1 [i_4] [i_4 - 1])))) ? ((max(var_10, var_10))) : (((var_1 ? ((1 ? var_5 : (arr_2 [i_4 + 1]))) : (max(595580302, -4805)))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_18 [i_5] = (min(var_4, (-2147483647 - 1)));
        arr_19 [i_5] = ((((~106) ? 3853732749183950519 : -22040)));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        arr_22 [i_6 - 1] = (arr_21 [i_6 - 1] [i_6 + 1]);
        var_23 &= ((18446744073709551615 > (~var_2)));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                {

                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {
                        arr_30 [i_6] [i_6 - 1] [i_6 - 1] [i_7] [i_6 - 1] [i_9] = (((arr_20 [i_8] [i_9 - 3]) ? ((((arr_27 [i_6] [i_6] [i_9]) > var_7))) : 780));
                        var_24 = (arr_21 [i_6 + 1] [i_8 + 2]);

                        for (int i_10 = 1; i_10 < 19;i_10 += 1)
                        {
                            var_25 = (((arr_33 [i_6] [i_6 + 2] [7] [i_6] [i_6]) ? (arr_34 [i_10 + 1] [i_10] [i_10] [i_10] [i_10] [i_9]) : ((22050 ? (arr_26 [i_6] [i_6] [i_6 + 2] [i_6]) : (arr_27 [i_6] [i_8] [i_6])))));
                            var_26 += (arr_34 [i_9] [i_7] [i_8 + 2] [i_6 - 1] [i_10] [i_7]);
                        }
                        var_27 += 1;
                    }
                    arr_35 [i_6 + 2] = (((arr_28 [i_7]) ? (arr_34 [i_6] [i_8 + 2] [18] [i_8 + 2] [i_8] [i_7]) : (arr_34 [i_7] [i_8 - 1] [6] [i_8] [i_8] [i_7])));
                    arr_36 [i_6 + 2] [i_7] [i_7] = (((~(arr_28 [i_7]))));
                }
            }
        }
        arr_37 [7] = (((arr_33 [i_6] [i_6 + 2] [7] [i_6] [i_6]) ? ((((!(arr_24 [i_6]))))) : 2432454234372742139));
        var_28 += (arr_23 [1] [i_6 + 1]);
    }
    #pragma endscop
}
