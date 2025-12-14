/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = ((((var_5 & (arr_2 [i_1] [i_1 - 1] [i_1]))) & (((((arr_1 [i_0] [i_1]) ? var_3 : 99))))));
                arr_4 [i_0] [i_1] [i_1] = (arr_1 [i_1 - 1] [i_0]);
            }
        }
    }
    var_16 = ((((((var_9 >= var_14) ? var_5 : (var_9 != var_12)))) - (min(var_3, (min(var_11, var_0))))));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_9 [i_3] [i_3] |= (((min((arr_5 [i_3]), (min(3448, (arr_7 [i_3] [i_3])))))) ? (((18446744073709551607 ? -79 : var_7))) : 3281463729);
                arr_10 [i_2] [i_2] [i_2] = ((!(((((max((arr_8 [6] [i_2]), 1))) ? (max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2]))) : ((((arr_7 [i_2] [i_3]) - (arr_6 [i_2])))))))));
            }
        }
    }
    var_17 = 1;
    #pragma endscop
}
