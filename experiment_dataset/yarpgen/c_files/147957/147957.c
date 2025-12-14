/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((!((((((arr_2 [i_0]) ? 1 : 127)) >> (((var_4 < (arr_2 [i_0])))))))));
        var_16 = -3;
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((((!(((~(-32767 - 1)))))) ? (((~(arr_1 [14] [i_1])))) : ((var_14 ? (-126 > 15) : (arr_1 [14] [14])))));
        arr_8 [i_1] [i_1] = (((((!(arr_0 [1])))) & (((!(arr_1 [2] [i_1 + 3]))))));
        var_17 = (!1);
        var_18 ^= ((min(17870283321406128128, (arr_2 [0]))));
        var_19 -= ((((((((!(-127 - 1)))) > (min(2147483634, (-127 - 1)))))) >> (((((~(arr_1 [1] [i_1])))) - 6491349629256102576))));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                {
                    var_20 = (min(224, -109));
                    var_21 += (((!0) ? ((-4294967292 ? 18446744073709551615 : ((-9223372036854775797 ? 4503599493152768 : 123)))) : var_0));
                }
            }
        }
        var_22 = (((-119 && var_6) << (((1 == (-127 - 1))))));
        var_23 = (min(var_23, (((!(4 || 0))))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 8;i_8 += 1)
                        {
                            {
                                var_24 -= var_6;
                                arr_25 [i_5] [i_7] [i_5] = max(0, (((32753 + 127) & 126)));
                                arr_26 [i_2] [i_2] [i_2] [i_2] [i_5] = ((2251799813685232 && ((min((var_0 * 0), (((arr_11 [i_2] [i_2]) ? var_2 : 20)))))));
                            }
                        }
                    }
                    var_25 = (arr_22 [i_5]);
                    var_26 = (arr_1 [i_5] [i_5]);
                    arr_27 [i_5] [i_5] [i_5] = (~-32751);
                }
            }
        }
    }
    var_27 = (((-9223372036854775807 - 1) ? 2305561534236983296 : 245));
    #pragma endscop
}
