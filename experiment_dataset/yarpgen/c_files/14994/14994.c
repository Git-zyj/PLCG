/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((~23) | ((var_3 ? (var_0 & 1448948307011175345) : (((min(33813, 0)))))));
    var_13 = (max(var_13, 28759));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (min(var_14, 0));
                var_15 = ((+((min((28759 || 7571922105001791941), (max(36777, 0)))))));
            }
        }
    }
    #pragma endscop
}
