/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((((arr_2 [i_1 + 1] [i_1 - 1]) ? var_5 : (arr_2 [i_1 - 1] [i_1 + 1]))));
                arr_8 [i_1] = ((16703 >= (~var_5)));
            }
        }
    }
    var_11 = (min(var_11, var_2));
    #pragma endscop
}
