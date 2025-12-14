/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((~(~var_12))) >> 0));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_18 = (((((!(arr_0 [i_0] [i_0])))) * (((((~(arr_1 [i_0]))) < (((13549 + (-9223372036854775807 - 1)))))))));
        arr_2 [i_0] = ((!((((arr_1 [i_0]) ? var_13 : (arr_1 [i_0]))))));
        var_19 = ((!(arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_0] = ((!(~1)));
                                arr_14 [i_0] [i_1] [i_1] [i_4] = var_0;
                                var_20 = (((((((min((arr_12 [i_0] [i_0] [i_2] [i_3] [i_3]), (arr_12 [i_0] [12] [i_0] [i_3] [i_4])))) ^ (var_11 | var_13)))) ? (min(0, 1)) : 1));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (~-2055325416);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_21 = (max(((33554431 + (2055325394 < var_4))), ((min((((arr_3 [i_0] [i_6]) || -2055325434)), (1 <= var_10))))));
                                var_22 = 2048;
                                var_23 = (((arr_0 [i_1] [i_2]) >= (min((max(18446744073675997184, 33554419)), var_12))));
                            }
                        }
                    }
                    arr_21 [i_0] = ((~((((~var_11) > 80)))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_24 *= ((((min((arr_18 [i_7] [i_7] [i_7] [4] [i_7] [i_7] [i_7]), var_5))) && ((min((arr_18 [i_7] [18] [i_7] [18] [i_7] [i_7] [i_7]), (arr_18 [i_7] [i_7] [i_7] [1] [i_7] [i_7] [i_7]))))));
        var_25 = (!((((((arr_4 [i_7]) ? 2055325427 : 7))) >= (((arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) ? var_7 : var_5)))));
        arr_24 [i_7] [i_7] = ((((var_16 + 2147483647) >> (var_1 + 124))));
        var_26 = ((((((min(1, (arr_8 [i_7] [i_7] [i_7] [i_7] [i_7])))) ? var_2 : ((min(0, (arr_5 [i_7] [i_7])))))) << (((((min(1, var_8)))) - 50608))));
        arr_25 [i_7] = ((!(arr_8 [i_7] [i_7] [i_7] [i_7] [i_7])));
    }
    var_27 = min((((~var_12) ? var_1 : var_4)), ((((var_2 >> (2098138268 - 2098138242))) ^ (~var_6))));
    var_28 = var_10;
    #pragma endscop
}
