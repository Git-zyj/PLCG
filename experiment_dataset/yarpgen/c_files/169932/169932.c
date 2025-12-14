/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((((var_6 ? var_4 : 61))) || 127))) << (((((max(17, var_3))) && var_9)))));
    var_11 = var_7;
    var_12 = (((min((1732798701948701438 != var_0), (min(0, var_1)))) ? (min(var_5, (max(var_6, var_9)))) : (((((max(var_5, var_1))) ? var_3 : var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((((((-(arr_0 [i_2] [i_0])))) ? (max((arr_7 [1] [i_1] [i_0] [i_0]), (max((arr_5 [i_2]), (arr_1 [i_2]))))) : (arr_0 [i_0] [11]))))));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_14 = (arr_11 [5] [i_1] [i_3] [i_2]);

                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            var_15 = ((((min((arr_5 [i_3 - 1]), (arr_5 [i_3 - 1])))) ? 15 : (arr_7 [i_4 + 2] [i_3 - 1] [i_3] [i_3 - 1])));
                            var_16 = (arr_1 [i_3 - 1]);
                        }
                        var_17 = ((((((arr_12 [i_3 - 1] [i_3] [i_3 - 1] [i_2] [i_2] [i_2]) ? (arr_12 [i_3 - 1] [5] [i_3 - 1] [i_2] [i_0] [i_0]) : (arr_12 [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_3] [i_2])))) ? (arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_1]) : (((arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? (arr_12 [i_3 - 1] [i_3] [i_3 - 1] [6] [i_3] [i_1]) : (arr_12 [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_2] [i_2])))));
                        arr_14 [i_0] [i_3] = var_9;
                    }
                    arr_15 [i_0] [1] [i_0] = ((((max((arr_5 [i_1]), (arr_11 [i_1] [i_1] [i_2] [2])))) ? (((3486895123 >= 196103316) ? ((((arr_4 [i_0] [i_0] [i_0]) ? 1 : (arr_1 [i_2])))) : (((arr_10 [i_1] [i_1] [i_1] [i_1]) - -29271)))) : ((max((((arr_7 [i_0] [i_1] [4] [i_2]) * (arr_8 [i_2]))), ((61 << (arr_8 [i_0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
