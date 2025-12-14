/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_13);
    var_21 += (((max(var_11, ((var_12 ? var_2 : var_16)))) | var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_22 = (((((((-5610 ? -568996783 : 1))) ? (((-119 + 2147483647) << (1 - 1))) : 55))) ? (max(((~(arr_0 [i_1]))), (~var_15))) : (~47575));
                var_23 = ((~(((arr_3 [i_0]) ? ((-1629367528 ? 3152945724984687299 : 0)) : var_1))));
                var_24 ^= (((((var_1 ? var_10 : var_12))) ? (((((arr_2 [14] [i_1]) != ((min(var_3, (arr_0 [i_1])))))))) : 13236429565310911566));
            }
        }
    }
    #pragma endscop
}
