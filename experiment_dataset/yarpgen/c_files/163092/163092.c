/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = ((((max((arr_3 [i_1 - 1] [i_1 + 1]), (((!(arr_3 [i_0] [i_0]))))))) ? (((arr_2 [i_1 + 1]) ? (arr_4 [i_0] [i_1] [i_0]) : (max((arr_4 [i_0] [i_1] [i_0]), (arr_5 [i_0]))))) : ((-7100557132456404207 ? (arr_3 [i_1 - 1] [i_1]) : (arr_0 [i_0] [i_1 - 1])))));
                var_20 = (max(var_20, ((((((!-7100557132456404207) ? ((7100557132456404207 ? 7100557132456404219 : (arr_5 [i_0]))) : (((244 ? var_16 : (arr_1 [i_0] [i_1])))))) - (((9482 ? (arr_3 [9] [1]) : (arr_2 [i_1 - 1])))))))));
                arr_6 [i_1] = var_13;
            }
        }
    }
    var_21 = var_3;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_13 [i_3] [i_3] [i_3] = (max((arr_10 [i_2] [i_2]), ((~(var_4 ^ -7100557132456404210)))));
                var_22 = ((~(min((~var_12), 45390))));
            }
        }
    }
    #pragma endscop
}
