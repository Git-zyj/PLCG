/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (~1252408736);
        var_14 = ((~((~(arr_0 [i_0])))));
        var_15 = (!942952535);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_16 = (min(((min((min(85, 942952535)), (arr_3 [i_1] [i_1])))), -var_6));
        arr_6 [i_1] [i_1] &= (max((((~(arr_1 [i_1] [i_1])))), (max((~15), var_2))));
        arr_7 [i_1] = ((!((max(-1827727979, -942952535)))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_17 += min((min(18446744073709551615, ((max(0, 194))))), ((min((min(1446725856, 154)), 110))));
        arr_10 [i_2] = (min((min(12154, (arr_3 [i_2] [i_2]))), ((-(!var_3)))));
        var_18 = (max(((max((((!(arr_8 [i_2] [i_2])))), (max(17172, 1))))), (max(63488, (min(var_2, (arr_3 [i_2] [i_2])))))));
    }
    #pragma endscop
}
