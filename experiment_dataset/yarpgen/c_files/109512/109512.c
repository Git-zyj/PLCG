/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-8265 ? 2467292457 : 3347006565686894130));
    var_18 = ((((((min(1068721189339513797, var_4))) ? 1068721189339513797 : var_11)) >> (var_9 - 57438)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (arr_5 [i_0]);
                var_19 = (max(((max((arr_3 [i_0]), -var_9))), (max((arr_2 [i_0]), (arr_1 [5] [i_1])))));
            }
        }
    }
    var_20 = ((31417 << (-220617870342391850 + 220617870342391857)));
    #pragma endscop
}
