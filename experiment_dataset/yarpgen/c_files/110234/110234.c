/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [i_0 + 2] [i_1] [i_1] [i_1] = (!38298);
                        var_15 ^= (((47 ? (-59 / 231) : -var_12)));
                    }
                }
            }
        }
        arr_12 [6] = 8257536;
        var_16 -= ((-(((~(arr_9 [i_0] [i_0 + 1] [i_0 + 2] [14]))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                arr_18 [i_4] [i_5] [i_4] = var_9;

                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    arr_21 [i_4] [i_4] [i_6] = min(((-23497 ? 1736890941930769063 : 2573709619)), ((max(-59, 36))));

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_17 = (~8257542);
                        arr_24 [i_4] [i_4] [i_4] = ((((max(207, -8257536)) < (((var_2 || (arr_8 [i_4] [i_5] [i_7])))))));
                        var_18 ^= ((((arr_23 [i_4] [i_5] [i_6]) >= (arr_0 [i_7]))));
                    }
                    var_19 = (15 >= 2573709623);
                    var_20 = ((((!((min(-9, 104))))) ? ((max((arr_9 [i_4] [i_5] [i_6] [i_5]), (arr_9 [i_6] [i_6] [i_5] [i_4])))) : (((min(125, var_9))))));
                    arr_25 [i_4] [i_5] [10] [i_4] = (min(-8257536, 36606));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {

                    for (int i_9 = 3; i_9 < 18;i_9 += 1)
                    {
                        var_21 -= (arr_8 [7] [i_9 - 2] [i_9 + 1]);
                        var_22 ^= ((-(arr_9 [i_4] [i_9 + 2] [i_9 + 1] [i_9 - 3])));
                        var_23 = (26866 ? (arr_19 [i_9] [i_9 - 1] [i_9 - 3] [i_9]) : var_9);
                    }
                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        var_24 -= (~-127);
                        arr_33 [i_10] [i_10 + 2] [i_10 + 2] [i_4] = (arr_3 [i_10 + 2] [i_10 + 2] [i_4]);
                        arr_34 [i_10] [i_10 + 4] [i_4] [i_4] [i_5] [i_4] = (arr_4 [i_4]);
                    }
                    arr_35 [i_4] = ((~(arr_19 [i_4] [i_5] [i_5] [i_8])));
                }
                var_25 = ((max(104, 61)));
                arr_36 [i_4] [i_4] [i_4] = (((arr_0 [i_5]) ? 5365156095315896555 : ((((!((max(-2, 2215467604)))))))));
            }
        }
    }
    var_26 = (((((var_11 & var_11) ^ var_10)) & var_2));
    #pragma endscop
}
