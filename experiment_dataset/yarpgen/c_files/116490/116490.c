/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 2287059662;
    var_18 = (~var_14);
    var_19 = (148 && -7303216957589678907);
    var_20 = max((max((!var_13), 9223372036854775807)), -70);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = ((-(arr_0 [i_1])));
                var_22 = ((var_13 << (var_15 - 129)));
                var_23 &= (max((min(2287059662, -4775658254958585514)), (arr_2 [i_0] [i_1 + 1])));
            }
        }
    }
    #pragma endscop
}
