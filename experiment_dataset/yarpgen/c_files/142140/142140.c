/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -3856787500008496536;

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_12 = 1;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = ((var_1 ? (!4610) : ((-((-(arr_6 [i_0] [i_0 + 2] [i_0] [i_0 + 2])))))));
                    arr_10 [i_0 - 1] [i_0] [i_2] = ((((-var_0 ? (max((arr_5 [i_0] [i_1 + 2] [i_2]), 65523)) : 65535)) != (((((((22 ? var_5 : 1294444057))) && (arr_5 [i_2] [i_1 + 1] [i_0])))))));
                }
            }
        }
    }
    var_14 = (max(var_5, var_1));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            {
                var_15 = (4294967295 != 65535);
                arr_16 [i_3] [i_4 + 2] = (((39503 > 14) ? -5401681948929121349 : (arr_13 [i_3])));
                arr_17 [i_3] [i_4] = (arr_7 [0] [i_4] [i_3] [i_4 + 4]);
                var_16 = ((((((65517 ? var_5 : (arr_8 [i_4] [i_4 + 3] [i_3]))) ? (arr_6 [i_4] [i_4] [i_3] [i_3]) : var_1))));
                arr_18 [i_4 + 1] [i_4] [i_4] = ((((!(min(var_6, 1)))) ? (((-(!12392)))) : 1));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                arr_24 [i_5] [i_5] [i_6] = ((arr_6 [i_5] [i_6] [i_6] [i_6]) ? ((max((arr_0 [i_5]), (arr_0 [i_5])))) : (((arr_6 [i_6] [i_5] [i_6] [i_6]) / (arr_6 [i_6] [i_6] [i_5] [i_5]))));
                arr_25 [i_5] = ((63 ? ((-1294444058 ? 14 : 1)) : var_5));
                arr_26 [i_5] = ((((max((arr_14 [i_5] [i_5] [i_6]), 1763387412))) & (arr_0 [i_5])));
                arr_27 [i_5] [i_5] = ((((-(arr_19 [i_6] [i_5]))) != ((((((arr_13 [i_5]) / 18940))) ? (arr_23 [i_5] [i_6]) : (arr_2 [i_6])))));
                arr_28 [i_5] [i_6] = min((((!(arr_22 [i_6] [i_6])))), (max((arr_22 [i_6] [i_5]), (arr_22 [i_5] [i_6]))));
            }
        }
    }
    #pragma endscop
}
