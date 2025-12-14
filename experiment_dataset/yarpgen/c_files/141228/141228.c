/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((((-var_5 ? var_15 : ((0 ? -89 : 38)))) & var_10));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((+((((arr_0 [i_0] [i_0]) >= ((((arr_0 [i_1] [i_0]) ? 38 : -25037)))))))))));
                    arr_8 [i_0] [9] [i_0] [i_2] = 480;
                    var_18 = (i_2 % 2 == 0) ? ((((((arr_3 [i_0 + 2] [i_1 + 1] [i_2]) ? 217 : (arr_2 [i_2]))) >> ((((var_10 | ((0 ? (arr_0 [i_2] [i_1]) : (arr_6 [i_2]))))) - 1155774107))))) : ((((((arr_3 [i_0 + 2] [i_1 + 1] [i_2]) ? 217 : (arr_2 [i_2]))) >> ((((((var_10 | ((0 ? (arr_0 [i_2] [i_1]) : (arr_6 [i_2]))))) - 1155774107)) - 863058481)))));
                    arr_9 [i_2] [i_1] [i_2] = (min((arr_5 [i_0 - 1] [i_1 + 1]), (!114)));
                }
            }
        }
    }
    #pragma endscop
}
