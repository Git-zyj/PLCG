/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (~4971482172186596295)));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_17 = (max(((((111 - 47932) ? 9 : ((max(47916, var_0)))))), ((1 ? (((-(arr_4 [i_0])))) : ((var_0 ? var_12 : 7692298235384152758))))));
                    var_18 = (min(var_18, (((((((max(var_2, var_8))) - (18446744073709551614 - var_15))) + (((((min(var_14, 0))) ? (max(var_15, var_4)) : 246))))))));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_19 = max((((!(arr_10 [i_1 - 2] [13] [17] [17])))), 144);
                    var_20 = (min(var_20, (~var_13)));
                }
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_21 = ((-((~(arr_10 [i_0] [i_1 - 2] [i_4] [i_0])))));
                    var_22 = var_7;
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_23 = (max(var_13, 127));
                    var_24 = (((max((arr_6 [i_5] [i_1] [i_0]), (((arr_11 [i_0] [i_1] [i_5] [i_0]) ? var_2 : 5292663609992741132)))) <= (arr_16 [i_0] [i_1 - 1] [i_5] [i_0])));
                    var_25 = ((((((((-9223372036854775807 - 1) ? var_15 : 252))) ? (((max(27, 1)))) : 35993612646875136)) / ((13154080463716810484 ? (arr_15 [i_0] [i_1] [i_5] [i_0]) : (max((arr_17 [i_5] [i_1] [i_0]), (arr_1 [18] [i_1 + 1])))))));
                    var_26 = (min(((((arr_0 [9]) ? (min(251, -4971482172186596296)) : (var_10 * 158)))), (~6429625101820177986)));
                }
            }
        }
    }
    var_27 = ((var_3 | (((((min(122, 0))) ? (!1) : var_15)))));
    var_28 = (!12017118971889373630);
    #pragma endscop
}
