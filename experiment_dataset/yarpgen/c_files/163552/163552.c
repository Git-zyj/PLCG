/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = arr_3 [i_0];
                var_12 = (max(var_12, 1));
                var_13 = (min(var_13, ((((var_9 ? (max(var_6, (arr_1 [i_1]))) : ((((arr_4 [i_1] [i_1] [i_1]) ? (arr_0 [i_0] [i_1]) : 2053525537)))))))));
                var_14 = (966638449 * 5537434665942797749);
                var_15 = (~2241441753);
            }
        }
    }
    #pragma endscop
}
