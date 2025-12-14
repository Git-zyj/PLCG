/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((!32759) ? (var_4 != 6) : (min((!19675), ((var_10 ? var_1 : 6735542391039129933))))));
    var_15 = (var_4 ^ var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((+((((var_12 ? (arr_4 [i_0] [i_0]) : 1134254429)))))))));
                var_17 ^= (max(((-(var_4 ^ var_8))), (arr_1 [i_1 - 1] [i_1 + 1])));
                var_18 = (min(var_18, 127));
            }
        }
    }
    #pragma endscop
}
