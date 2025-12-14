/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 = (min(var_21, (((((max((max(var_1, var_8)), var_15))) * var_16)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (min(((min(var_5, (max((arr_4 [i_0 + 1] [i_0 + 1]), var_18))))), var_14));
                var_22 = (min(var_22, (((((((var_3 ? (arr_3 [i_0] [i_1]) : (arr_1 [i_0 + 1])))) && ((((arr_5 [i_1] [i_0]) ? var_6 : var_8)))))))));
                arr_7 [i_1] = (var_0 ? var_15 : var_18);
                var_23 = (max(var_23, ((max((((min((arr_5 [i_0] [i_1]), var_4)))), (arr_3 [i_0] [i_1]))))));
            }
        }
    }
    var_24 = var_19;
    #pragma endscop
}
