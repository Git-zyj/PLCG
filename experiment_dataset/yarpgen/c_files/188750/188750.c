/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((max(1063845584, 224)), var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (min((arr_1 [i_0]), (((arr_4 [i_0] [i_2]) ? (arr_3 [i_2 - 1] [i_1 - 2]) : ((1 ? var_6 : 2181236059))))));
                    var_13 ^= min(((((max((arr_0 [i_2] [i_1]), var_2))) ? (arr_3 [i_1 - 2] [i_2 + 2]) : (~var_10))), ((((((arr_2 [i_0] [i_0]) ? (arr_4 [1] [1]) : (arr_3 [i_1] [i_0])))) ? var_11 : 1737643990)));
                    var_14 = ((((((arr_3 [i_2] [i_1 - 2]) ? var_2 : ((max((arr_5 [5] [i_0] [i_0] [8]), 511)))))) ? ((~(arr_3 [i_1 - 1] [i_1 + 1]))) : (arr_1 [i_2])));
                }
            }
        }
    }
    var_15 *= (max((max(2181236068, (var_2 | -412991600245192449))), ((max(-2554, (min(2113731248, -18782)))))));
    #pragma endscop
}
