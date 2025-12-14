/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_12 ? var_8 : var_9)))));
    var_14 = min((min(((min(var_12, var_7))), (var_5 * var_9))), var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = 36028797018832896;
                arr_6 [i_0] [i_0] [i_0] = ((-var_10 ? var_7 : (arr_3 [i_0])));
                arr_7 [i_0] [i_1] = ((((((max(var_6, 334851514))) && (((-(arr_2 [i_0])))))) ? var_0 : (((!(arr_0 [i_0] [i_1]))))));
                arr_8 [i_0] = ((((((((arr_4 [i_0]) ? var_2 : 16911433728))) ? (var_12 & var_2) : ((-(arr_0 [i_1] [i_0]))))) <= var_7));
            }
        }
    }
    #pragma endscop
}
