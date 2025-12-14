/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (min(((((max((arr_0 [i_0 - 1]), (arr_0 [i_0])))) && var_9)), (min((min(var_2, (arr_1 [i_0 - 1]))), (arr_1 [i_0 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] = ((((arr_4 [i_0 - 1]) || (arr_4 [i_0 - 1]))));
                            arr_14 [i_0] [i_0 - 1] [i_1] = (max(((((!(arr_9 [i_0] [i_0 - 1] [i_0 - 1] [4]))) ? ((((!(arr_4 [i_0 - 1]))))) : (arr_8 [i_1 - 1]))), (arr_11 [i_1])));
                            arr_15 [i_0 - 1] [i_1] [i_2] [i_3] [16] &= (min((min(var_8, (((arr_6 [i_0 - 1] [i_0 - 1] [i_0] [i_0]) ? 11562216255324032767 : 6884527818385518835)))), ((((((arr_1 [14]) ? 11562216255324032752 : var_8)) != (arr_11 [1]))))));
                        }
                    }
                }
                var_10 -= ((((min((arr_0 [i_1 + 1]), (arr_8 [i_1 + 2])))) ? (min((((arr_12 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0]) ^ (arr_9 [i_0] [17] [i_1] [i_0]))), -11562216255324032767)) : ((-(((arr_8 [i_0]) | 11562216255324032767))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_20 [i_1] [i_1] [i_4 + 3] [i_5] = ((((var_6 && (((var_9 ? (arr_6 [i_0] [i_1] [i_0] [i_5]) : (arr_0 [i_1])))))) ? (arr_2 [i_0 - 1] [i_1 + 1]) : ((((6884527818385518849 << (arr_7 [i_0] [i_1 + 1] [i_4 - 2])))))));
                            var_11 -= var_9;
                            var_12 = (min(var_12, (((((((((arr_16 [i_0] [i_1] [i_4] [10]) ? (arr_18 [i_0] [i_0] [1] [0]) : (arr_4 [i_1])))) ? var_6 : (max((arr_7 [i_0 - 1] [1] [i_4]), 1041524848769468021)))) >> ((((var_7 | (arr_4 [i_0]))) - 18442339154143067620)))))));
                            arr_21 [i_0] [i_1] = (((((((arr_18 [i_4 - 1] [i_1 + 2] [i_0] [i_0 - 1]) > (((arr_10 [i_0] [i_1 - 1] [i_1] [i_5]) ? (arr_9 [i_5] [i_4 - 1] [i_1 + 1] [i_0]) : (arr_10 [i_0 - 1] [i_1 - 1] [i_1] [i_1 - 1]))))))) > ((((((arr_11 [i_1]) * 16821139945220162774))) ? (((-(arr_10 [i_0 - 1] [i_0 - 1] [i_1] [i_5])))) : 11562216255324032767))));
                            arr_22 [i_0] [i_1 + 3] [i_1] = max((arr_18 [1] [1] [i_1 + 1] [i_0]), (((!(arr_11 [i_1])))));
                        }
                    }
                }
            }
        }
    }
    var_13 *= (~(min(var_2, -var_1)));
    var_14 = (max(-var_3, (min(1041524848769468021, (var_7 & var_4)))));
    var_15 ^= (var_6 ^ ((((-var_9 >= (min(17405219224940083595, var_4)))))));
    #pragma endscop
}
