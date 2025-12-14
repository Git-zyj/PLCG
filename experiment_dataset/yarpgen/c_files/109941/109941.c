/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_12 ? var_11 : var_7)) ^ ((var_5 ? -543730439 : 9223301668110598144))))) ? (((var_13 ? var_13 : var_6))) : (~var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (((-(min(var_13, (arr_3 [13] [i_1] [13]))))));
                var_19 = (min(var_19, (((!((var_8 == (arr_0 [i_1 - 1]))))))));
            }
        }
    }
    var_20 = 288230367561777152;

    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        var_21 = ((((var_12 << (((min((arr_8 [i_2]), var_14)) - 7092296392507189466))))) ? -8203 : (arr_5 [i_2]));
        var_22 = (min(var_22, ((((arr_3 [i_2 + 3] [10] [i_2]) ? ((max(1071644672, -849))) : (~9223301668110598144))))));
        var_23 = (((arr_8 [i_2]) && (arr_8 [i_2])));
        var_24 = ((((min(140737488354304, (arr_4 [i_2] [i_2 - 1] [i_2])))) ? (((arr_4 [i_2] [i_2 + 1] [i_2 + 2]) ? (arr_4 [0] [i_2 + 1] [i_2 - 2]) : (arr_4 [i_2] [i_2 + 4] [i_2]))) : (-2147483647 - 1)));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_25 = arr_5 [i_3];
        var_26 = (-4194304 ? (((+((140737488354304 ? (-2147483647 - 1) : (arr_7 [1])))))) : 9223442405598953467);
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_27 |= ((!(arr_2 [i_4])));
        var_28 = max((((min((arr_6 [0] [17] [i_4]), (arr_5 [i_4]))))), 15358412943826991907);
    }
    #pragma endscop
}
