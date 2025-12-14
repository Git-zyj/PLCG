/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (-8433494125184991692 % 1)));
                var_12 -= 1;
            }
        }
    }
    var_13 = (((var_7 ^ var_1) ? ((var_5 ? 3070814216190361709 : (!var_6))) : ((min(var_8, ((var_1 ? var_4 : 44477)))))));
    #pragma endscop
}
