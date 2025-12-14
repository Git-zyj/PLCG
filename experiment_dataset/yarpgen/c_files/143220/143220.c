/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_19 &= (var_1 ? var_1 : 3158710819);
        arr_4 [i_0 + 2] [6] &= (((((arr_3 [4]) ? var_4 : ((var_15 ? var_6 : var_16))))) ? -1454343563268441578 : 0);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_20 = (min(var_20, ((((((~(arr_6 [i_1])))) ? (arr_6 [i_1 + 2]) : var_15)))));
        var_21 = 2200912415;
    }
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        var_22 = (((((arr_3 [i_2]) ? 4980104130858313758 : 1))) ? var_5 : (((arr_7 [i_2]) - 3)));

        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            var_23 = (min(var_23, ((((!-27278) ? (1 <= -11924) : (min(34, (arr_0 [i_3]))))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_24 = (max(var_24, 19692));
                            var_25 = ((-8592138337289444857 ? (((arr_13 [i_2]) - (arr_13 [i_2]))) : ((-(((arr_9 [i_3 + 1]) * var_7))))));
                        }
                    }
                }
            }
            var_26 = var_3;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_26 [i_2] [i_8] = ((2329175788 == (((((1066932291 ? var_5 : 593672991273156679)))))));
                        arr_27 [i_2] [i_7] [i_7] [i_8] = ((((max((arr_11 [i_2]), var_8))) && ((((arr_5 [5]) & (arr_5 [i_8]))))));
                        arr_28 [i_8] [i_8] &= ((!((min((arr_10 [i_3]), 15598218846834316374)))));
                        arr_29 [11] [i_3] [i_3] [i_3] [i_2] = ((var_11 ? (((1 ? -6664 : 0))) : (arr_16 [10] [i_3 - 1] [i_2] [i_8])));
                    }
                }
            }
        }
    }
    var_27 |= (max(((max(var_14, 1))), (((var_9 + 9223372036854775807) >> (var_14 - 1553374473)))));
    #pragma endscop
}
