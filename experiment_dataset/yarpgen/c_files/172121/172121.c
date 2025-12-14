/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = var_0;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 -= ((((max((arr_2 [i_0]), ((var_13 ? (-9223372036854775807 - 1) : -112))))) ? (((~((var_9 ? (arr_0 [i_0]) : var_4))))) : (min(-112, (max(var_12, (arr_0 [i_0])))))));
        var_20 = 1639501497583289989;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_21 -= ((((max((arr_2 [i_1]), (arr_1 [i_1] [i_1])))) % (((arr_2 [i_1]) ? (arr_0 [i_1]) : (arr_3 [i_1])))));
        var_22 -= max(((((var_7 % 3542504081) % ((((var_1 && (arr_5 [0] [0])))))))), 14421180508432417736);
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_9 [i_2] = (max(((max((arr_5 [i_2] [i_2]), (arr_2 [i_2])))), (arr_6 [i_2] [i_2])));
        arr_10 [0] &= ((-2672395413805173876 && ((max((arr_6 [i_2] [i_2]), (arr_6 [i_2] [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_23 = ((((((var_3 <= (arr_12 [i_3] [i_3]))))) * (((arr_12 [i_3] [i_3]) ? (arr_12 [i_3] [i_3]) : (arr_12 [i_3] [i_3])))));
        var_24 &= ((!(arr_11 [i_3])));
        var_25 = ((var_5 != (arr_0 [6])));
    }
    #pragma endscop
}
