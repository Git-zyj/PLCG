/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (min(var_19, (((((min((((arr_2 [1]) / var_14)), (((arr_2 [9]) % -1148173531))))) ? (((var_4 - ((var_1 ? 117 : (arr_2 [i_0])))))) : (((arr_1 [i_0]) | (arr_2 [i_0]))))))));
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);

        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            arr_7 [6] [i_1] [i_1] = var_7;

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_20 = ((-((max(255, -32764)))));
                            var_21 = (max(var_21, ((max((((((max((arr_6 [i_1 - 1] [i_0]), (arr_14 [i_0] [i_0] [i_2] [7] [i_3] [2] [i_4])))) ? var_9 : (arr_1 [i_1 - 2])))), (max(0, (min((arr_0 [i_1] [i_4]), var_13)))))))));
                            var_22 = (arr_6 [i_0] [i_0]);
                        }
                    }
                }
                arr_17 [i_0] [i_0] [i_1] [i_2] = ((-((-(max((arr_11 [i_1] [8] [i_1] [1]), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [9])))))));
                var_23 = (max(var_23, var_3));
            }
        }
    }
    for (int i_5 = 3; i_5 < 7;i_5 += 1)
    {
        var_24 -= (max(((-54 ? var_9 : 0)), (((arr_8 [i_5] [8] [i_5] [8]) ? 127 : (-54 == 14)))));
        var_25 = var_3;
    }
    for (int i_6 = 3; i_6 < 22;i_6 += 1)
    {
        var_26 = (max(((65535 ? 101 : 127)), var_6));
        var_27 &= ((-(min((max(var_7, 237)), (~var_11)))));
        var_28 = ((((((20523 ? 56 : 127) != 104)))));
        var_29 = ((~((151865766 ? (~-92) : 0))));
    }
    var_30 = (((max(((104 ? var_18 : var_14)), ((max(0, var_4))))) + (((~(var_5 != var_15))))));
    var_31 = (((var_11 ? -3563963830329798891 : (((116 ? var_18 : -152592318))))));
    var_32 = (min(var_32, var_5));
    #pragma endscop
}
