/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(65519, 6466794354870753697));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((25316 ? var_9 : ((min((min((arr_5 [i_0] [i_0] [i_1]), 604983144)), (arr_1 [i_0] [i_1]))))));
                arr_7 [i_0] [i_1] [i_1] = ((max((min(var_4, 36136)), (var_7 && 93))));
            }
        }
    }
    var_12 = var_9;
    var_13 = (~1);
    var_14 = (((((1 ? ((min(var_2, 25316))) : var_8))) ? var_6 : (~var_1)));
    #pragma endscop
}
