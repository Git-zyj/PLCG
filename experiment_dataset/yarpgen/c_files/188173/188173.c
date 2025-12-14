/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_10 = ((((min(224, 247))) ? (min((arr_1 [i_1 + 1] [i_1 + 1]), (arr_1 [i_1 - 1] [i_1 - 1]))) : -6571986350939539577));
                var_11 = ((1 > (-2714463955500047892 ^ 4749042723404291343)));
            }
        }
    }
    var_12 = ((((max((max(2714463955500047891, 2714463955500047891)), ((0 ? -2714463955500047887 : -2714463955500047892))))) ? ((min(var_5, 90))) : -24905));
    var_13 = var_1;
    var_14 = var_2;
    #pragma endscop
}
