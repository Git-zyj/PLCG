/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_1));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_12 = ((((!var_4) ? 11530036577739382608 : ((var_5 ? var_3 : (arr_0 [i_0] [1]))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                arr_8 [i_0 + 1] [1] [14] &= var_0;
                arr_9 [i_0] [i_0] = ((var_4 ? ((min(var_7, var_4))) : (arr_6 [i_0])));
                var_13 = (min((max(-80, 4731679448719467850)), ((((2243475373 | var_9) || ((max(var_0, var_3))))))));
                var_14 = (min(var_14, (!12361147569669279234)));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_15 = ((var_5 ? (((!var_10) ? (((var_10 + 2147483647) >> (var_8 - 6166346592848609095))) : (!-2056732239))) : -79));
                            var_16 = ((((min(4731679448719467842, var_0)) * var_8)));
                        }
                    }
                }
            }
            arr_17 [i_0] [i_1] [i_1] = var_9;

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                arr_20 [i_0] [i_1] [i_0] [i_0] = ((var_8 ? ((((min(var_4, var_1))) ? var_5 : (max(var_6, var_0)))) : (~-111)));
                var_17 = (max(var_17, (((var_8 ? ((((arr_10 [10] [0] [i_0 + 1] [i_0 - 3] [i_0 + 1] [10]) ? (arr_10 [6] [i_0] [i_0 - 1] [i_0 + 1] [i_0] [6]) : (arr_7 [i_0])))) : var_8)))));
            }
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                arr_23 [14] [10] [i_1] [i_6] &= (arr_5 [1] [14]);
                var_18 = (min((max(72057594037927935, -var_7)), var_9));
            }
            /* vectorizable */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                var_19 = (!13715064624990083790);
                var_20 = -9068229069108628520;
                var_21 = (((((var_6 ? var_4 : 72057594037927912))) ? (((arr_12 [i_0] [i_0] [i_1] [i_0]) ? var_0 : 18374686479671623676)) : (((18374686479671623665 ? 9068229069108628518 : 303797565)))));
                var_22 = ((((arr_16 [8] [8] [i_7]) ? var_10 : 88)));
            }
        }
        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            var_23 = ((var_2 && ((min(var_5, (min(44724, var_5)))))));
                            var_24 = ((var_9 + (((var_5 > ((var_10 ? (arr_34 [i_0] [i_0] [i_0] [15] [i_11] [i_11]) : var_8)))))));
                            var_25 = (((((((124 ? var_0 : var_3)) + var_0))) <= ((((max(124, var_10))) ? var_4 : (max(var_3, -4247247667386798751))))));
                        }
                    }
                }
            }
            var_26 = (max(var_26, (((1 > ((((2026191552 ? 8 : -717302217)) % (min(773844978887525394, 2490900685)))))))));
        }
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            arr_40 [i_0] [i_0] = 576460752303407104;
            arr_41 [i_0] [i_12] = ((((((arr_32 [i_12] [14] [i_12] [i_12]) | -123))) ? ((var_2 ? var_8 : var_6)) : (~var_8)));
        }
    }
    #pragma endscop
}
