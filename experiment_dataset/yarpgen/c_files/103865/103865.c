/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(-3550597504615799073, 38));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = -51;
                        var_15 = ((!((min((arr_4 [i_0 - 1]), -3550597504615799053)))));
                    }

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_2] [i_4] = (min(((~((18446744073709551615 >> (65535 - 65520))))), ((max(40910, 6144)))));

                        for (int i_5 = 2; i_5 < 8;i_5 += 1)
                        {
                            arr_18 [i_0] [i_1 - 2] [i_2] [i_1 - 2] [i_5] = (((arr_2 [i_0] [i_1]) ? -218894575348661874 : 3625929711487760548));
                            var_16 -= (max(18446744073709551603, (-111 >= -7450420638376460650)));
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_21 [i_2] [i_1] [i_1] [i_1] [i_1 + 1] = (min(103, -3625929711487760547));
                            var_17 += (min((~-5), (((var_1 || (arr_6 [i_2 + 1]))))));
                        }
                        var_18 |= ((((min((~12758190380642619012), (!var_10)))) ? (((max(27332, var_11)) >> (((max((arr_0 [i_1]), 127)) - 7160235442760110560)))) : (var_9 * var_11)));
                        arr_22 [i_2] [i_2] [0] [i_4] = (max((((min(24635, 12729495386183952988)))), (min((-3625929711487760539 < var_10), (max(var_11, (arr_4 [i_1])))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_19 = var_12;
                        var_20 = (min(var_20, (((((((arr_9 [i_0] [i_1 + 1] [i_2 - 1] [i_2 - 1] [4] [i_7]) ? 4 : (arr_1 [i_7])))) ? 3083711988743781220 : (((arr_10 [7] [i_1] [i_0]) ? var_8 : (arr_4 [i_7]))))))));
                    }
                    var_21 = (min(var_21, (((var_1 ? ((-1267937932 ? 18446744073709551611 : 40923)) : (min(((40910 ? (arr_17 [i_0] [i_1] [i_1 + 2] [i_1 + 2] [i_2 - 1]) : 5688553693066932628)), 65529)))))));
                }
            }
        }
    }
    var_22 = (min(var_6, (!var_4)));
    var_23 ^= var_11;
    #pragma endscop
}
