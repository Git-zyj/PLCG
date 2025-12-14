/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    var_18 = ((((~182) ? -70 : ((1 ? (arr_6 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [4]))))));
                    var_19 = 0;
                    arr_11 [i_0] [i_1] [i_1] = ((-(((arr_7 [i_2 + 3] [i_1] [i_0]) * (((~(arr_7 [i_0] [i_1] [i_2]))))))));
                }
                var_20 = ((((0 ? ((((arr_3 [i_0] [i_0]) + 64))) : 9223372036854775807)) & (((-1 ? 0 : ((-(arr_8 [10] [1] [1]))))))));
            }
        }
    }
    var_21 = var_17;
    #pragma endscop
}
