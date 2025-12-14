/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 516935615;
    var_21 += ((((var_10 ? 2217886856 : (var_19 / var_0))) ^ ((((!(-13651 >= var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_22 = ((~((((((arr_4 [i_1]) & (arr_4 [i_1])))) ? (arr_4 [i_1]) : (arr_0 [i_0] [i_0])))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_10 [i_1] [14] = ((var_15 ? (min((arr_8 [i_0] [i_1 + 2] [i_1] [i_1] [i_2] [i_1]), (arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_1] [i_2] [i_3]))) : (((arr_6 [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? ((var_6 ? (arr_8 [i_2] [i_1 + 1] [i_1 + 1] [i_1] [i_3] [i_0]) : 218)) : (arr_8 [i_0] [8] [8] [i_1] [i_3] [i_3])))));
                        arr_11 [i_1 - 1] [i_2] &= var_4;
                        var_23 ^= (arr_9 [i_0] [i_3] [i_2] [i_3] [i_2]);
                        arr_12 [i_1] [i_1] [21] = ((!((min((arr_8 [i_0] [i_0] [i_0 - 1] [i_1] [i_0] [i_0]), (arr_7 [i_1]))))));
                        var_24 &= (arr_5 [i_2] [i_2] [i_2] [i_2]);
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_25 = (min(var_25, var_1));
                        arr_16 [i_1] [i_1] [i_2] [i_1] [i_4] = 3778031681;
                        arr_17 [i_1] [21] = (((arr_3 [6] [6]) ? ((~(min((arr_2 [i_0] [i_1]), var_9)))) : (~-16045)));
                    }
                    arr_18 [17] [i_1 + 2] [i_1] [i_1] = var_13;
                    var_26 += -1225256844;
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_27 = arr_19 [i_1] [i_5];
                    var_28 = (((((84 + (arr_8 [9] [i_0] [9] [i_1] [5] [5])))) ? ((264036683 - (arr_7 [i_1]))) : (arr_14 [i_0] [i_1] [i_5] [i_0])));
                    var_29 = (arr_7 [i_1]);
                    arr_21 [i_5] [i_1 + 1] [i_1] = ((((1658783034814780681 / (arr_1 [i_0 + 2] [i_0]))) != var_13));
                    arr_22 [i_0] [i_1] [13] [i_1] = (((min(15583213797681516877, -25209)) + (697838655 || 2601515630)));
                }
                arr_23 [i_1] [i_1] = ((((((arr_5 [i_1] [i_1] [i_1 + 1] [7]) ? (((arr_20 [i_1 + 2] [i_1 + 1] [15] [i_0]) ? 13921541936438746572 : (arr_2 [i_0] [i_0]))) : (arr_2 [i_0 + 1] [i_0 - 2])))) ? ((((-1929793423 ? (arr_6 [i_0] [i_0] [i_1]) : 10252542829930745511)) >> (-222419489 - 4072547746))) : var_3));
                arr_24 [i_0 - 1] [i_1] = ((1593459411 <= (~1)));
            }
        }
    }
    #pragma endscop
}
