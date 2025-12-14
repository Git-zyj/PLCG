/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 ^= -var_7;
                arr_4 [i_1] [i_0] = ((arr_0 [i_0]) ? ((~((0 ? var_1 : (arr_1 [i_0]))))) : ((max((arr_0 [i_0]), (arr_0 [i_1])))));
                arr_5 [9] [i_1] = ((max((arr_2 [i_0] [i_0] [i_0]), (min((arr_1 [i_0]), (arr_2 [i_0] [i_1] [1]))))));
            }
        }
    }
    var_16 = ((((var_0 && (((var_4 ? var_3 : var_13))))) || var_11));
    var_17 = (max(var_17, (((var_12 ? var_8 : var_6)))));
    #pragma endscop
}
