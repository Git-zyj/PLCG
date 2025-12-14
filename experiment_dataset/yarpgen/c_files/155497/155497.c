/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = var_6;
    var_19 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((((((((!(arr_2 [i_2]))) ? (min(var_10, (arr_1 [i_1]))) : -15)) + 2147483647)) >> (511 - 489)));
                    var_20 = ((((!(-1 || 2621701878472178027))) ? ((((-16 && (arr_4 [i_0]))))) : ((((((arr_4 [i_0]) ? var_4 : var_12))) ? (((var_9 < (arr_2 [i_2])))) : (((var_7 + 2147483647) >> 21))))));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = (max(((-(((var_2 >= (arr_7 [i_0] [i_1] [i_2])))))), (arr_1 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
