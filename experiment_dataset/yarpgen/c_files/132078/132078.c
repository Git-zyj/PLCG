/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [0] = (((var_2 ? (var_6 - 1) : var_6)));
        var_12 = (max(1599877002, ((max(var_8, ((-8597 ? var_7 : (arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_13 = ((-(max(17638660187481450969, ((max(-6280749168549530354, var_3)))))));
        var_14 -= var_2;
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        arr_7 [i_2 + 3] = (max(((max(var_7, (arr_3 [i_2 + 1] [i_2 + 1])))), (((arr_3 [5] [i_2 + 2]) ? (arr_3 [i_2 + 1] [i_2 + 3]) : var_8))));
        var_15 = ((((!(arr_3 [i_2 + 2] [i_2 + 3])))) <= var_5);
        arr_8 [i_2] = 1;
        arr_9 [7] = ((((arr_3 [i_2] [i_2 + 2]) % (arr_3 [i_2] [i_2 + 1]))));
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = -101;
        var_16 = ((((((max(var_4, 1))) ? var_6 : ((max(2118711600, 4294967295))))) > (!16657288659561249691)));
        var_17 = (max((var_5 >> var_1), (!var_5)));
    }
    var_18 = 1940844438;
    #pragma endscop
}
