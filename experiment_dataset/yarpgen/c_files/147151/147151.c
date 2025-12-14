/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [4] = ((!((max(65535, 50495)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_2] = (max(((((arr_0 [i_2]) ? 1743576192 : 0))), (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_8))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_16 = (arr_8 [i_0] [i_1] [i_2] [i_3]);
                        var_17 = (((((21 << (43467 - 43457)))) ? (((((arr_13 [i_0] [i_1] [20] [i_3]) ? (arr_4 [13]) : 105)) * (((var_2 || (arr_9 [i_0] [i_0] [i_0])))))) : (61 <= 26958)));
                        arr_14 [i_0] [i_0] [i_1] = (((arr_1 [9]) ? ((((var_5 ? var_2 : -49)) - ((max(0, (arr_12 [i_0] [i_1] [i_2] [10] [i_3])))))) : (((!(((var_6 ? var_15 : var_0))))))));
                        var_18 = (max((1 % 12856829892097605986), (65535 | 18130)));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_19 = ((!((min((~var_2), (~-47))))));
                        var_20 = ((4294967295 * (1 / 105)));
                    }
                    var_21 -= (((max((arr_1 [i_1]), 0)) == (((max((var_12 < 4294967295), (arr_15 [i_0] [i_0] [i_2])))))));
                    arr_17 [i_0] [i_0] [i_1] [i_0] = (max((((!127) * -var_12)), (((4294967280 ? 50287069 : 0)))));
                }
            }
        }
        var_22 = (min((max((arr_5 [i_0] [i_0]), (arr_5 [i_0] [1]))), ((min((!14), var_11)))));
        arr_18 [i_0] [i_0] = (min(((((arr_4 [i_0]) + ((min((arr_6 [i_0] [i_0]), (arr_13 [i_0] [i_0] [1] [22]))))))), (min(((100 ? 1293396090 : 1)), (arr_11 [i_0])))));
    }

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_23 |= max(65535, (max(255, 1094164192)));
        var_24 = var_7;
        arr_21 [i_5] = 333341485559922814;
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_25 [i_6] = (max((~var_12), (min((min(1, 13)), (((~(arr_5 [i_6] [i_6]))))))));
        var_25 = min((((((arr_1 [i_6]) > 0)) ? (((min(var_9, -93)))) : (arr_7 [i_6] [i_6] [i_6]))), (((~(max(61429, 2147483638))))));
        var_26 = (!var_12);
        var_27 = ((var_12 ? ((min((arr_1 [i_6]), (arr_1 [i_6])))) : ((min(1, 1)))));
    }
    #pragma endscop
}
