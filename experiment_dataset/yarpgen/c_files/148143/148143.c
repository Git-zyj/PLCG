/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (max(((1050828135 ? 65519 : (arr_2 [i_0]))), var_3));
        var_19 = ((((max((arr_2 [4]), (arr_2 [i_0])))) ? (~-4882213599698474469) : (arr_2 [i_0])));
        var_20 |= 4882213599698474468;
    }

    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_21 = (((arr_0 [i_1 - 1]) ? var_6 : (!3244139160)));
        var_22 = ((((((!7154608846207886752) ? ((var_11 ? var_6 : (arr_0 [i_1]))) : (arr_1 [i_1 + 1])))) ? var_2 : ((~(max(1748696149704958816, var_3))))));
        var_23 = ((54 ? (max((((var_13 ? var_0 : 1050828135))), (arr_4 [i_1 - 1]))) : (~-4882213599698474452)));
        var_24 ^= ((~(arr_1 [i_1 + 1])));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_25 |= (arr_3 [i_2]);

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            arr_12 [i_2] = (((arr_11 [i_2] [i_2] [i_3]) ? 204 : 1050828135));
            var_26 = (min(var_26, (~4294967295)));
            var_27 = max((((+(((-9223372036854775807 - 1) ? 204 : 18))))), (max((-9223372036854775807 - 1), (arr_9 [i_3] [i_3]))));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_28 = arr_5 [11] [i_4];
            var_29 = (-((27259 ? 32747 : 4882213599698474468)));
            arr_17 [i_2] [8] [11] = (~13247986508540662130);
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_30 = ((~(max(1202921861, 413261123))));
        var_31 = 3244139154;
        var_32 = ((+(min((arr_20 [i_5]), (arr_20 [i_5])))));
        var_33 = (arr_19 [i_5] [i_5]);
    }
    for (int i_6 = 3; i_6 < 7;i_6 += 1)
    {
        arr_23 [i_6 + 1] = ((~(-127 - 1)));
        var_34 = var_7;
    }
    var_35 &= (max(var_16, var_11));
    var_36 = 124;
    var_37 &= (-32767 - 1);
    #pragma endscop
}
