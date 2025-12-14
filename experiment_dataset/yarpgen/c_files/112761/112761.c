/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_4 ? -1 : var_12))) ? ((var_11 ? 1159630779 : -1)) : (~var_11)));
    var_19 = (((!((max(1, -62))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) && ((min(1, 928277253675281675)))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_0] = (((((18446744073709551610 ? 16795567682529886469 : (arr_5 [i_0])))) ? 13936 : (arr_4 [i_0])));
            var_20 = ((((min(var_0, (arr_5 [i_0])))) % (((arr_1 [i_0] [i_0]) & var_12))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_21 = (((arr_8 [i_2 + 2] [i_2] [19]) ? (arr_3 [i_2 + 2] [i_2] [i_2]) : ((var_17 ? var_2 : var_13))));
            arr_11 [i_0] [i_0] = ((var_2 ? -462303461 : 1667036222631983697));
            var_22 = ((255 ? (((9 ? var_15 : -1756406001))) : ((134184960 ? 1667036222631983698 : (arr_7 [i_0] [i_2])))));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_23 = var_16;
            var_24 = (((((var_6 ? (arr_12 [5] [i_0] [i_0]) : 2008530481952484603))) ? (var_5 % var_13) : ((var_17 ? var_0 : 1))));
        }
        var_25 = (((-(arr_12 [i_0] [i_0] [i_0]))));
        var_26 = ((-var_9 ? ((((arr_12 [i_0] [i_0] [i_0]) ? (((arr_5 [i_0]) ? var_7 : (arr_10 [8]))) : 1))) : ((1 ? -2016638969 : -var_7))));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_16 [6] = (((arr_3 [i_4] [18] [18]) ? -9531 : ((-(!var_4)))));
        arr_17 [5] [i_4] = (((((-var_10 ? ((var_15 ? var_9 : -1667036222631983714)) : (var_14 ^ 17110)))) ? 14903029767590553116 : (((((485683206388491352 ? (arr_8 [i_4] [i_4] [i_4]) : 50412)))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_27 = (max(var_27, ((((arr_8 [i_5] [i_5] [i_5]) ? -13945 : 17518466820034269940)))));
        var_28 = (min(var_28, var_6));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_29 += (arr_9 [4]);
        arr_26 [12] [i_6] = 35;
        arr_27 [i_6] [i_6] = ((!(!var_17)));
    }
    #pragma endscop
}
