/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((var_4 ? (((arr_3 [15]) & 4294967295)) : var_2)));
                var_15 |= (((((var_13 < (arr_2 [i_0 - 1])))) >> (((max(var_5, (arr_2 [i_0 + 1]))) - 12902435903113580437))));
            }
        }
    }
    var_16 = var_1;
    var_17 ^= var_1;
    var_18 += (--3961883290660005902);
    #pragma endscop
}
