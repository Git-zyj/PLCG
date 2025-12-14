/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 += 1073741823;
                var_15 = (~(((((~(arr_2 [5] [1]))) < -56))));
            }
        }
    }
    var_16 += var_10;
    var_17 -= min((min(((max(232, 65535))), ((11791874590440285122 << (64 - 7))))), var_3);
    var_18 = (min((min(var_4, (var_8 - 17))), var_12));
    #pragma endscop
}
