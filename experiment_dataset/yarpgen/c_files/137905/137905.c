/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 |= (min((min((max(var_9, var_12)), 9223372036854775807)), var_4));
    var_15 = (((((-(max(var_12, var_9))))) ? var_7 : ((15819 ? var_7 : (max(12110466656695323533, 0))))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [0] [2] = (max((arr_6 [i_1] [i_1] [i_0] [i_0 + 2]), (((arr_6 [4] [i_1] [i_0] [i_0 + 1]) ? 0 : (arr_6 [i_0] [i_1] [i_0] [i_0 - 1])))));
                        var_16 = (max(6336277417014228071, (((arr_2 [i_0]) ? 9643898137885667267 : (arr_5 [i_3] [i_3])))));
                    }
                    var_17 -= (arr_4 [6]);
                    arr_11 [i_0] [1] [i_2 - 1] [i_0 + 1] = (((arr_0 [i_0] [i_0]) ? ((min((arr_0 [i_0] [i_0]), var_8))) : (((((var_8 ? 2729170483 : 95))) ? (arr_0 [i_0] [i_2 - 1]) : 127))));
                }
            }
        }
        arr_12 [4] &= (min((((arr_7 [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_0 + 1]) ? 89 : (arr_7 [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_0 + 1]))), (min(32, ((-(arr_0 [0] [0])))))));
    }
    var_18 = 118;
    #pragma endscop
}
