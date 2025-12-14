/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((1 << (var_0 - 2373))) ^ (~var_9))) < ((((~var_6) == ((var_4 ? 50503 : var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = ((-(1 ^ var_10)));
                arr_4 [0] [i_0] [0] = ((45708 % ((max(0, -7764)))));
                var_14 = ((((((var_0 | (arr_0 [i_1 + 3])))) ? ((((arr_0 [i_1]) != var_5))) : -797055298)));
                var_15 = (max(var_15, (((((~(~8192)))) ? 8192 : -23820))));
            }
        }
    }
    var_16 = (max(((~(-7149164954795390172 && var_0))), ((((max(var_9, 4611685949707911168))) ? ((max(var_9, -8190))) : var_11))));
    var_17 = ((((((max(var_1, var_6))) ? (var_10 / 8192) : (var_5 & -99))) ^ ((((~var_6) | var_5)))));
    #pragma endscop
}
