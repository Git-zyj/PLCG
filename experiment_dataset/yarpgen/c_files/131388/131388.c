/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, -512768381));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = 61526;
        var_18 = (((!(6190239951790661096 + 12256504121918890519))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_19 &= 32741;
        arr_8 [i_1] = (max(6190239951790661084, (min((arr_7 [i_1]), (arr_7 [i_1])))));
    }
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        var_20 = (min(var_20, ((max((((-16384 >= 6190239951790661096) ? -3765569303 : -31849)), (((-7 == (16384 >= 62)))))))));
        arr_12 [i_2] [i_2] = (((((4361 ? -6980995921075568676 : var_10))) ? ((min((min((arr_6 [6] [i_2]), 6634473568987125017)), (arr_7 [i_2])))) : var_7));
        var_21 -= (13 ? ((min(var_12, 8192))) : (!12256504121918890526));
        var_22 = -var_10;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        var_23 ^= 4294967283;
        arr_16 [i_3] = (arr_11 [8] [i_3]);
        var_24 = ((var_6 ? (((arr_7 [i_3]) + 78)) : (!var_5)));
    }
    var_25 -= (~1);
    var_26 = (-30798 == 1470827128);
    var_27 = ((((min(128, 6190239951790661099))) ? -9209255081106327894 : (((min(1, (min(1, 9))))))));
    #pragma endscop
}
