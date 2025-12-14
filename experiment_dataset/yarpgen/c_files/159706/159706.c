/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_17 = (min(var_17, ((((arr_2 [i_1]) == var_8)))));

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_18 = ((!((((arr_11 [i_3 + 1] [i_3] [i_3] [i_4 - 1] [i_4]) ? -98994552 : (arr_4 [i_2] [i_1] [i_4 - 1]))))));
                            arr_14 [i_0] = ((((var_1 ^ (arr_10 [i_0] [i_0] [i_1] [i_0]))) & (((var_1 & 5066393771759243987) & ((((arr_0 [i_0]) & var_14)))))));
                        }
                    }
                }
                var_19 = (max(var_19, 98994544));
                arr_15 [i_0] = 98994551;
                arr_16 [5] [9] [i_0] = (((-4 ? var_15 : ((min(4, var_14))))));
                arr_17 [i_0] = 11230135850708915404;
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                arr_21 [8] [i_0] [i_0] [i_5] = (arr_11 [2] [2] [i_5] [i_5] [i_0]);
                var_20 = (i_0 % 2 == zero) ? (((((var_2 & (arr_8 [i_0] [i_0] [i_0] [8] [i_0]))) & (((arr_8 [i_0] [i_1] [i_5] [i_1] [i_1]) >> (arr_8 [i_0] [i_1] [i_1] [2] [i_5])))))) : (((((var_2 & (arr_8 [i_0] [i_0] [i_0] [8] [i_0]))) & (((arr_8 [i_0] [i_1] [i_5] [i_1] [i_1]) >> (((arr_8 [i_0] [i_1] [i_1] [2] [i_5]) - 35)))))));
            }
        }
        arr_22 [i_0] = var_10;
        arr_23 [i_0] = -1686700405;
        var_21 = (min(-98994543, (arr_20 [i_0] [i_0] [i_0] [i_0])));
    }
    var_22 = ((var_4 << (((max(((var_4 << (18446744073709551615 - 18446744073709551613))), (!98994552))) - 227858836))));
    #pragma endscop
}
