/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (((max(((var_1 ? (arr_3 [i_0 + 2] [i_0] [i_1]) : var_7)), 830498638)) >> (8348028478221082099 - 8348028478221082069)));
                arr_4 [i_0] = ((-106 ? ((max((arr_3 [i_0 + 1] [i_0] [i_0]), var_8))) : 25));
            }
        }
    }
    #pragma endscop
}
