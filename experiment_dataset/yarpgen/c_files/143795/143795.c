/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_6 % (((var_10 ? var_1 : var_4))));
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (((-(arr_5 [i_0 - 1] [4] [i_2] [i_2 - 1]))) <= (((12313906690416498307 > (min(var_4, var_2))))));
                    var_15 &= -1758;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_16 = ((((+(((arr_5 [i_1] [i_1] [3] [i_3]) * (arr_0 [i_1] [1])))))) ? ((((((((arr_3 [i_3]) - 32759))) <= ((var_5 ? (arr_3 [3]) : var_0)))))) : ((((max(var_0, (arr_6 [i_0] [i_1] [i_0] [i_3])))) ? (arr_8 [i_0] [i_1] [15] [8]) : (((max(1758, var_5)))))));
                        var_17 = (min(var_17, (((((((var_10 ? 15773270641218056475 : (arr_6 [i_0] [i_0] [i_0] [i_0]))) - (!1))) << (var_10 - 58932))))));
                    }
                    var_18 = ((((var_9 << ((var_0 ? 1 : 0)))) % ((~(arr_2 [i_0 - 1])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    var_19 |= ((-(arr_13 [i_6] [8] [5])));

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_20 = (((((var_11 ? 15773270641218056475 : (arr_10 [i_5])))) ? (max((arr_12 [i_4 - 2] [i_4 - 2] [i_4 - 1]), (arr_12 [i_4 + 1] [i_4] [i_4 + 1]))) : (min(var_8, (arr_12 [i_4 + 1] [11] [i_4 + 1])))));
                        var_21 = (15773270641218056475 ? 1 : (((arr_13 [i_4 - 1] [1] [i_4 - 1]) ? (arr_13 [i_4 - 1] [1] [i_4 - 1]) : var_4)));
                        var_22 = (min(var_22, (((((-1758 ? (~15465576254932212873) : (((arr_9 [1]) % (arr_9 [1]))))) << (((((arr_12 [i_4 - 2] [i_4 - 1] [i_4 - 2]) & 16256)) - 2632)))))));
                        var_23 = (max(var_23, ((max(((var_0 ? (var_1 * var_6) : (((arr_10 [14]) ? (arr_9 [i_5]) : 26035)))), 4312925678539166799)))));
                    }
                    var_24 ^= (min(((((var_1 ? (arr_10 [i_5]) : 17285546106819725507)) % ((var_1 ? var_2 : 1)))), (((-2981167818777338742 ? -var_11 : (var_3 > var_10))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_24 [i_4] [i_5] [8] [5] [i_9 - 1] [i_6] [8] &= var_0;
                                arr_25 [8] [i_5] [8] [6] [17] [0] [17] = max((((!var_3) ? ((((var_5 != (arr_13 [i_4] [0] [7]))))) : ((1 ? 18 : var_0)))), ((((~(arr_21 [16] [i_4] [12] [i_8]))))));
                                var_25 = arr_10 [17];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
