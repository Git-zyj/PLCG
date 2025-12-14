/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (min(1008, (((((arr_0 [i_0]) ? var_5 : var_8))))));
        var_16 ^= 1020;
        var_17 = (((-1008 + 2147483647) >> 1549954819));
        var_18 = (min(var_18, (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_19 = 1;
            arr_6 [i_0] = (((((255 > 1) ? (var_7 | 63339) : (arr_4 [i_0] [i_1]))) >> ((((41219 ? var_11 : (arr_5 [i_0] [i_1]))) + 1200133652))));
            arr_7 [12] = ((arr_4 [i_0] [i_1]) >= ((-14 & ((min(2196, (arr_4 [2] [i_0])))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_20 &= var_3;
                            var_21 *= ((1282634521 ? 32751 : (1379214181 && 806639523)));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
            {
                var_22 *= ((((!3488327770) ? (!1) : (arr_12 [5] [5] [i_5] [i_6]))));
                arr_19 [i_0] [i_5] [i_5] [i_6] = 3778132089;
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
            {
                arr_23 [i_0] [i_5] [i_7] = ((((7931599190045048520 || (arr_10 [i_0]))) ? 14388 : (-1719531274 > var_1)));
                var_23 = (min(var_23, (((((514549944 >= (arr_20 [1]))) ? ((806639551 ? -835525490 : 806639526)) : (!var_13))))));
            }
            for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
            {
                var_24 = 32766;
                var_25 = (min(109, 1));
            }
            var_26 ^= (((!65535) ? ((-(arr_9 [i_0] [i_5] [i_5] [i_5]))) : (arr_9 [i_0] [i_5] [i_5] [i_5])));
            arr_27 [i_0] [i_5] = ((!((((arr_0 [i_5]) ? 3488327776 : var_4)))));
            var_27 = (((arr_13 [i_0] [i_0] [i_5] [i_5] [i_5]) + ((8133326470755560109 ? 1 : (arr_13 [i_5] [i_0] [i_0] [i_0] [i_0])))));
            arr_28 [i_5] [i_0] = (min(1793495688810448546, -1));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            var_28 *= ((!(((9905928552432112849 ? (arr_1 [i_9]) : var_6)))));
            arr_32 [i_0] [i_9] = 5685352047868624535;
            var_29 = var_5;
            var_30 = (3840 ? (3778132093 < var_1) : ((var_4 ? (arr_18 [i_9] [i_9 + 2] [i_0] [i_0]) : (arr_8 [i_0] [6] [12]))));
        }
    }
    var_31 = (min(var_31, 1));
    #pragma endscop
}
