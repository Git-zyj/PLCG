/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_11 ? var_1 : 2139095040));
    var_16 = ((((((((var_10 ? 2139095061 : var_14))) ? (((9290597106479846977 ? 227 : 104))) : ((var_3 ? 9156146967229704637 : -1176870900568131097))))) ? 41546 : ((var_4 ? var_14 : (min(var_0, 23987))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 14;i_3 += 1)
                {
                    {
                        var_17 *= var_6;
                        arr_11 [i_0] [i_1] [i_2] [i_3] = var_0;
                        arr_12 [i_0] [i_0] [i_2] = (~9223372036854775807);
                    }
                }
            }
        }
        var_18 = ((arr_10 [i_0]) ? (((!(arr_0 [i_0] [i_0])))) : -15);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_17 [i_4] = (arr_13 [i_4] [i_4]);
        arr_18 [i_4] = (max((arr_13 [i_4] [i_4]), 9156146967229704638));
        var_19 = 9290597106479847005;
        var_20 = 1;
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_21 [i_5] |= var_6;
        var_21 = (~1546588640);
        var_22 = (max(var_22, ((min(-843762841, (((arr_20 [i_5] [i_5]) ? 9290597106479847005 : (arr_20 [i_5] [i_5]))))))));
        arr_22 [i_5] = ((var_8 ? ((~(arr_13 [i_5] [i_5]))) : 255));
    }
    var_23 = -21749;
    #pragma endscop
}
