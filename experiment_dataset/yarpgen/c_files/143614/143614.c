/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((min((((var_3 & (~var_6)))), ((var_8 & (var_8 % var_0))))))));
    var_11 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 &= (max((arr_9 [i_0] [i_0 - 2]), (max((arr_3 [i_0 + 3]), (arr_9 [i_0 - 2] [i_0 + 2])))));
                    arr_10 [17] &= (max((((!(var_1 && var_1)))), (((((1 ? var_2 : 351471645035605973))) ? 1 : (((arr_4 [13] [i_2] [9]) ? (arr_9 [i_0 + 2] [1]) : 14))))));

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_13 = (max(var_13, ((min((min(16990, 8254850078628710274)), (((max((arr_4 [i_0] [i_3 + 1] [18]), 3003496513924357946)))))))));
                        var_14 = (((((((min(var_8, 1))) ? var_0 : (arr_4 [i_3 + 1] [i_1] [i_0])))) ? (((min(1, var_4)) ? (max((arr_6 [i_0] [i_0] [18]), var_2)) : (2040 || 1))) : (arr_4 [i_0] [i_0 - 2] [i_0])));
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        arr_16 [5] [i_1] [5] [i_4] = -2043;
                        var_15 &= ((((35399695311091478 ? (arr_5 [2] [i_4 + 2]) : (((27644 ? (arr_8 [i_0] [i_1] [i_2] [i_2]) : -24508)))))) ? 18411344378398460148 : (arr_0 [i_2] [i_4]));
                    }
                    var_16 = ((((((max((arr_2 [i_0]), (arr_2 [i_0 + 2])))) & (((arr_4 [7] [1] [i_2]) % 1)))) % (((arr_3 [i_2]) ? (arr_3 [i_2]) : (1 >= var_2)))));
                }
            }
        }
    }
    var_17 = (min(var_0, var_8));
    #pragma endscop
}
