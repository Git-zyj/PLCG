/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_12 = (max(((var_6 ? (((arr_3 [i_0]) & var_1)) : (var_8 & 9129337093102186416))), (((((var_6 ? var_10 : var_0)) < ((max(0, var_9))))))));
                        var_13 = ((!((max((((229 ? 15517 : -15535))), (min(var_11, 14947)))))));
                        arr_13 [i_1] [i_1] = var_5;
                    }
                }
            }
        }
        var_14 -= (max((((min(var_5, var_4)))), (min((arr_4 [i_0] [i_0] [i_0]), -59))));
        arr_14 [i_0] = (max(((var_3 / ((var_8 ? var_11 : var_7)))), (((~((min((arr_0 [15]), var_4))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_15 += (((arr_18 [i_4] [i_4]) - var_10));
        var_16 = (min(var_16, (arr_17 [i_4])));
    }
    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            arr_26 [i_5] [i_5] = (((arr_24 [i_5]) % 3944608198));
            arr_27 [i_5] [i_6] = (((arr_20 [24] [3]) && (0 ^ var_8)));
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_17 = ((+(((arr_30 [i_5]) ? (arr_30 [i_5]) : var_3))));
            var_18 -= (max(((var_9 ? (((-(arr_24 [i_5])))) : (65535 ^ var_11))), (((123 & (!var_4))))));
            var_19 = ((var_0 ? ((((arr_29 [i_5 - 2]) != var_8))) : (((((min(var_0, (arr_22 [i_5] [i_5] [i_5])))) >= ((var_7 ? (arr_28 [i_5 + 1] [i_7] [i_5 + 1]) : var_8)))))));
            var_20 = (var_11 & -var_10);
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 24;i_8 += 1)
        {
            var_21 = (((arr_29 [i_5]) + (-15496 || 918157648)));
            arr_33 [i_5] [7] [i_5] = (-2147483639 > 12);
        }
        var_22 = (!var_8);
        var_23 = (((((max(var_2, var_9))) + (((var_7 <= (arr_22 [1] [i_5] [i_5])))))) + (min(135, (arr_32 [i_5] [i_5]))));
    }
    var_24 = var_6;
    #pragma endscop
}
