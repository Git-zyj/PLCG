/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_3;
    var_21 = var_11;
    var_22 = 2139095040;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [12] [12] [i_1] = (((((-(arr_2 [i_0 + 1] [i_0 - 2] [i_0 - 2])))) ? (arr_0 [i_0 + 2]) : -1498445793));
                var_23 = 3724401244;
                arr_6 [i_1] = 198;
                var_24 = 203;
            }
        }
    }
    #pragma endscop
}
