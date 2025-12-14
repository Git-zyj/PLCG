/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((min(244, var_5)) ^ 2734217595)), 2734217595));
    var_13 = (max(var_13, (((var_0 ? var_1 : (var_11 + var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [19] = ((!((((((arr_0 [i_0]) ? (arr_2 [i_0] [i_1] [i_1 - 1]) : (arr_2 [i_0] [i_1] [i_1]))) | (arr_2 [18] [i_1] [i_1 - 1]))))));
                arr_5 [i_0] [10] [1] = (max((max((((~(arr_0 [i_0])))), ((2734217595 ? 1560749701 : 2734217595)))), ((((((arr_2 [1] [9] [i_0]) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((arr_3 [22] [22] [i_1 - 1]) ? (arr_3 [19] [i_1] [i_1]) : (arr_2 [17] [i_1 - 1] [i_1 - 1])))))));
                var_14 ^= ((((((-(arr_1 [15] [i_0]))) ? ((((!(arr_3 [i_1] [i_0] [i_0]))))) : (((arr_1 [i_0] [i_1]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_1] [i_1])))))));
                arr_6 [i_0] [i_0] [i_1] = (((((((2734217595 ? 1560749723 : 2734217595))) ? (min((arr_2 [i_0] [i_0] [i_1]), (arr_0 [i_1]))) : (arr_0 [i_1 - 1])))) ? (((arr_1 [i_0] [i_0]) ? (arr_2 [i_0] [i_1] [i_1]) : (((((arr_2 [7] [i_0] [i_0]) && (arr_3 [i_1 - 1] [i_1] [i_1 - 1]))))))) : ((((!1560749701) ? (((arr_2 [12] [i_1] [10]) ? (arr_1 [i_0] [i_1]) : (arr_2 [i_0] [12] [12]))) : (((arr_0 [i_1 - 1]) - (arr_2 [i_0] [i_1] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
