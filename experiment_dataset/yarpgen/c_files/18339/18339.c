/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 118;
    var_18 = (!var_11);
    var_19 = (((var_10 | (~-752642950))));
    var_20 = (var_15 ? var_15 : (32 + 32));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_21 += (((((-(arr_1 [i_0 + 2]))) + -56840)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_22 += ((-(max((1992176225675364873 + 62), (arr_4 [i_2])))));
                    var_23 = (!(!-752642946));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_24 |= 1;
                        var_25 = (arr_4 [i_1]);
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_26 = (max(var_26, (!223)));
                        arr_12 [i_1] [i_1] [i_2] [3] [i_1] [i_4] = (arr_7 [i_0 + 2] [i_1] [i_1] [i_1]);
                        arr_13 [i_1] [i_1] [i_1] [i_1] = (min(-58, 0));
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 8;i_5 += 1) /* same iter space */
    {
        var_27 = (arr_11 [i_5 + 1] [i_5 + 1] [i_5] [i_5] [i_5]);
        var_28 -= (((((((((arr_5 [i_5] [i_5]) + -1211152983))) - 286393103923998326))) ? (~74) : (((arr_7 [i_5] [i_5] [i_5 + 1] [i_5]) ? -9223372036854775783 : 2473489737))));
    }
    for (int i_6 = 2; i_6 < 8;i_6 += 1) /* same iter space */
    {
        arr_19 [i_6] = 16345149199010889385;
        var_29 = (((((~(~1)))) ? (max((arr_0 [i_6 + 1] [i_6 + 1]), 2101594874698662231)) : (((2570029797 ? 16345149199010889388 : 154)))));
        arr_20 [8] = 660281576;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    arr_25 [i_7] [i_7] = (((arr_7 [i_8] [3] [i_6] [i_6]) ? 2101594874698662236 : ((244 ? 143 : 255))));
                    var_30 = (min(var_30, (((-6334880636831550403 - (arr_22 [i_6]))))));
                }
            }
        }
    }
    #pragma endscop
}
