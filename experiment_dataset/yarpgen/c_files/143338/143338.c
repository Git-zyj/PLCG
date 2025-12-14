/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min(2046262578, (4624685083951846214 || var_7))))));
    var_12 = ((-(!var_1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (10887871934812779222 || 3363370810);
        arr_2 [i_0] [i_0] = ((3025281476 || (arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        var_14 |= (arr_3 [i_0] [i_1] [i_3]);
                        var_15 = ((!(var_9 > var_6)));
                        var_16 = ((var_9 || (arr_6 [i_0] [i_1] [i_1] [i_3 - 2])));
                    }
                }
            }
        }
    }
    var_17 = ((var_6 || ((3025281469 || ((min(4691936274489605707, var_4)))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                arr_17 [i_4] [i_5] = (((!var_6) || (var_7 || 3025281456)));
                arr_18 [i_4] [i_5] [i_5] = (arr_16 [i_4] [i_5] [i_4]);
                arr_19 [i_4] [i_4] = (!((((((2987678788 + (arr_13 [i_5])))) ? ((((arr_12 [i_5] [i_5]) || (arr_14 [i_5])))) : (var_4 || 128)))));

                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    var_18 = -3025281469;
                    arr_24 [i_5] [4] = (((~4) ? (((((15217 ? 12 : -2147483626))) ? ((64418 ? (arr_13 [i_6]) : var_2)) : 1157609818)) : -2031525799));
                    var_19 = (~136);
                }
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    arr_27 [i_4] [i_5] [i_7] = ((((max(-712048951, (arr_25 [i_7 - 2] [i_7 + 1] [i_7 + 1])))) ? (min((arr_25 [i_7 - 2] [i_7 + 1] [i_7 + 1]), 3025281469)) : var_10));
                    var_20 = (max(-217116715, ((min((arr_21 [i_5]), 112)))));
                    var_21 = max((min(var_3, (arr_16 [i_7] [i_7 - 2] [i_7 - 2]))), ((((((-1859752080 ? var_6 : var_9))) || ((max(var_2, 2147483626)))))));
                    arr_28 [i_4] [i_5] [i_5] [i_7 - 2] = (((((max(var_0, 2338408920)))) ? ((min((arr_20 [i_4] [i_4] [i_5] [i_7 - 1]), (min(1109670766, 1269685826))))) : (min((arr_12 [4] [4]), ((~(arr_22 [i_5])))))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_22 = (((arr_15 [i_4]) || -12294));
                    arr_31 [i_4] [i_4] [i_4] = (arr_14 [i_4]);
                    var_23 = (!15897988560469588374);
                }
            }
        }
    }
    #pragma endscop
}
