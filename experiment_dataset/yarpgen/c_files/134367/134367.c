/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_5 ? var_0 : var_7)) <= var_7));
    var_11 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = ((((((~100) ? var_5 : (arr_5 [i_0] [i_0] [i_0])))) ? (((((-(arr_6 [2] [i_1] [8] [i_0])))) ? 102 : ((var_0 ? (arr_1 [13]) : (arr_3 [3] [i_1] [i_1]))))) : var_6));
                    var_13 = (min(var_13, ((((((-var_1 - (100 - 127)))) ? var_0 : (((((var_1 >= (arr_6 [i_0] [i_1 + 1] [19] [i_2])))))))))));
                    var_14 = var_4;
                    var_15 = (min(var_15, (((-(arr_0 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
