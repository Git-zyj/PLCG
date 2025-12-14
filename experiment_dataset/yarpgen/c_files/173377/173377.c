/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((-((var_4 ? var_0 : var_12)))) - -var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 -= (((((((arr_4 [i_0]) == (arr_5 [i_0] [i_1]))) ? var_3 : (min((arr_1 [i_0] [i_1]), (arr_4 [i_0]))))) << (((((arr_4 [i_0]) ? 214 : (((arr_3 [i_1] [i_1] [i_0]) ? var_0 : var_11)))) - 213))));
                var_15 = (max(var_15, ((((((214 ? ((max(22, (arr_2 [i_0] [i_1])))) : (~0)))) ? ((((max(var_10, 214))))) : ((((max(var_7, (arr_4 [i_0])))) ? (arr_1 [i_0] [i_1]) : (((arr_3 [i_0] [i_0] [i_1]) ? 65535 : var_3)))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_16 = (max(((((max(var_0, 42))) | (arr_1 [i_2] [i_2 - 1]))), ((((arr_3 [i_2 - 1] [i_2 + 1] [i_2 + 1]) || ((((arr_2 [i_2] [i_3]) ? var_10 : 65523))))))));
                var_17 = ((((arr_7 [i_3]) && (((214 ? 325759524 : 65535))))) ? var_0 : (max((max((arr_3 [i_2] [i_2] [i_3]), var_6)), (max((arr_0 [i_2]), 65535)))));
            }
        }
    }
    #pragma endscop
}
