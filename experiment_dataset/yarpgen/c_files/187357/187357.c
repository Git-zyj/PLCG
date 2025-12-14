/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((8318298025148910011 ? -110 : (min(((-5569361025489651727 ? (arr_6 [i_0] [i_1] [8] [i_0]) : var_6)), (((5590429393004997140 ? var_8 : var_2)))))));
                    arr_8 [i_2] [i_1] [i_0] [i_0] = (((((-((min(-10059, (arr_3 [i_1] [i_1]))))))) ? ((((((max(-16257, var_9))) + 2147483647)) >> (421 - 402))) : (6118 <= var_8)));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 4; i_3 < 17;i_3 += 1)
    {
        arr_12 [i_3] = (((((3323871043 ? -7 : -25120))) ? var_6 : 24415));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_10 |= ((-68998487 ? (13 ^ -84) : ((22622 ? 26194 : var_2))));
                    var_11 &= ((0 ? 17721096897655636244 : (arr_15 [i_3 - 3])));
                    var_12 = (-779314156487855095 ? 6 : 72);
                }
            }
        }
        arr_19 [i_3] [i_3] = ((156 + ((var_7 ? 53059 : var_2))));
        arr_20 [i_3] = -392371358;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_13 = ((-19559 ? (-30 + 24599) : (arr_22 [i_6])));
        var_14 = (((((-46 ? 4342237341094687604 : -27129))) ? (3881252997562115178 && 9223372036854775807) : ((-53 ? 2535057503 : (arr_21 [i_6] [i_6])))));
    }
    var_15 += (((((((max(var_5, 1))) ? var_2 : -var_4))) ? 63 : 2167525857));
    var_16 = (((max(var_4, (~-25712))) <= ((-((max(-50, 221)))))));
    var_17 = var_8;
    #pragma endscop
}
