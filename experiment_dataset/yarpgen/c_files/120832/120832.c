/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (((~3777704626466821401) ? (max((min((arr_6 [i_0]), var_7)), (((var_0 ? var_4 : var_0))))) : (arr_0 [i_0 + 2])));
                    var_19 = var_3;
                    var_20 = var_6;
                }
            }
        }
    }
    var_21 = (max(var_21, (((((!(((var_6 ? 1 : 1))))) || 32743)))));

    for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_12 [1] |= (max(var_2, var_9));
        var_22 = 25376;
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_23 += 1;
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    {
                        var_24 = (max(var_24, (((((max(((1501499692 ? var_6 : var_1)), (!var_13)))) ? -var_2 : (arr_9 [i_4 + 2]))))));
                        arr_24 [i_4] [i_5] [i_5] = 5;
                    }
                }
            }
        }
        arr_25 [i_4] = (max((2 - -144), 14385));
    }
    for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] &= (max((arr_1 [3]), 11795977963499687739));
        arr_29 [i_8] = (max((arr_22 [8] [i_8 + 1] [i_8 + 1] [1]), (max(-1417, ((var_3 ? var_16 : -86))))));
        arr_30 [i_8] = ((((((arr_27 [i_8]) ? ((max(var_4, var_3))) : (((arr_21 [i_8] [i_8] [i_8] [i_8]) ? var_9 : var_12))))) ? ((32750 << (var_0 - 240216067))) : (((!var_16) % var_5))));
    }
    var_25 = (var_2 ^ -var_7);
    var_26 = ((112 ^ (+-1966080)));
    #pragma endscop
}
