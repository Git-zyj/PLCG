/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((((((((var_4 ? var_9 : var_8))) ? var_11 : var_8))) ? ((min(((var_5 << (var_4 - 5408))), var_6))) : (var_11 != var_0))))));
    var_14 = var_3;
    var_15 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (min(((1 << (arr_6 [i_1 + 2] [i_2] [i_1 - 1]))), ((~(arr_3 [i_1 - 1] [i_1 + 1])))));
                    var_16 -= (((((46995 ? 47007 : (arr_3 [i_1 + 1] [i_1 + 2])))) ? (18517 || 18529) : var_9));
                }
            }
        }
    }
    #pragma endscop
}
