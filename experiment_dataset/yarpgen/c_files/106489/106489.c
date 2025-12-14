/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(116945648052217696 | -116945648052217696)));
    var_17 &= (min((!var_11), (66 & 55)));
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (2678170851479162494 <= -116945648052217707)));
                var_20 = (!2678170851479162472);
                var_21 = 47;
            }
        }
    }
    var_22 = (min(var_22, (((var_13 <= (!-63))))));
    #pragma endscop
}
