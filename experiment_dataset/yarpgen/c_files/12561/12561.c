/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (max(var_19, ((((arr_0 [i_0]) ? (((!0) + (arr_0 [i_0]))) : (~1))))));
        var_20 = (!((min((var_17 - 2147483647), ((var_6 ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_21 *= (((arr_1 [i_1] [i_1]) ? (arr_2 [i_1] [0]) : ((((var_12 ? var_7 : (arr_0 [i_1]))) % 1))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_2] [i_3] [i_4] = (min((((1 + ((1 + (arr_11 [i_1] [i_2] [i_3] [i_4])))))), var_2));
                        var_22 += ((-47145 ? ((min(-80956713, 1))) : (max((min(1, (arr_2 [i_1] [i_2]))), ((var_15 - (arr_2 [i_1] [i_2])))))));
                        arr_14 [i_1] [i_2] [i_3] [i_1] [i_4] = (((!((max(2147483647, var_9))))) ? -80956710 : 1);
                    }
                }
            }
        }
        var_23 &= arr_5 [i_1] [i_1];
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_24 = ((+(((arr_15 [i_5]) ? ((1 ? var_4 : 1)) : (max(1325786202, 6309813664949111802))))));
        arr_17 [i_5] [i_5] = (1 & -990518508);
    }
    var_25 &= var_0;
    var_26 = var_4;
    var_27 = (max(var_27, var_3));
    #pragma endscop
}
