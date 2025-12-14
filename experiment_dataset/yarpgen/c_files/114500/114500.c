/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((((((var_8 && var_10) ? ((var_5 ? var_13 : var_7)) : 174))) ? (((var_15 | var_10) % var_7)) : var_4)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = (arr_3 [i_2] [23]);
                    var_19 += (((var_15 ? (arr_6 [i_1] [i_2]) : (arr_0 [21] [0]))));
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                arr_13 [i_3] = (!-1);
                arr_14 [i_0] = var_14;
                arr_15 [i_4] [i_3] [i_0] = ((+((var_12 ? (arr_6 [i_4] [i_3]) : var_9))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_3] [i_4] [i_4] [i_5] [i_6] [i_6] |= var_5;
                            var_20 = (~var_16);
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_21 *= var_15;
                arr_25 [11] [i_7] [i_3] [i_0] = ((((((arr_6 [i_3] [i_7]) ^ var_10))) ^ var_7));
            }
            var_22 = ((~((var_0 - (arr_21 [i_3] [i_3] [i_3] [i_0] [i_0] [i_0] [15])))));
        }
    }

    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_23 = (((arr_6 [i_8] [i_8]) ? (max((arr_12 [i_8] [i_8] [i_8] [i_8]), (~var_15))) : (var_4 == -27756)));
        arr_29 [i_8] [i_8] = (((((arr_12 [i_8] [i_8] [i_8] [i_8]) || (((var_12 ? (arr_28 [i_8]) : (arr_27 [i_8])))))) || var_16));

        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            arr_33 [i_8] [i_9] [i_8] = ((((((arr_1 [i_8]) ? var_6 : var_10))) | ((((var_11 ? var_14 : var_15))))));
            var_24 = (-13524 == -23);
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            var_25 ^= ((-5497664865845366289 ? -113382836280470946 : -1758382159));
            var_26 = (min(var_26, ((((((((((arr_19 [i_10] [i_8] [1]) % var_8))) ? var_6 : ((var_4 * (arr_18 [i_10] [17] [i_10] [i_8])))))) ? (((~(((arr_18 [i_10] [i_10] [i_8] [i_8]) | var_11))))) : ((0 ? -3915664666694107357 : 23)))))));
        }
        var_27 = (min(var_27, ((max((arr_2 [i_8]), (((((max(var_0, var_8))) >> ((2032 ? 15 : 42489))))))))));
        arr_36 [i_8] = (((((0 ? -1 : ((-3915664666694107357 ? 60132 : 1758382150))))) ? (((((26252 >> (1874001239496593707 - 1874001239496593692))) == -13))) : -1758382155));
    }
    #pragma endscop
}
