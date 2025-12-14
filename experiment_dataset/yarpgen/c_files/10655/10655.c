/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 &= var_6;
        var_15 = arr_0 [i_0];
        var_16 &= ((((arr_2 [i_0]) / var_8)) * ((-1493467384 ? (arr_2 [i_0]) : -271805124)));
        var_17 = (((((arr_2 [i_0]) ? ((min(var_1, var_4))) : (var_12 || 42079))) != ((1897147051 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    var_18 = (max(var_18, (min((((var_1 || ((max(var_9, var_0)))))), ((~(var_9 & var_6)))))));

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_19 = min((-882850154 > -40837), -1897147056);
            arr_7 [i_1] [i_2] |= (arr_4 [12] [i_1]);
        }
        for (int i_3 = 3; i_3 < 16;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {

                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    var_20 = 24698;
                    var_21 = ((((min((arr_12 [i_1] [i_3] [i_4] [i_5]), (arr_3 [i_1] [i_1])))) ? (((arr_13 [i_1]) ? 41810 : 32766)) : ((((arr_0 [20]) != var_11)))));
                }
                var_22 = ((((arr_3 [i_3 - 2] [i_3 - 1]) - var_7)));
                arr_16 [i_4] = ((arr_15 [i_1] [i_3] [i_1] [i_4]) % 1182482271);
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                arr_21 [i_1] [12] [i_3] [i_6] = 1774542625;
                arr_22 [i_1] [13] [i_6] [i_6] = (~1917361038);
                var_23 = (max((arr_2 [i_1]), -1750064446));
            }
            arr_23 [i_1] [i_3] = min((max(-1273373904, 32769)), -1600491802);
        }
        for (int i_7 = 3; i_7 < 16;i_7 += 1) /* same iter space */
        {
            arr_27 [i_1] [i_1] [i_1] &= (~(min((arr_5 [i_7 - 3] [i_7 - 3]), (arr_5 [i_7 - 3] [i_7 - 3]))));
            var_24 = min((arr_13 [i_7]), var_2);
        }
        arr_28 [i_1] = (min((((((~1641662155) + 2147483647)) >> (((((-1258010522 + 2147483647) >> (((arr_12 [i_1] [i_1] [i_1] [i_1]) - 52038)))) - 889473105)))), ((((var_2 ? 55085 : var_6)) % (~var_9)))));
    }
    #pragma endscop
}
