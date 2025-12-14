/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((~(min((((15 || (arr_3 [i_0] [i_0] [i_0])))), (arr_1 [1] [i_1 + 3])))));
                arr_6 [i_1] [i_0] = ((107 >> (((((((arr_1 [i_0] [i_0]) & (arr_0 [i_0]))))) - 739))));
                arr_7 [i_1] [i_0] = (min((~39250), (((~(((-2987 > (arr_3 [i_0] [20] [i_1])))))))));
            }
        }
    }
    var_15 = (((((!((max(var_7, 39250)))))) & 16917));
    var_16 = (((!(var_13 != var_10))) ? var_4 : (((17 || 1) ? (((249 ? var_1 : var_1))) : (max(var_9, 6861914121405876312)))));
    #pragma endscop
}
