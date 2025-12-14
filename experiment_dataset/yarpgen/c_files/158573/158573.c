/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = (~var_10);
                arr_7 [i_0] [i_0] = arr_5 [9];
                arr_8 [i_0] = ((((((arr_5 [i_1]) << ((217 ? 1 : (arr_2 [i_0] [i_1])))))) ? (arr_4 [i_1] [i_0]) : (((((9 ? -88064564 : -94))) ? (~-58) : (((arr_5 [i_0]) ^ var_0))))));
                arr_9 [i_0] [i_0] = (min(-6, (((-24 + 2147483647) >> (-6 + 32)))));
            }
        }
    }
    var_12 = var_10;
    #pragma endscop
}
