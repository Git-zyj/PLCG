/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((max(((-8315120103209491459 ? 1348629232 : 87), ((min(53, var_0))))))))));
                var_21 = (((!280962526) ? (arr_1 [6]) : (min((122 || 5571499827313208077), 1492657947))));
            }
        }
    }
    var_22 = var_2;
    var_23 = (min(var_23, var_17));

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                {
                    var_24 = (min(var_24, (((!(122 || 26631))))));
                    arr_15 [i_2] [i_2] = ((-280962527 * (min(1492657951, 795713052))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_5] [i_2] [i_4] [i_2] [i_3] [i_2] = ((((!(((var_19 ? var_0 : 12786)))))));
                                var_25 = ((-(max((arr_18 [i_2] [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 2] [i_4 + 2]), 16968049672422723263))));
                                var_26 = (min(var_26, ((min(((((arr_9 [i_6]) * (!32)))), (min((var_17 & var_12), (arr_14 [i_4 - 1] [i_4] [i_6] [i_6]))))))));
                                var_27 = (min(280962526, 6));
                                var_28 |= (var_8 ? ((((arr_13 [i_2] [i_3] [i_6]) ? (((var_14 && (arr_19 [i_2] [i_3] [i_6] [i_6])))) : (!var_3)))) : ((((min(-22376, var_16))) ? -2848290077062705844 : var_17)));
                            }
                        }
                    }
                    var_29 = (((((280962526 ^ (18446744073709551615 > 9143494377445646807)))) ? (0 > 124) : var_6));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    arr_28 [i_2] [i_8] [4] [i_2] = (arr_20 [i_2] [i_7] [i_7] [i_7] [i_8]);
                    var_30 += (((((min(var_10, (arr_8 [i_2]))))) ? (-45 ^ var_7) : ((-1254394074517997523 & (arr_14 [i_2] [i_2] [i_7] [i_2])))));
                }
            }
        }
        var_31 = (var_7 + 240);
    }
    for (int i_9 = 1; i_9 < 6;i_9 += 1)
    {
        var_32 -= ((((max(135, (arr_4 [i_9 - 1] [i_9 + 4] [6])))) ? ((((max(-7109446632058065791, (arr_29 [2]))) / (~240)))) : (arr_25 [1])));
        var_33 = (min(var_33, (((((((15678893909931242763 | (arr_24 [i_9] [i_9]))))) ? ((-(!var_9))) : var_19)))));
        arr_31 [i_9] = ((((min(255, var_17))) ? (arr_9 [i_9]) : (arr_18 [i_9] [i_9] [i_9 + 2] [i_9] [i_9 + 1] [i_9])));
    }
    #pragma endscop
}
