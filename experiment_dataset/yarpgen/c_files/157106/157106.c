/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = (max(((((arr_11 [i_0] [i_2] [i_1] [i_2 + 2]) ? ((((arr_13 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0]) < 1))) : (((arr_5 [i_0]) ^ (arr_0 [i_0])))))), ((((((arr_8 [i_1] [i_2] [i_3 + 1] [i_4]) ? var_3 : (-127 - 1)))) ? (((var_4 ? (arr_2 [i_0] [i_0] [i_0]) : -1))) : (((arr_13 [i_0] [i_1] [i_2] [i_3 + 1] [i_3 + 1] [i_4]) % (arr_10 [i_0])))))));
                                var_17 = ((((~(arr_11 [i_4] [i_3 + 1] [i_2] [i_1])))) != ((15 & ((max(var_5, 2))))));
                                arr_14 [i_4] [i_3 + 1] [i_0] [i_0] [i_0] [i_0] = (((((((((-9223372036854775807 - 1) > 1)))) - (arr_11 [i_0] [i_0] [i_3 + 1] [8])))) || (((~(max((arr_7 [i_0]), (arr_2 [i_0] [i_1] [i_1])))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [2] [i_0] [i_0] = ((((((1 ? 0 : 33554432)) ? ((((arr_8 [i_0] [i_2 - 4] [i_3] [i_4]) ? (arr_7 [i_0]) : (arr_13 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0])))) : (arr_2 [i_2 - 1] [i_0] [i_0])))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] [i_2] = (((~33554410) > ((min((arr_0 [i_1]), (max((arr_13 [i_0] [i_0] [i_0] [i_2] [i_1] [i_2]), (arr_9 [i_2] [i_1] [i_0]))))))));
                    var_18 ^= (max(511, (((max(var_9, var_1)) / (((max((arr_3 [i_0] [i_1]), (arr_12 [i_0] [i_1] [i_2 + 2])))))))));
                }
            }
        }
    }
    var_19 = (max(var_2, (max((226 ^ var_5), ((1 ? 1 : var_12))))));
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_20 = ((~(((!((min((arr_23 [i_5] [i_5 - 1] [i_6]), -32757))))))));
                var_21 ^= ((!(((arr_23 [i_5 + 1] [i_5 + 1] [i_5 - 2]) != -32767))));
                var_22 = (max(var_22, ((max(((((arr_18 [i_5 - 3]) + (arr_18 [i_5 - 3])))), (((max(var_8, -8613019107119433251)) - -var_7)))))));
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
