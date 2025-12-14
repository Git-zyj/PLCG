/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = var_8;
                arr_8 [i_0] [i_0] = (((((((-4149571294859149888 + 9223372036854775807) >> var_2)))) ? 4024 : (max((arr_0 [i_1]), ((~(arr_4 [i_0] [i_0] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
