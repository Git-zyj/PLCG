/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 *= (((((2518036880 ? (~-24069) : (!103)))) ? 3392005896839880717 : (((-(min((arr_0 [i_0]), -825836745)))))));
        arr_3 [i_0] = (((2518036880 && -126) ? (((!1184529255625678632) ? 255 : (max(2477114225198845518, 2199813383244448813)))) : (arr_0 [i_0])));
        var_20 = (min(var_20, (((~var_9) <= (((((107 ? (arr_2 [i_0]) : (arr_1 [i_0]))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_21 -= (128 * 1);
        var_22 = 2700350484;
        var_23 &= (8172274524034951254 + (106 & 4072500386));
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] [5] &= (~125);
        arr_10 [i_2] = (((min(var_12, var_10)) + ((((!(((var_11 ? 130 : (arr_2 [i_2 + 3]))))))))));
    }
    var_24 = (((!0) >> (1476198912 - 1476198884)));
    var_25 = (!156);
    var_26 = (max(var_26, (122 ^ 2147483643)));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                var_27 = ((!(((-931169117 ? var_12 : ((var_10 ? (arr_7 [i_3]) : (arr_12 [i_3]))))))));
                arr_18 [i_3] = (((54389 ? 18446744073709551615 : 9156376074125707285)));
                var_28 &= (((((!(arr_8 [i_3])))) >> ((((min(var_13, (arr_1 [i_4])))) - 15062))));
            }
        }
    }
    #pragma endscop
}
