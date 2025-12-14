/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((max(var_17, ((4917882524613506779 ? -17 : -42))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_17;

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_21 = (max(var_21, (((~(arr_3 [i_0] [i_0] [i_0]))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] &= 9;
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_0] = var_18;
                    var_22 = (((((var_4 & (arr_7 [i_0] [i_0])))) ? 4917882524613506777 : (((-15 ? 1735973349 : 122)))));
                    arr_13 [i_1] [i_0] [i_1] = ((-(((((arr_1 [i_0]) % var_0)) % var_9))));
                    var_23 = -8650227958747413100;
                }

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    arr_16 [i_0] [i_0] [i_0] [i_0] = (((!(~16384))) ? (max((((((arr_15 [i_0] [i_1] [i_1]) + 9223372036854775807)) << (((var_17 + 151) - 37)))), ((2410226481 ? var_3 : (arr_11 [i_1] [i_1]))))) : (((((arr_3 [i_0] [i_0] [i_4]) <= (arr_3 [i_0] [i_1] [i_1]))))));
                    var_24 = (max(var_24, (((((409089049 ? (((arr_6 [i_0] [14] [i_4]) ? (arr_10 [i_4] [i_1] [i_1] [i_1]) : var_12)) : 4917882524613506777)) ^ (3088631212 <= var_13))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_25 = var_16;
                                var_26 = (((1206336083 < (var_12 / var_6))));
                            }
                        }
                    }
                }
                var_27 = (max(var_27, (((4917882524613506781 ? (((((min((arr_3 [i_0] [i_0] [i_0]), 1206336083)) > ((~(arr_11 [i_0] [i_0]))))))) : (((var_19 ? var_10 : (arr_20 [i_1] [i_1] [i_0] [i_1] [i_0] [i_0] [i_0])))))))));
            }
        }
    }
    var_28 = (((((-42993 ? var_2 : (var_18 & -29)))) ? var_16 : (((((-4917882524613506779 ? 0 : 3088631212))) ? ((min(var_2, var_7))) : 32766))));
    #pragma endscop
}
