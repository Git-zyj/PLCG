/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~((((!1) != 1)))));
                arr_6 [i_0] [i_0] = (((~6626972317340300298) ? 6626972317340300289 : ((((13321 >> (9223372036854775798 - 9223372036854775783)))))));
                arr_7 [i_0] [i_0] [i_1] = var_12;
            }
        }
    }
    var_20 = -1;
    #pragma endscop
}
