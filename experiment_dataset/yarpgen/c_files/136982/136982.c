/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (((min(var_8, ((43 >> (1033797752 - 1033797724))))) != (((!3261169535) ? 41 : (var_6 + var_8)))));
    var_11 = var_2;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (!((((arr_0 [i_0 + 1]) & (arr_0 [i_0 + 1])))));
        var_12 = (max((3934790830742579787 / var_4), (((min(var_8, 9223372036854775781)) - 1827540331))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_7 [i_0] = ((25 ? 1033797733 : 1033797728));
            arr_8 [i_0] [i_0] = -849472867;
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            arr_12 [i_0] [i_2] = ((!((((arr_3 [i_0 + 1] [i_0 + 1]) ? -var_8 : ((4255524011 ? 8755925353746512064 : var_6)))))));
            var_13 = (min(var_13, var_3));
        }
        arr_13 [i_0] = ((((((!(var_0 > var_0))))) - (((313298736 <= var_1) ? 849472862 : 131040))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_17 [i_3] = (!16681972360103171000);
        arr_18 [i_3] = arr_14 [i_3];
        var_14 -= ((((!(2 > 51))) ? (arr_15 [i_3]) : (((((var_4 ? 510847008 : var_0))) ? 2147483623 : -var_3))));
        arr_19 [i_3] |= -3934790830742579768;
    }
    var_15 = (max(var_15, 13));
    var_16 |= (max(((-(max(var_4, var_7)))), (((!((min(var_7, var_9))))))));
    #pragma endscop
}
