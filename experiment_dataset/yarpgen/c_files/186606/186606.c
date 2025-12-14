/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = min(((((var_10 >> (5535 - 5493))) << ((((min(5535, 5539))) - 5500)))), var_17);
        var_19 &= (min(((((((~(arr_0 [i_0] [1])))) || (((var_4 ? (arr_1 [2] [i_0]) : var_12)))))), (((~var_12) ? (max(var_12, 1203829317)) : (((min(5540, (arr_1 [i_0] [i_0])))))))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_20 = 17501084484316986480;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                {
                    var_21 = -5540;
                    var_22 = ((((arr_8 [i_1] [2]) ? 254 : ((3469672608 ? 254 : 51299)))));
                    var_23 = var_10;
                }
            }
        }
    }
    var_24 = 3405377571577973020;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                var_25 += ((+((-((min((arr_10 [i_4] [i_5] [i_4]), 255)))))));
                var_26 |= (((~238) ? (arr_2 [i_4]) : var_1));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_27 += (!249);
                                var_28 = (((var_12 * (!3405377571577973020))));
                            }
                        }
                    }
                }
                var_29 = (min(((((arr_18 [6] [i_5] [i_5]) ^ (-4394846795120923797 / var_15)))), (max(9166802806712856651, ((1401914928 ? 221 : 9166802806712856651))))));
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_30 += ((((((!(((var_3 ? 14562202237600955167 : -60))))))) % (((arr_9 [i_9]) | var_14))));
                                var_31 |= (min(((var_0 ? (var_6 || var_6) : ((7848067698310909586 ? 0 : 43928)))), (((max(4394846795120923791, (arr_12 [8])))))));
                                var_32 = ((+((59 << ((((max((arr_25 [i_10]), 253))) - 240))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 = (797855803 > -var_14);
    #pragma endscop
}
