/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_1;
    var_15 = (min(var_15, var_12));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_16 = (min(var_16, ((((((arr_1 [1]) < var_1)) ? ((((((((arr_1 [8]) ? (arr_1 [12]) : (arr_1 [0])))) || (7 && -3828045450144945032))))) : (arr_0 [i_0 - 2]))))));
        arr_2 [i_0] = (arr_0 [i_0 - 1]);
        arr_3 [i_0] = (i_0 % 2 == zero) ? ((((((!(arr_0 [i_0 - 1])))) >> (((max((arr_1 [i_0]), var_2)) - 3236867620876637029))))) : ((((((!(arr_0 [i_0 - 1])))) >> (((((max((arr_1 [i_0]), var_2)) - 3236867620876637029)) + 3236867620876637039)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [11] = ((!(arr_0 [i_1])));
        var_17 = arr_6 [i_1];
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_11 [i_2] = (((((~(arr_4 [i_2])))) ? (~-3828045450144945019) : ((3828045450144945046 ? -3828045450144945023 : 18446744073709551603))));
        var_18 = (min(-3828045450144945041, ((min(var_4, (arr_6 [i_2]))))));
    }
    var_19 = ((var_9 >= (min(var_7, 17))));
    var_20 = (min(var_11, var_3));
    #pragma endscop
}
