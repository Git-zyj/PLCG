/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [4] [4] &= (~62);
                var_18 *= ((((((max(var_12, -7966029911159903508)) == (min((arr_0 [i_0] [i_1 - 1]), var_12))))) >= (arr_4 [i_1 - 4])));
            }
        }
    }
    var_19 = var_1;
    var_20 = (((((15393589889190414759 ? 16771 : (~var_12)))) ? var_2 : var_12));
    var_21 ^= var_4;
    var_22 = (((min(48761, (!1)))) ? var_0 : var_13);
    #pragma endscop
}
