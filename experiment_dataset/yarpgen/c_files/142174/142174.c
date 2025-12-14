/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = (max(var_13, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = ((((var_9 ? 511 : (arr_4 [i_1] [i_1] [i_0]))) ^ (((max(15, 14452))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_2] [i_0] [i_0] = ((min(((var_7 ? 16970271488534108547 : 6796650986193365903)), (arr_7 [i_0] [i_1] [i_2] [i_2 - 1]))) < (((((-6796650986193365917 ? (arr_8 [i_0] [i_2]) : (arr_10 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2])))))));
                            var_15 -= ((((!(arr_7 [i_2 - 2] [i_2 - 2] [i_3 + 2] [22])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_16 -= (min(((((((-17707 ? var_8 : 12829546265753460467))) || (arr_6 [4] [i_5] [i_6 + 1])))), ((~(arr_15 [i_7] [i_5] [i_4 - 1])))));
                                arr_28 [i_4] [i_5] [i_6] [i_6] [i_8] [i_8] [i_8] = 1;
                                var_17 += ((((((((arr_0 [i_4]) % 32748))) > (min((arr_17 [i_4 - 1] [i_4 - 1] [i_8]), 11052842746555577321)))) ? (arr_8 [i_4] [i_4]) : ((((arr_26 [i_4] [i_5] [i_6 - 2] [i_4] [8]) ? -496 : 1)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            arr_33 [i_10] [i_5] [i_5] [1] [7] = (((((1476472585175443069 ? 113 : (arr_32 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1])))) || (((var_3 ? 2637545536606227623 : (arr_16 [i_4 - 1]))))));
                            var_18 = ((-(((arr_12 [i_4 - 1] [i_4 - 1]) ? var_7 : 1))));
                            var_19 |= ((var_5 / (((-17731 ? 1 : -615929002412191365)))));
                        }
                    }
                }
                arr_34 [i_4] = ((((min(42965, 1))) ? (arr_31 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (11103529158134683461 && var_11)));
            }
        }
    }
    var_20 ^= var_7;
    #pragma endscop
}
