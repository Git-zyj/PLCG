/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        arr_13 [i_0 - 2] [i_1] [i_1] [i_2] [i_2] = ((((((var_12 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))) + 2147483647)) << ((((var_2 ? -2316129496023739960 : 3886220095649151439)) - 16130614577685811656))));

                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            arr_16 [i_4] [1] [i_2] [i_4] [i_4] = var_17;
                            arr_17 [i_0] [i_1] [i_2] [i_2] [i_1] = ((((!(((var_18 ? var_4 : 2316129496023739946)))))));
                            var_20 = ((!((max((max(var_15, 14560523978060400176)), 2064384)))));
                        }
                        for (int i_5 = 3; i_5 < 21;i_5 += 1)
                        {
                            var_21 = var_13;
                            var_22 = (max(0, 18446744073709551615));
                            arr_22 [i_1] [i_2] [i_2] = (6367385543712587157 + -813123207);
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_23 &= ((var_12 | (var_5 | -4590812279643414940)));
                            var_24 = (min(var_24, (((((((-2147483647 - 1) ? 1 : 1803455257))) && (((((min(232, 14))) ? 51803 : (var_15 * 0)))))))));
                        }
                        var_25 = (max((max(15, (arr_24 [i_0] [1]))), ((max(var_19, ((max(173, 1))))))));
                        arr_27 [i_0 - 2] [i_2] [i_2] [i_3] [i_1] = 1125899898454016;
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_26 ^= -5274080458442026548;
                        arr_31 [i_0] [i_7] [i_2] [i_7] = 32767;
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_27 = ((var_16 ? ((-5551318087676033552 | ((max(-17850, var_5))))) : (max(-5551318087676033552, 86))));
                        var_28 ^= var_17;
                    }
                    var_29 = 1559622726;
                    var_30 = 456770196;
                }
            }
        }
    }
    var_31 = var_0;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 8;i_10 += 1)
        {
            {
                arr_39 [i_10] [i_10] = 0;
                var_32 = (max(((((((arr_3 [i_10]) ? var_10 : 65526))) % (min(18446744073709551592, 249)))), 2470187270));
            }
        }
    }
    #pragma endscop
}
