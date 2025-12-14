/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= -var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (((((102 != var_3) | (arr_2 [i_1] [i_1] [i_0 + 1]))) / (((((arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]) == (arr_1 [i_0]))) ? -127 : ((min(var_6, 102)))))));
                var_21 = (((((((arr_1 [i_0]) ? (arr_0 [i_1]) : 8408584100245326915)))) ? ((~(((arr_0 [i_1]) ? 3547694714 : 1953686038)))) : 102));
                var_22 = (min(var_22, (((-(((arr_2 [i_0 + 1] [i_0 + 1] [i_1]) ? (arr_2 [i_0 - 1] [i_1] [i_0 - 1]) : (arr_1 [16]))))))));
            }
        }
    }
    var_23 = ((((((max(var_11, -102)) << (var_7 + 9004540950442584160)))) && var_3));
    #pragma endscop
}
