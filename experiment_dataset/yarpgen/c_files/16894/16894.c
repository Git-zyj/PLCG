/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((73 ? -3415231925115615160 : -73));
    var_14 *= (var_9 | (var_1 < var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (min((((arr_4 [i_1] [i_0]) ? var_9 : -104)), (arr_4 [i_0] [i_1])));
                var_16 = (max(var_16, (!1233507574583763545)));
            }
        }
    }

    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_17 = (min(var_17, ((max(-23657, 5647346596507885522)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_13 [i_2] = (!((max((max((arr_4 [i_3] [i_3]), 9484923699847185924)), 18446744073709551615))));
                    arr_14 [i_4] [i_2] = (((arr_2 [i_2] [i_2]) ? (((max(21255, -1747242259)))) : (max(7849288407847695992, 7748007735388980975))));
                    var_18 += (((min(65535, 10123226171976048236))) ? (max((arr_0 [i_2 - 1]), (arr_12 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1]))) : (arr_5 [i_2 + 1] [i_2 - 1]));
                    var_19 = (~(((arr_11 [i_2 + 1] [i_3] [i_4]) ? (((arr_8 [i_2]) ? var_0 : 3463363164)) : 1288644177)));
                }
            }
        }
        var_20 -= (((!((min(10123226171976048230, 389444855))))) ? ((min(var_5, (arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1])))) : ((-389444856 ? ((-5647346596507885523 ? -1233507574583763545 : var_8)) : (arr_6 [i_2 + 1]))));
        var_21 = (min((--866941229), 2305843009213693952));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = (max(70368744177663, 255));
        var_22 = (max(var_22, ((127 / (arr_15 [i_5])))));
        var_23 |= (arr_0 [i_5]);
    }
    #pragma endscop
}
