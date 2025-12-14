/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_1] = (min((((((var_16 ? 1172589501 : 1172589501))) ? 1172589501 : (arr_5 [i_2]))), ((~((((arr_1 [i_0]) && 2147483647)))))));
                    arr_7 [i_0] [i_0] [i_1] = ((+((((((arr_0 [i_2] [i_2]) ? (arr_1 [i_0]) : -2147483647))) - (((arr_2 [17] [i_1] [i_2]) + var_17))))));
                    var_19 = ((-((((min((arr_1 [i_2]), (arr_1 [i_0])))) ? (max(0, -2147483647)) : 187))));
                }
            }
        }
        arr_8 [i_0] [i_0] = (((max(var_2, (((-2147483647 - 1) | 32756)))) / (((arr_1 [i_0]) ? -17007 : (min(var_11, (-32767 - 1)))))));

        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            var_20 = (((((arr_5 [i_3 + 2]) && ((min(2147483647, var_17))))) ? (((!(((var_2 ? (arr_10 [i_0]) : var_15)))))) : ((((arr_2 [i_3 + 2] [i_3 - 1] [i_3 + 1]) || (arr_2 [i_3 + 2] [i_3] [i_3 + 1]))))));
            arr_13 [12] |= (((((-(255 & 8443544806555593113)))) ? (((arr_3 [12] [i_3 + 2]) >> (var_16 - 147))) : ((4085127547141540220 ? (max((arr_3 [i_0] [i_3]), 2147483647)) : (209 || 2047)))));
        }
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = (((~var_0) ? (min(var_18, (arr_0 [i_4] [i_4]))) : var_2));
        var_21 |= ((56 >> (102 - 76)));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_22 = ((((arr_17 [i_5] [i_5]) ? (arr_18 [i_5] [i_5]) : ((max(38, var_14))))));
        arr_19 [i_5] = ((~(((arr_10 [i_5]) ? (arr_10 [i_5]) : (arr_10 [i_5])))));
        var_23 = (max(var_23, ((((arr_14 [i_5]) ? (((~4294967285) ? 32767 : (218 % 56))) : ((var_4 ? ((223 ? (arr_11 [i_5]) : 238)) : ((((arr_11 [i_5]) && (-32767 - 1)))))))))));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_24 = 2147483647;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    var_25 = min(((((min(-16, -474111513881928961))) ? (max(2013265920, 17676491045188358880)) : (-32767 - 1))), ((((arr_22 [i_6] [i_6]) ? (arr_20 [i_7] [i_7]) : (arr_20 [i_8] [i_6])))));
                    arr_27 [i_6] [i_7] [i_8] = (max((arr_23 [i_8]), var_1));
                    arr_28 [i_6] [i_7] [14] = (((((~((var_15 ? 2542116126 : (arr_10 [i_6])))))) ? (((min((arr_10 [i_8]), var_16)))) : ((var_12 ? (max(var_3, (arr_0 [i_7] [7]))) : ((((arr_10 [14]) ? var_5 : (arr_22 [i_6] [7]))))))));
                }
            }
        }
    }
    var_26 |= (min(var_6, (((1099511627648 != -697560178) ? ((max(var_13, var_1))) : (var_5 * 46)))));
    #pragma endscop
}
