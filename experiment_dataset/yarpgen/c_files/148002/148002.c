/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((--1023) & (min((((var_13 ? 1 : var_10))), var_18))));
    var_21 = (-var_5 * 1009);
    var_22 -= (var_4 | var_11);
    var_23 = var_19;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_24 = (((!-4925014417406252348) ? (((((((var_12 ? 15511138311749970422 : 17817896643038607557))) || 4925014417406252348)))) : (((1 ? var_0 : 64527)))));
                                var_25 = (((1 ? ((max(1134020988, 1023))) : (min(4925014417406252363, var_11)))));
                                arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_2] = ((((min(4785951826889461850, 17817896643038607557))) ? -4925014417406252326 : (((arr_1 [i_1 - 1]) + (arr_0 [i_2 - 1] [i_4])))));
                                var_26 = ((!(var_4 & 1035)));
                                var_27 = (min((~var_4), (((var_10 ^ 0) + ((1 ? 1 : 9035216167613202295))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_28 -= (max((((-((var_1 ? (arr_7 [i_0] [i_2] [i_0] [i_5]) : 99))))), (min(((((arr_1 [i_6]) ? 65207 : var_4))), var_5))));
                                arr_17 [i_2] [i_1] [i_2] [i_5] [i_6] [i_6] = (((arr_13 [i_2] [i_1] [i_2] [i_5]) ? ((-(var_17 + var_3))) : ((13525580084647459991 ? 2903511874197491053 : (2147483647 - 220)))));
                                var_29 = ((0 ? (arr_8 [i_1] [i_1] [i_2]) : (((((8086416258279092337 ? 3160946287 : (arr_6 [i_5] [i_1] [i_0])))) ? (((-4925014417406252345 ? var_11 : var_10))) : -17506678726454961398))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
