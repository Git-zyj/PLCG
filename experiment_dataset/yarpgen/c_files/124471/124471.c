/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= 562949953421311;
    var_21 = var_4;
    var_22 = -var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_23 = (((min((arr_2 [i_0] [i_0]), (((arr_3 [i_0] [i_0]) >> (((arr_2 [i_0] [i_0]) - 2830692775)))))) >> (((((((arr_1 [i_0]) + 9223372036854775807)) >> (((arr_0 [i_0]) - 1198044333)))) - 26244))));
                arr_5 [i_0] [i_0] [i_1] = ((+((((min((arr_0 [i_0]), var_3))) ? (((((arr_0 [i_0]) && (arr_3 [i_0] [i_1]))))) : (arr_3 [i_0] [i_0])))));
                arr_6 [i_1] [2] [2] = 0;
            }
        }
    }
    var_24 = (((var_5 ? ((2003140904 ? 4248842994 : var_1) : var_0))));
    #pragma endscop
}
