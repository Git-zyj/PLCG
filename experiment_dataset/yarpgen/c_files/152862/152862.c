/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (min((max(-var_1, (min(-2709950102575851703, -26135)))), ((min(0, -110)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = (min(var_14, (!2228374115)));
                    var_22 = ((~((max(var_17, var_18)))));
                }
            }
        }
    }
    var_23 |= var_7;
    #pragma endscop
}
