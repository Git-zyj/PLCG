/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 26616;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = ((48162 ? (max(((17373 ? var_0 : 4294967295)), 38939)) : (((3990302907949176326 & 14456441165760375308) ? 4294967295 : 253))));
        var_20 = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_16)) & (((var_15 ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_21 = (max(var_21, ((min(((var_0 ? (((((arr_0 [i_0]) && 18696)))) : (min(5156018190021601385, 107)))), (~4096))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        var_22 = ((var_7 ? (arr_2 [i_1] [i_1]) : (((arr_2 [i_1] [i_1]) - 17373))));
        var_23 = (!-26243);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_24 *= (((38907 % var_7) ? (arr_2 [i_4] [i_2]) : (~14456441165760375301)));
                    var_25 = (min(var_25, (arr_3 [i_3] [i_3])));
                }
            }
        }
        var_26 ^= ((var_3 ? (arr_9 [i_2] [i_2]) : (arr_9 [i_2] [i_2])));
        var_27 *= (~1);

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_14 [i_2] [i_2] = 26617;
            var_28 = (((((var_2 ? 21 : (arr_9 [i_2] [i_5])))) ? ((38907 ? (arr_2 [i_2] [i_2]) : 55305)) : (((((arr_13 [i_2]) < 5204664404677617469))))));
        }
        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            var_29 = (max(var_29, (((-125 / (arr_16 [i_6 + 1] [i_6 + 1]))))));
            var_30 = var_12;
            var_31 = (((70368744177663 && 4294967295) && 1));
            arr_18 [i_2] [i_2] [i_2] = ((+((var_7 << (((var_9 + 135) - 13))))));
        }
    }
    for (int i_7 = 2; i_7 < 10;i_7 += 1)
    {
        var_32 = (max(var_32, (((-(((arr_12 [i_7 + 1] [i_7]) + var_2)))))));
        var_33 = (((arr_21 [i_7 - 1]) ? -48192 : (arr_21 [i_7])));
        var_34 = var_17;
    }
    #pragma endscop
}
