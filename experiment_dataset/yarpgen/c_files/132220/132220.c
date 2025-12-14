/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = ((var_5 * (((((((((arr_1 [i_0]) + 2147483647)) >> var_3))) ? 43947 : 21588)))));
        var_16 = ((((((min(13, 13938))) ? ((((arr_3 [i_0]) << var_8))) : (((arr_3 [i_0]) ? 13938 : (arr_2 [0]))))) >> (((((arr_0 [i_0]) ? 31 : 21588))))));
        var_17 *= var_2;
        var_18 = (-21 / 43821);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_0] [i_1] = ((-(8160 && -13923)));
                    var_19 = (((94 && -3355) && (arr_1 [i_0])));
                }
            }
        }
    }
    var_20 = (~var_14);
    #pragma endscop
}
