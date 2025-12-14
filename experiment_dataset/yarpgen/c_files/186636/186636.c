/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(7062997841933592303, var_3));
    var_12 = (~1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = ((~(((((((arr_2 [i_0]) ? 65535 : (arr_3 [i_0])))) && (arr_1 [i_0 + 2] [i_0 - 1]))))));
                var_14 = (max((arr_2 [i_0 + 2]), ((11383746231775959314 - (arr_2 [i_0 - 1])))));
            }
        }
    }
    var_15 ^= var_6;
    var_16 = ((((var_1 != (45027 == 255))) ? ((var_0 << (var_1 - 1756385545))) : (((~(~var_7))))));
    #pragma endscop
}
