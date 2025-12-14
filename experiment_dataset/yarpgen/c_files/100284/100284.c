/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (((arr_3 [i_0 - 1]) ? (arr_1 [11]) : (((-(arr_0 [i_0 + 1] [i_1]))))));
                var_20 |= (((((((max(-101, 111447065)))) + 2147483647)) << (4183520228 - 4183520228)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            {
                var_21 = (min(var_21, 4183520215));
                var_22 = (max((max(3015784841, -673462387)), var_12));
            }
        }
    }
    #pragma endscop
}
