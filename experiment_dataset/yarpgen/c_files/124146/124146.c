/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = var_2;
        var_16 = (min(var_16, ((min(((((((arr_1 [12] [12]) ? var_8 : var_8))) ? ((125705332 ? 1 : 0)) : (arr_1 [8] [i_0]))), (((!(arr_2 [1])))))))));
        var_17 = ((((((((arr_0 [i_0]) && 1)) ? var_13 : (var_13 % -1)))) ? (144 % var_9) : ((((((arr_0 [i_0]) - 1))) ? var_8 : (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    {
                        var_18 += 1;
                        var_19 = ((((var_11 ? (arr_7 [1] [i_3] [i_4]) : 774715781)) % 40794));
                        var_20 = (max(var_20, (((var_2 ? 1 : var_2)))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_21 = ((!var_1) ? ((((arr_3 [5]) ? 1 : 9223372036854775807))) : var_5);
                            var_22 = -27725;
                            var_23 = (arr_16 [0] [0] [i_1] [i_1] [i_1]);
                        }
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {
            var_24 += ((((~(arr_16 [i_1] [i_8 + 2] [i_1] [i_1] [i_1]))) < var_5));
            var_25 = ((1316999077 ? (arr_19 [i_1] [i_8 + 2] [i_1] [i_8] [i_8 + 2] [i_1] [i_8]) : 3047518253));
            var_26 += (((arr_19 [i_8] [i_8] [i_1] [12] [i_1] [i_8 + 2] [i_1]) <= var_6));
            var_27 |= ((!(arr_14 [i_1] [i_8 + 1] [i_1])));
        }
        var_28 = ((arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]) : var_9);
        var_29 |= -11;
        arr_22 [15] = ((4503599358935040 ? -27722 : 12062436476874400307));
    }
    var_30 = var_12;
    var_31 = (min(var_31, (((var_14 == (((max(var_7, var_14)) - (max(var_14, 2080258932)))))))));
    #pragma endscop
}
