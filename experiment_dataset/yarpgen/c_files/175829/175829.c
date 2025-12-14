/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_3 ? (((-926703901764176633 < var_10) ? var_2 : var_5)) : ((~((0 >> (var_9 - 39162)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [15] = ((((max((-32767 - 1), 1309996816527853371))) && ((min((arr_1 [i_0]), (var_9 > var_10))))));
                var_15 = (max((min(26779, ((((arr_0 [i_0]) > var_0))))), (((10472 ? 524287 : 143)))));
            }
        }
    }
    var_16 = (~var_3);
    #pragma endscop
}
