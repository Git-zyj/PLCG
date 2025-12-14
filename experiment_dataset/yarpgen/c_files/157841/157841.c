/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((~(min(var_14, 87127608))))) / ((4707512197310144352 ? ((var_10 ? 1567814813 : var_0)) : var_13))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);
        arr_2 [i_0] &= (min((min((arr_1 [i_0]), 87127608)), (((min(87127618, var_7))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_17 = (max(var_17, ((min((max((((arr_4 [i_0] [i_0]) * (arr_0 [5]))), (arr_4 [i_1] [i_0]))), ((max(18223, -126))))))));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_14 [i_1] [i_1] [12] [i_1] [0] [i_1] [i_1] = var_8;
                            var_18 = var_7;
                            arr_15 [i_0] [i_1] [i_0] [2] [i_0] = (((((arr_9 [i_0] [i_0] [11] [i_3 - 2] [6] [i_4]) ? (arr_7 [i_3] [5] [i_2 - 2]) : (arr_7 [i_0] [i_2 + 2] [i_2]))) * ((min((((!(arr_5 [i_0] [i_1] [i_1])))), var_5)))));
                        }
                    }
                }
            }
            arr_16 [i_0] [8] [i_1] = 32767;
            arr_17 [i_1] = var_10;
        }
    }
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        var_19 = (min((((13249562354882956729 % var_3) ? (arr_18 [i_5]) : ((13 ? 1035816965 : 1)))), (((-1224227390 < (-9223372036854775807 - 1))))));
        var_20 = (max(var_20, (max((arr_18 [8]), ((var_3 ? (arr_19 [16]) : ((0 ? 21 : (arr_19 [8])))))))));
        var_21 |= ((min((arr_18 [12]), (arr_18 [10]))));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_22 = (max(var_22, var_1));
        arr_22 [i_6] = ((896 ? ((min(var_6, -569902539))) : ((23425 ? -7664115224192041455 : 4294967295))));
    }
    var_23 &= 5197181718826594893;
    #pragma endscop
}
