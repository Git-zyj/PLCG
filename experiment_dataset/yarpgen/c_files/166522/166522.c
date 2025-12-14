/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min((((-6323606917924787003 + 9223372036854775807) << (((var_2 + 23070) - 29)))), ((min(1, var_10))))) ^ ((((1 <= (var_2 || var_14)))))));
    var_16 *= (var_1 / 29875);
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 |= ((+(((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_1])))));
                arr_4 [i_0] = 12;
            }
        }
    }
    #pragma endscop
}
