/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= 216;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [20] [i_0] = 228;
                var_17 = 2161727821137838080;
                var_18 += (((((min((arr_4 [i_1]), (arr_3 [16] [i_0 + 1] [16]))))) ? (60 & -56) : (((max(-61, var_13)) + (arr_0 [16])))));
            }
        }
    }
    var_19 = (~240518168576);
    var_20 = 16;
    #pragma endscop
}
