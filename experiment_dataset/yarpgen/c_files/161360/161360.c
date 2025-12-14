/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_13 &= (((((253 ? 9223372036854775798 : (arr_5 [i_1 - 3] [i_1 + 1])))) ? ((+(((arr_4 [i_0] [i_1]) ? (arr_4 [1] [i_0]) : (arr_2 [i_0]))))) : (arr_5 [i_0] [i_0])));
                var_14 = ((1 ? (((arr_3 [i_0]) ? (!-16796) : (((arr_1 [i_1]) ? 184 : -6461639036817147844)))) : (min((((var_7 ? var_2 : 2258))), (arr_4 [i_1 - 3] [i_1 - 1])))));
                var_15 = ((~(((arr_4 [i_1 - 4] [i_1]) ? (arr_4 [i_1 - 3] [i_1]) : (arr_4 [i_1 - 2] [2])))));
                var_16 = (((((arr_2 [i_1 - 2]) ? (arr_5 [i_1 + 1] [i_0]) : 9223372036854775806)) >= (3268814779756341619 & -9223372036854775786)));
            }
        }
    }
    var_17 = var_2;
    #pragma endscop
}
