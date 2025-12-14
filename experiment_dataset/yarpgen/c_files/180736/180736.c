/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (max(var_19, ((var_18 ? ((-0 + (((arr_1 [i_0]) ? 4 : -7321689807669703808)))) : var_2))));
        var_20 = (!-1);
        var_21 = (12979811883953380002 || 0);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_22 = var_17;

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_23 &= ((18446744073709551606 ^ (((((min(var_13, 6))) ? (arr_5 [i_2] [i_2] [i_4]) : var_5)))));
                        arr_14 [i_1] [i_2] [10] [i_3] [i_4] = (min(-9275, -1));
                    }
                    arr_15 [i_1] [i_2] = ((((min((((arr_11 [i_1] [i_1] [8] [1]) ? var_11 : -7321689807669703820)), (max((arr_7 [i_1] [i_2] [i_3]), 1))))) ? (((max(65535, 0)))) : (max((((arr_7 [i_1] [i_1] [i_3]) + 0)), (-1 + -69)))));
                    var_24 *= ((42925 ? (((255 ? (((var_12 >= (arr_8 [i_1] [13] [i_3])))) : var_14))) : (max((((19 << (var_1 - 18)))), (min(var_3, (arr_6 [i_1] [i_1])))))));
                }
            }
        }
        var_25 = (arr_5 [i_1] [i_1] [i_1]);
    }
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        var_26 = (((((((((arr_16 [i_5]) > -1))) / (2047 != 0)))) ? ((((((arr_16 [i_5]) / 85))) ? var_4 : ((max((arr_17 [i_5]), (arr_16 [i_5])))))) : var_11));
        var_27 = ((((max((~var_15), 0))) && (((69 ? (!8498228861467280127) : (!7147))))));
        var_28 -= (arr_17 [i_5]);
    }
    var_29 = (max((((!22596) ? (((max(var_10, var_11)))) : ((var_5 ? var_16 : -1)))), (((var_0 ? 25861 : (!1132868871073094522))))));
    var_30 = ((!(((-105 % ((max(var_6, var_18))))))));
    var_31 = ((var_15 ? 6252218351581678541 : 45789));
    #pragma endscop
}
