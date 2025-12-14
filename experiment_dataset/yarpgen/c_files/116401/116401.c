/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((1 >> 0) | ((min((max(1, 14181)), ((min(1, 1)))))));
    var_11 += (var_8 ? ((~((min(1, 1))))) : (!1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = ((var_4 && 7840) ? -972188160 : 0);
                var_13 |= ((!((min(1651655726, 15583993665712633660)))));
            }
        }
    }
    var_14 = ((51355 - (1 | 4534539078709337011)));
    #pragma endscop
}
