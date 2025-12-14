/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = ((var_3 >= ((max(var_5, (!1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            var_16 = var_10;
                            arr_14 [i_0] [i_0] [i_4] [21] [i_0] = (arr_2 [i_2]);
                            arr_15 [i_4] [i_1] [i_2] = (max((arr_6 [i_0] [i_1] [i_2]), (max((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_2])))));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            arr_19 [i_5] [i_2] [i_0] = ((1 >= (((arr_8 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]) ^ (arr_8 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1])))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_5] = ((2868290464 & (((((((arr_7 [i_0] [i_3] [i_5]) || (arr_10 [i_3 - 1]))))) | var_7))));
                        }
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            arr_23 [i_6] [i_6] = (max((max((1 ^ -19), (max((arr_8 [i_0] [i_1] [i_1] [i_3]), var_8)))), (((!(((1 ? (arr_9 [i_1] [i_2] [i_2] [i_6 - 1]) : -27))))))));
                            arr_24 [i_0] [i_6] = -19;
                            arr_25 [i_0] [i_1] [i_0] [i_6] [i_6 - 1] [i_6 - 1] [i_1] = ((var_2 & (((-18505 & 7702641499808677138) | (arr_22 [i_1] [i_6] [i_6 - 1] [i_6] [i_6 + 1] [i_6])))));
                            var_17 ^= (((((1 ? ((var_4 ? (arr_4 [i_3] [i_6 - 1]) : 1)) : (((arr_21 [i_0] [i_1] [i_3 - 1] [i_1]) ? (arr_21 [i_0] [i_0] [i_0] [14]) : var_2))))) ? ((((arr_1 [i_3]) >> ((111 ? 1 : (arr_21 [i_0] [i_0] [i_0] [i_0])))))) : ((((arr_1 [i_0]) < var_2)))));
                        }
                        arr_26 [i_0] [i_0] [i_2] = ((((max(10744102573900874459, (arr_12 [i_0] [i_3 + 2] [i_1])))) || ((((arr_12 [i_0] [i_3 + 2] [i_2]) ? (arr_12 [i_0] [i_3 + 2] [i_2]) : (arr_12 [i_0] [i_3 - 1] [i_2]))))));
                    }
                    for (int i_7 = 3; i_7 < 23;i_7 += 1)
                    {
                        arr_30 [i_1] = ((~(max(((((((arr_17 [i_7] [i_7 + 1] [i_7 - 3] [i_7 - 3]) + 2147483647)) << (26 - 26)))), -3111676141816802391))));
                        arr_31 [1] [i_7 - 2] = (1950160828618936470 % -19);
                        arr_32 [i_0] [i_0] [i_0] [i_0] = -31;
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_18 = 7702641499808677132;
                            var_19 ^= ((7702641499808677157 * ((((arr_11 [i_0] [i_1] [i_2]) >> (((((-26011 + 2147483647) >> (var_9 - 31453))) - 481)))))));
                        }
                        arr_38 [i_0] [18] = var_10;
                    }
                    var_20 = (arr_1 [i_0]);
                    arr_39 [i_0] [16] [i_2] [i_2] = (max((26011 || 990868215), (max(15330622120991116240, 55))));
                    arr_40 [i_0] = arr_37 [i_0] [i_0] [i_0] [i_0] [i_0];
                }
            }
        }
    }
    var_21 = var_8;
    #pragma endscop
}
