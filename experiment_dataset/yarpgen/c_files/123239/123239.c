/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_12 = var_5;
                var_13 = 21301;
                var_14 = ((1218889744 ? var_10 : (-9969 && 44263)));
                var_15 = (((((16 ? var_1 : (arr_4 [i_0] [i_0] [i_0 - 1])))) ? ((var_9 << (((-67 + 96) - 17)))) : var_8));
            }
        }
    }
    var_16 = (((((!(((-16179 ? 0 : 1)))))) & (((~0) ? -var_10 : ((1 ? 26325 : 1))))));
    #pragma endscop
}
