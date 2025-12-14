/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((!32764) ? (min(var_2, 140737488355327)) : var_9)), var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [1] = (min((!4096), (((arr_1 [i_1 + 2]) ? 140737488355340 : (arr_1 [i_1 + 1])))));
                arr_6 [i_1 + 1] [14] = (max(-17761, (arr_3 [6] [7])));
            }
        }
    }
    #pragma endscop
}
