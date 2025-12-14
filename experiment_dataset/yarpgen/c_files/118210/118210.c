/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (var_13 || var_1);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = min((((((var_4 && (arr_0 [i_1] [i_0]))) ? ((var_9 ? var_3 : (arr_5 [i_0]))) : 0))), ((var_12 ? var_14 : var_12)));
                        var_18 = ((var_12 ? var_3 : ((((!var_14) <= var_15)))));
                        var_19 = var_3;
                    }
                }
            }
        }
        var_20 = (min(var_20, ((min((((var_11 >= var_5) ? -11113261782798105030 : (!var_8))), (((-(~var_2)))))))));
        var_21 = ((((-(((arr_0 [i_0] [i_0]) ? var_15 : var_7)))) >> (var_8 - 5531482645977906808)));
        var_22 = ((!((((((var_8 ? var_4 : var_6))) ? -var_3 : (~var_10))))));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    var_23 ^= var_2;
                    var_24 = var_7;
                    var_25 = ((((arr_7 [i_4 - 1] [i_4] [i_5] [i_4 - 1]) >> (var_10 - 22861))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_28 [i_5] [10] [10] [10] [i_8] [i_4 - 1] = (((((max(var_4, var_0))))) | var_8);
                                var_26 ^= (((((var_0 + var_0) ? var_4 : var_7)) <= ((var_12 ? ((var_8 ? var_9 : var_0)) : (var_4 % var_3)))));
                                arr_29 [i_4 - 1] [i_5] [0] [i_4 - 1] [i_4] = var_10;
                                var_27 = ((-(min((arr_19 [0] [i_4 - 1] [i_4 - 1]), ((min((arr_1 [i_8]), var_14)))))));
                            }
                        }
                    }
                }
            }
        }
        arr_30 [i_4] = ((-((-(0 || 11113261782798105034)))));
        arr_31 [i_4] = var_10;
        var_28 &= (((((-((var_15 ? var_2 : var_10))))) ? ((-var_3 ? var_8 : ((var_6 ? var_10 : var_13)))) : (~var_14)));
        var_29 = var_13;
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_30 = (max(((64 ? 0 : 11113261782798105030)), ((((-16 ? 1 : 18446744073709551615)) ^ var_8))));
        var_31 = (max((-2147483647 - 1), -27));
        var_32 = ((((((arr_22 [i_9] [i_9] [4] [i_9]) ^ (arr_12 [i_9] [i_9] [i_9] [i_9])))) ? (((((~(arr_3 [i_9] [i_9])))))) : ((((var_0 ? var_8 : var_11)) ^ var_14))));
    }
    var_33 = var_14;
    #pragma endscop
}
