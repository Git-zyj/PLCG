/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = (((max(-var_14, (arr_8 [i_0 - 3]))) / (((-(var_10 - var_12))))));
                            arr_10 [i_3] [i_2] [i_1] [i_0] = ((!(390120887 != -16355)));
                            arr_11 [i_3] [i_2] [7] [i_1] [i_1] [i_0] = min((((((717853525 ? 891474472834288777 : 31))) ? (((arr_9 [i_3] [13] [i_2] [i_1] [1]) & var_14)) : (28 & -891474472834288778))), (max((arr_5 [i_3] [i_0 - 3] [i_2] [i_0 - 3]), var_5)));
                        }
                    }
                }
                var_21 = (((min(var_6, 47))) != (((arr_0 [i_0 - 3] [i_0 - 2]) ? 40446 : (arr_8 [i_0 + 1]))));
            }
        }
    }

    for (int i_4 = 4; i_4 < 23;i_4 += 1)
    {
        var_22 = min(((max(var_7, var_8))), (max(81, 891474472834288777)));
        var_23 = (((0 ? 31 : -6988424573092742969)));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 22;i_7 += 1)
                {
                    {
                        var_24 = (min((!var_9), 0));
                        arr_22 [i_7] [i_6] [i_5] [i_4] [i_7] = 18;
                    }
                }
            }
        }
        arr_23 [i_4] = ((!((min(2147483647, 633644589)))));
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
    {
        var_25 = ((0 >> (((((arr_14 [i_8] [23]) ? 884201869 : (var_7 == var_18))) - 884201852))));
        var_26 -= (max(-37785, (((arr_14 [i_8] [i_8]) ? (min(var_14, (arr_15 [i_8]))) : (((((arr_25 [i_8] [i_8]) != (arr_19 [18] [i_8] [i_8] [i_8] [i_8])))))))));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
    {
        var_27 *= var_9;
        var_28 = ((!((!(arr_13 [i_9])))));
        var_29 *= ((((((((arr_29 [i_9] [i_9]) || var_9)) ? (((var_18 ? 14 : -48))) : 18446744073709551615))) ? (arr_16 [i_9] [i_9] [i_9]) : (((min(var_0, var_6)) ? var_1 : (13 & var_2)))));
        arr_30 [13] [i_9] = ((~(~206)));
    }
    var_30 = (((((max(-7774950980139078699, var_3)) / (2066158698 + 0))) * var_4));
    #pragma endscop
}
