/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] = var_5;
                var_10 ^= (((((var_1 & ((2120581919 ? 1 : 178))))) ? (((var_0 != var_8) ? (var_9 % var_5) : ((var_9 ? var_7 : var_4)))) : (((((((var_0 ? var_0 : var_8))) == ((101 ? 3211225317949116054 : -16))))))));
            }
        }
    }
    var_11 = (var_3 ^ ((((188 ? 113 : 178)) | var_0)));
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_13 *= (((((var_0 ? var_5 : var_2))) ? (var_8 - var_7) : (var_0 * var_4)));
                    arr_18 [i_4] = (((((var_2 << (((var_9 + 15642) - 23))))) ? (var_1 / var_4) : var_2));
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_14 = (min(var_14, (((((((var_5 ? var_2 : var_0)) ^ (var_7 || var_6))) < (((((var_9 ? var_4 : var_0)) == var_5))))))));
                                arr_28 [i_7 + 1] [i_3] [i_5] [i_3] [i_2] &= ((var_2 > ((var_5 ? var_0 : ((var_1 ? var_4 : var_5))))));
                                var_15 = (min(var_15, (((var_0 ? ((var_0 ? (var_1 > var_1) : (var_4 & var_1))) : var_0)))));
                                arr_29 [i_2] [i_3] [i_2] [i_6] [i_7 - 1] [i_3] |= ((1881921411 ? (((107 > (23017 >= var_0)))) : var_5));
                            }
                        }
                    }
                    var_16 = (max(var_16, ((((var_8 ? ((var_8 ? var_3 : var_4)) : var_2)) == (((var_9 > var_6) ? (((var_4 ? var_9 : var_3))) : ((17387546459316374690 ? 235 : 102753841))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((((var_6 < var_8) ? ((var_7 ? var_5 : var_4)) : (var_6 == var_5))) - ((((((var_9 ? var_8 : var_7)) < (131071 != 77))))))))));
                                var_18 = var_6;
                                var_19 = (max(var_19, (((4 ? 13539581784905108470 : -114)))));
                            }
                        }
                    }
                    arr_35 [i_2] [i_3] [i_3] [8] |= var_8;
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            arr_43 [i_3] [i_11] = ((var_1 + var_3) > ((var_7 ? var_0 : var_5)));
                            var_20 -= var_0;
                        }
                        var_21 = (min(var_21, ((((var_4 && var_3) ? ((var_4 << (var_6 + 966543358))) : (((var_7 ? var_0 : var_8))))))));
                    }
                    var_22 = (min(var_22, var_6));
                    var_23 = (min(var_23, ((((var_7 >= var_0) ^ ((var_7 ? var_7 : var_8)))))));
                }
                var_24 ^= var_4;
            }
        }
    }
    #pragma endscop
}
