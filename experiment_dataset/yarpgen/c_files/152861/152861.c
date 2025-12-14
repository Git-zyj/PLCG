/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_14 -= (max(3, ((var_4 < (55956 > 1)))));
                var_15 = -7316889133278143929;
                var_16 = (min(54, (((arr_4 [i_1]) ? (arr_1 [i_1 + 1]) : var_4))));
                arr_6 [i_1] = 1351189537228126988;
            }
        }
    }
    var_17 = (max(var_17, (!var_11)));
    var_18 = (max(-1, 25));
    #pragma endscop
}
