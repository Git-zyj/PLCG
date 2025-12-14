/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((min((max(var_9, var_13)), (max(var_2, var_12)))), (min(((max(var_13, var_6))), (max(var_12, var_6))))));
    var_15 *= (min((max(((var_13 << (var_9 + 2046298187))), (min(var_2, var_12)))), var_11));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 = (((((((max(var_2, var_6))) ? ((min(var_4, var_8))) : (max(var_12, var_10))))) ? (((max(var_3, (min(var_10, var_0)))))) : (((max(var_1, 87)) >> (((min(var_9, var_8)) + 2046298178))))));
        var_17 += (min(((min(var_9, var_10))), (min(var_3, (min(var_5, var_5))))));
        var_18 = (max(((max((min(-1541108123, 255)), var_12))), 4125890073962177559));
        var_19 |= (min(var_0, var_6));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_20 -= ((var_12 ? ((0 ? -68 : 88)) : ((7571177209896042153 ? 168 : -1469402450))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_21 = ((1359557954525824397 ? 0 : -592242419));
                        var_22 = (((((2003324762 ? 592242413 : 592242418))) || (((var_11 ? var_0 : var_1)))));
                    }
                }
            }
            var_23 = (((((var_1 ? var_12 : var_8))) ? var_0 : ((var_0 ? var_11 : var_2))));
            var_24 |= var_11;
        }
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            var_25 = ((((max((var_0 / var_2), ((max(var_6, var_7)))))) ? (min(var_13, ((var_3 ? var_3 : var_13)))) : ((min(var_4, (min(1, 37)))))));
            var_26 = ((((((max(var_11, var_5))) || ((max(var_8, var_11))))) ? (((1 >> 0) << (((max(592242419, 67)) - 592242403)))) : (min(((var_10 ? var_9 : var_2)), var_4))));
            var_27 = (((((((max(var_7, var_6)))) == (max(1, 9223372036854775807)))) && ((((((max(var_13, var_6)))) | (max(var_3, var_5)))))));
        }
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            var_28 = (((1 % 6395991351660468705) ? (var_3 && var_13) : ((var_0 ? var_9 : var_6))));
            var_29 = var_0;
            var_30 = (var_3 ^ (var_3 || var_12));
            var_31 = var_12;
        }
        for (int i_7 = 2; i_7 < 10;i_7 += 1)
        {
            var_32 = (((((var_3 ? var_4 : var_0))) ? var_8 : (var_4 + var_7)));
            var_33 = ((var_3 & var_10) ? var_3 : ((var_8 ? 145 : 255)));
        }
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            var_34 = ((var_6 ^ var_0) & var_4);
            var_35 = ((-1186506225 ? -124 : 4));
        }
        for (int i_9 = 4; i_9 < 9;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_36 = var_0;
                            var_37 = (2147483642 && 93);
                            var_38 ^= ((((4125890073962177555 << (var_7 - 229))) * 1));
                        }
                    }
                }
            }
            var_39 |= var_1;
            var_40 = (max(var_40, var_12));
            var_41 |= (((((1365490220 ? -2003324762 : var_5))) && 1));
        }
        var_42 = ((var_12 & (191 || -460402035)));
    }
    #pragma endscop
}
