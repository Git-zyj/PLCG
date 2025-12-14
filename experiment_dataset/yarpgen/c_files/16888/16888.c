/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_9;
    var_12 = (min((max(((max(var_6, var_9))), var_7)), (((18446744073709551615 && 63) ? var_7 : var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = var_9;
                arr_7 [14] = ((-(((((var_4 ? (arr_0 [i_1]) : var_3))) ? var_7 : ((((arr_3 [i_1] [i_1 + 2] [i_0]) | var_5)))))));
                arr_8 [i_0] [i_1 - 3] = (min((~-184), var_5));
            }
        }
    }
    var_13 = var_10;
    var_14 = (max((18446744073709551603 % -797764885), (((!(((var_4 ? -1110 : var_9))))))));
    #pragma endscop
}
