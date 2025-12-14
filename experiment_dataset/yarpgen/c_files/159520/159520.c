/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_18 = (((13860534929063993266 % 30911) | var_3));
                        var_19 = 65024;
                    }
                }
            }
            var_20 = ((var_12 * (arr_5 [i_0 - 2] [i_0])));
        }
        var_21 = (arr_5 [i_0] [i_0]);
        var_22 = (min(var_22, (~1)));
        var_23 = ((-((var_0 ? var_1 : var_0))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_19 [i_0 + 1] [6] [5] [i_0] = (535840520 || 14824718352742261763);
                    var_24 = ((-(14824718352742261754 && 28)));
                    var_25 = ((arr_18 [i_0 + 1]) ? var_15 : 4000925803412417876);
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_26 = ((1879048192 ? 711308059 : 3622025720967289852));
            arr_26 [i_6 + 1] [i_7] [i_7] |= (((((((65535 ? 1 : (arr_25 [i_6] [i_7] [i_7])))) || ((min(14824718352742261778, var_11))))) || (14824718352742261732 % 3)));
            var_27 = ((~(((arr_23 [i_6] [i_6 + 1]) ? (arr_23 [i_6] [i_6 - 1]) : var_14))));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_28 = (((3622025720967289842 * 3622025720967289859) ? (-6 % 18446744073709551615) : (min((((13 ? 21 : 1))), (min(var_9, var_7))))));
            var_29 = 2747789085;
            var_30 = min((((((var_8 ? var_0 : var_8))) ? var_16 : (min(var_2, var_12)))), (arr_23 [i_6] [i_8]));
        }
        var_31 = (((((var_3 ? 18446744073709551611 : var_12))) ? (((arr_22 [i_6 + 1]) ? 22 : var_15)) : -var_17));
    }
    var_32 = (min(var_32, (((!((min(var_6, (3622025720967289855 && 4294967295)))))))));
    var_33 = ((((min((min(18446744073709551598, 1)), 3622025720967289856))) && (((-(4034742441931159558 >> 1))))));
    #pragma endscop
}
