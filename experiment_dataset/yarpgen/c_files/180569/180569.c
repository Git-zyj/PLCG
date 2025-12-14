/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 757583185;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [10] [i_1] [6] [i_1] |= (max((31973 / 520093696), (1969716146 > -520093697)));
                    var_18 ^= (arr_4 [i_1 + 2] [14] [i_1] [i_2]);
                    var_19 = ((var_3 ? (arr_0 [i_0]) : (arr_0 [i_0])));
                    var_20 = ((((((var_1 ? 20 : -2147483647))) ? 4294967290 : (((arr_5 [i_0] [i_0] [i_1] [i_0]) & var_4)))));
                    arr_9 [i_0] [i_0] = (i_0 % 2 == 0) ? (((((((arr_4 [i_2 - 2] [i_0] [i_2] [i_2]) >> (var_9 - 29)))) ? (((-1258677713 % 520093686) ? 33570 : 0)) : (((var_5 > (arr_4 [i_2 + 3] [i_0] [i_0] [i_0]))))))) : (((((((((arr_4 [i_2 - 2] [i_0] [i_2] [i_2]) + 2147483647)) >> (var_9 - 29)))) ? (((-1258677713 % 520093686) ? 33570 : 0)) : (((var_5 > (arr_4 [i_2 + 3] [i_0] [i_0] [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
