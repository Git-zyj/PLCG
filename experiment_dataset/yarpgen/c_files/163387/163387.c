/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((!1072889523417636751) & -19)), (!var_4)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = (max(((48 + ((18446744073709551615 ? 11029 : 0)))), (min((var_12 + var_7), (arr_4 [i_1])))));
                    var_16 = 33910;
                }
            }
        }
        var_17 = (max((((arr_1 [i_0] [9]) ? (min((arr_4 [3]), var_9)) : (((arr_4 [i_0]) ? 8959146332861694806 : var_8)))), 54494));
        arr_7 [i_0] [i_0] = ((~((-var_11 ? (!var_11) : ((var_10 ? 0 : 0))))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_18 = ((~((6063000949914250480 ? 1 : 32))));
        arr_10 [i_3] |= var_11;
        var_19 = var_11;
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_20 = (min(var_20, var_8));
        arr_13 [i_4] [i_4] = (-9223372036854775807 - 1);
    }
    #pragma endscop
}
