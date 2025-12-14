/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 *= ((-86 ? -6152918143587401699 : 3424154282));
    var_17 = 13;
    var_18 = ((4294967277 ? 39 : 23));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (max((((4294967282 + 4294967283) & (13 >> 13))), (((4294967283 % 13) >> (var_11 + 385670109)))));
                var_19 = (max(var_19, ((max((arr_2 [i_0]), 33)))));
                var_20 = (arr_2 [i_1]);
            }
        }
    }
    #pragma endscop
}
