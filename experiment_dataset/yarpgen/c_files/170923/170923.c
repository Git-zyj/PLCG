/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (arr_2 [i_0 + 2] [i_0 + 2]);
                var_17 += ((22 ? (min((arr_1 [i_0 + 2]), var_7)) : (~181)));
                var_18 = ((((((0 + 48) ? 0 : (0 == 1)))) > (max((var_10 <= 24942), (arr_1 [i_0])))));
            }
        }
    }
    #pragma endscop
}
