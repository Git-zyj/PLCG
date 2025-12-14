/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_11));
    var_19 = (min(var_19, ((((~14) ? (((77 ? 237 : 244))) : var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((19 ? 13748893930008569441 : 252));
                var_21 *= (((arr_0 [i_0]) ? ((~((~(arr_1 [i_0]))))) : (((((arr_2 [i_0] [i_0]) || 1)) ? (arr_2 [i_1] [i_0]) : (arr_2 [i_0] [i_1])))));
            }
        }
    }
    var_22 = (min(var_22, ((var_14 && (((var_5 ? var_4 : (~var_4))))))));
    #pragma endscop
}
