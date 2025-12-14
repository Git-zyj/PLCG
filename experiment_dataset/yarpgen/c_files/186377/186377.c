/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [16] &= 3407732230188635039;
                    arr_9 [i_1] [i_1] [i_1] = ((((6053160202326478080 ? 1730797130116304071 : var_11)) <= (1427 > 41)));
                    arr_10 [i_0] [i_1] [i_1] = ((var_17 | var_6) ? 6053160202326478080 : (((~(arr_6 [i_0] [i_1] [i_0])))));
                }
            }
        }
        arr_11 [i_0] = (arr_0 [i_0]);
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        var_18 = var_0;
        var_19 &= min((max(((~(arr_13 [i_3] [i_3]))), (~-6725510243466265320))), ((var_1 % ((-6053160202326478081 ? var_4 : 0)))));
    }
    for (int i_4 = 4; i_4 < 19;i_4 += 1)
    {
        var_20 = ((var_0 / (max((var_14 * 14), (((-9223372036854775807 - 1) ? (arr_1 [i_4]) : -6053160202326478104))))));
        arr_16 [i_4] = ((((max(((min(var_15, 42))), (116 % 8875923425408234344)))) ? (!var_1) : (!-126)));
        var_21 -= 90;
        var_22 = -14;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    var_23 = ((~(!0)));
                    var_24 = (+(max((max((arr_6 [i_4] [i_4] [i_4]), 148354694843052005)), ((max((arr_17 [i_4 - 1] [1] [i_4 - 1]), 139526101))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                var_25 *= ((-7244262598920430719 ? ((((min((arr_26 [i_7]), 27))) ? 47470 : (max((-9223372036854775807 - 1), var_1)))) : (arr_25 [i_7])));
                var_26 ^= ((-(arr_27 [i_7] [i_8])));
            }
        }
    }
    #pragma endscop
}
