/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_4 ? ((var_14 ? (((min(255, var_1)))) : ((12124956950742930250 << (var_8 - 16509552968342797211))))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (max((arr_4 [i_0 + 1] [i_0 - 1] [i_1 - 1]), 963325163));
                var_17 = (min(((((max((arr_5 [i_0 + 1] [5] [i_0 - 1]), var_12))) ? 59827 : var_10)), -12484));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_18 = (((max(2708868090, (min(2708868090, var_7)))) + ((-1 ? -1586099205 : var_1))));
                    arr_13 [i_3 - 1] [i_3 - 1] [i_3] [i_2] = (min(((((arr_10 [i_2] [i_3] [i_2]) << (var_5 - 231)))), (((~(arr_9 [i_2 + 1]))))));
                    var_19 = (~-var_6);
                    var_20 = 255;
                    arr_14 [24] [i_4] [24] [i_3] |= ((((arr_8 [5] [5] [i_4]) ? (max(2708868105, var_8)) : var_13)));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_18 [i_2] = (arr_11 [i_2] [i_3 - 1] [i_2]);
                    arr_19 [i_2] = (max(1586099206, 2196894566));
                    arr_20 [i_2] [i_3 - 1] [i_5] [i_2] = ((((((arr_17 [i_2] [i_3] [i_2 - 1] [i_2]) ? (arr_17 [i_2] [i_3] [i_2 - 2] [i_2]) : (arr_17 [i_2] [i_3 + 1] [i_3] [i_2])))) ? (min(var_9, 1586099206)) : (min((arr_17 [i_2] [i_3] [i_3] [i_2]), 94))));
                }
                arr_21 [i_2] [i_3] = -515;
            }
        }
    }
    var_21 = ((((170 >> (!1586099194)))) ? var_4 : (((-(min(var_6, 1586099206))))));
    var_22 = (~var_11);
    #pragma endscop
}
