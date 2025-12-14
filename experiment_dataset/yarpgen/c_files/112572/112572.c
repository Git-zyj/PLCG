/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_10 = (!var_4);
        var_11 = -8394056118637382211;
        arr_4 [i_0] = (((arr_1 [i_0] [i_0 - 1]) ? (((arr_1 [i_0] [i_0 - 1]) ? (arr_3 [i_0 - 1]) : (arr_1 [i_0] [i_0 - 1]))) : ((var_2 ? (arr_3 [i_0 + 1]) : 28775))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_12 ^= ((var_5 * (max((((0 ^ (-32767 - 1)))), 8191))));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        var_13 |= ((32761 ^ 1) == var_5);
                        arr_15 [i_2] [i_3] [i_2] [i_3] [i_0] = -6771504983468971742;
                        var_14 = (min(var_14, ((585511177 << (1125898833100800 - 1125898833100790)))));
                    }
                }
            }
            var_15 = (!2);
            arr_16 [i_1] [i_0] = (((var_6 ? (arr_6 [i_0] [i_0]) : ((max((arr_11 [i_1]), var_5))))) != (((((var_9 ? var_4 : var_7)) <= ((((arr_3 [i_1]) ? 9223372036854775807 : (arr_5 [i_0] [i_0 + 1] [i_0 + 1]))))))));
        }
    }
    var_16 = (max(((((min(13, 18446744073709551615))) ? -3670535761679022810 : (!1131552603977075141))), ((((var_9 & var_9) + 1)))));
    var_17 = var_7;
    var_18 = var_7;
    #pragma endscop
}
