/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 = (max(var_10, (((~(arr_0 [0]))))));
        var_11 *= ((~(arr_1 [4])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_12 = (min(var_12, ((((((0 ? -22845 : -22845))) ? ((253 ? 3237141794 : 1807682705)) : (((min((arr_0 [i_1]), 511)))))))));
        arr_5 [1] = (((((((arr_1 [16]) ? 32767 : (arr_3 [i_1])))) ? ((max((arr_3 [i_1]), 1807682705))) : (min(6937982409285864231, var_9)))) << (((arr_0 [i_1]) - 23835)));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] |= (min(2119656621, ((var_2 ? (arr_8 [i_2]) : 6815))));
        var_13 = (min(var_13, ((((((~var_6) ? (~1) : -26))) ? (((((2119656621 ? -3 : 27751))) ? (arr_8 [12]) : -26)) : ((min((arr_7 [i_2]), 65533)))))));
        var_14 = (((((max(27751, -2119656621)) + ((var_7 ? var_6 : 18))))) ? -25 : (((!(((1807682705 >> (-8290505172920132920 + 8290505172920132929))))))));
        var_15 *= (((var_2 || 1) * (-8808 / 24207)));
    }
    var_16 |= (((((var_1 ? var_0 : var_0))) & ((((max(1, var_2))) + var_6))));
    var_17 = ((!(((((max(1, 7181894740587347867))) ? (226 || var_2) : -13053)))));
    #pragma endscop
}
