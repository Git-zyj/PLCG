/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((((var_4 > var_2) ? var_10 : (9007199254708224 ^ var_0))) - var_3);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((!(((min(17592118935552, (arr_3 [10] [16]))))))))));
                var_19 = arr_3 [i_1] [i_1];
            }
        }
    }
    var_20 = var_7;

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_21 = ((!(arr_9 [i_2])));
        arr_10 [i_2] = ((var_3 ? (max(9007199254708228, var_10) : 9007199254708209)));

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                var_22 = arr_7 [i_3] [i_3];
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_22 [i_2] [i_3] [i_4] [i_2] [i_6] [i_4] = arr_21 [i_2] [i_2] [i_3] [i_5] [i_6] [i_4] [i_5];
                            var_23 = (((((arr_21 [i_2] [i_3] [i_3] [i_6 - 1] [i_3] [2] [i_4]) ? ((var_2 ? (arr_9 [i_3]) : var_13)) : (~var_12)))) ? (arr_21 [i_2] [i_2] [i_3] [i_3] [i_6] [i_4] [i_5]) : 18437736874454843390);
                            var_24 = 6224117615625079279;
                            var_25 = 9051193499347914811;
                        }
                    }
                }
            }
            for (int i_7 = 4; i_7 < 17;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_26 = 9395550574361636804;
                            arr_31 [i_3] [i_3] [i_3] [2] [i_9] = arr_25 [i_8 + 2];
                        }
                    }
                }
                var_27 = (((-(var_1 > var_2))));
                arr_32 [i_3] [i_3] = (((137438953471 ? 9051193499347914811 : (arr_15 [i_3] [i_3]))) & var_10);
            }
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_28 = min(var_1, (max(17103458760298413886, (arr_34 [i_2] [i_3] [i_3]))));
                            arr_40 [i_3] [i_3] [i_3] [i_3] [i_3] = (23 | 18437736874454843390);
                            var_29 = max((max(17592186043392, 18446744073709551615)), (max((max(9223992379099422727, 4052173517441965274)), (arr_8 [i_2]))));
                            var_30 = 9007199254708228;
                        }
                    }
                }
                var_31 = 9051193499347914811;
            }
            var_32 = arr_25 [i_2];
            var_33 = (15087626414988759383 ? (arr_27 [i_3] [i_3] [i_3] [i_3]) : (13396614101220273569 | 0));
        }
        var_34 = max(((-((8009111402751517194 ? 18446726481523508241 : 5050129972489278042)))), var_0);
    }
    #pragma endscop
}
