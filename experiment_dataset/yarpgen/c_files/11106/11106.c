/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_11 |= (~var_5);
                        var_12 = (((!103) ? (!9223372036854775807) : var_7));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_19 [17] [i_1] [i_1] [i_1] [i_1] [i_2] = ((-((-106 ? 8912899438648172969 : -7539462791773087311))));
                                var_13 = var_3;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_14 = ((-((var_3 ? var_6 : (var_2 == var_9)))));
                                var_15 = (max(var_15, var_10));
                            }
                        }
                    }
                    var_16 = var_9;

                    for (int i_8 = 4; i_8 < 18;i_8 += 1)
                    {
                        var_17 -= ((var_5 ? (((((var_1 ? var_10 : var_10)) >> (((min(-97, var_9)) + 6991467858786859095))))) : ((((max(var_2, var_8))) ? (((min(89, var_6)))) : (min(var_4, 5191679276181445473))))));
                        var_18 = 105;
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        var_19 = ((max(((var_1 ? var_0 : var_10), -94))));
                        arr_31 [i_2] [16] [i_2] [i_9] = (((-var_7 - (((min(var_0, var_8)))))));
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                    {
                        var_20 *= var_6;
                        var_21 = ((((((-104 ? -104 : var_4)))) ? (!3182) : ((max(var_0, (min(var_10, var_6)))))));
                        var_22 ^= ((!(((((min(-104, 181))) ? ((var_0 ? var_1 : var_7)) : 12006)))));
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        var_23 = ((((((((min(var_8, var_6))) <= ((var_9 ? var_4 : var_4)))))) | (((((-6581419664205883473 ? var_5 : -51))) ? (((var_5 ? 1543226403 : 4294967295))) : -106))));
                        var_24 ^= var_2;
                        arr_37 [i_0] [i_2] [i_2] [i_1] [i_2] [i_0] = ((((min(((var_6 ? var_2 : -90)), var_0))) ? (min((min(4294967295, var_4)), -1024)) : (min(var_4, ((var_5 ? 8126464 : var_3))))));
                    }
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        var_25 = ((36562 ? ((min(var_1, var_2))) : ((var_0 ? (-127 && var_8) : var_5))));
        var_26 *= var_1;
        var_27 -= ((~((0 ? ((var_4 ? var_2 : 7)) : var_10))));
    }
    #pragma endscop
}
