/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((!(((var_2 ? 32765 : var_0))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((-32766 ? (115 > 0) : (~7)));
        var_20 = (max(var_20, ((min((((((32765 ? -9064 : 14)) >= 0))), (max((!7), (207596949449476324 & 12204972283899876740))))))));
        var_21 = (((!131064) ? (~6241771789809674876) : (((814064117 ? -4676 : 4815)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2] [i_1] [i_1] = (min(((-1 ? 2062059283458078441 : -17674)), (-16867 * 6241771789809674894)));
                    var_22 *= 31;
                }
            }
        }
        arr_12 [i_1] = ((-(288 && 209)));
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = (((((~(min(53109, 3080221535))))) > (max((((28166 ? -871293765 : 135))), (~6241771789809674876)))));
        arr_16 [i_4] = (max(-14073, -9059));
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] [i_5] = min((32765 / 12204972283899876739), 0);
        var_23 = (((-32765 && 18446744073709551615) ? -32751 : (99 % 32758)));
    }
    #pragma endscop
}
