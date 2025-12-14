/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] |= -227396028;
                    var_18 = ((1 ? (((arr_7 [i_0] [i_0]) ? 1 : (arr_7 [i_0] [i_0]))) : (arr_8 [i_0])));
                    var_19 = (min(var_19, var_13));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = (max(var_11, ((var_4 ? (((arr_0 [i_0]) ? (arr_6 [i_0] [i_0]) : 0)) : 27962))));
                        var_20 = (min(var_20, var_11));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_21 = (max(var_21, ((((-1 ? ((var_11 ? 1 : 1)) : ((max(var_13, var_10)))))))));
                        arr_18 [i_0] [i_0] [i_2] [i_0] = (((((1 ? (min(493509964, (arr_9 [i_2] [i_2] [i_2]))) : (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 1 : 0))))) ? -1016813517 : (min(((var_2 ? 1 : 5636)), ((max(0, var_11)))))));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_2] [i_0] [i_0] = (((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))) ? var_16 : var_0));
                        var_22 = ((((((min((arr_6 [i_0] [i_0]), var_15))) ? (~var_1) : (arr_5 [i_0] [i_0] [i_0])))) ? var_17 : -1206172972);
                        arr_22 [i_2] [i_1] [i_1] [i_1] = (((min((arr_4 [i_0]), (-3991 == 1036205383))) ? var_15 : (((min(1, 1)) ? ((1 ? (arr_9 [i_2] [i_1] [i_1]) : 1)) : (min(0, -1531302737))))));
                    }
                }
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
