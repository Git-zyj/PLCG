/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_0 [17] [i_0 - 2]);
        var_15 = ((!(arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 = ((arr_1 [12]) ? (((!((((arr_2 [i_0 + 1] [i_1]) ? -60 : (arr_2 [7] [i_1]))))))) : ((~(arr_2 [i_0 + 1] [i_0 + 1]))));
            arr_6 [i_0] [i_1] = (((((arr_1 [i_0]) & (((!(arr_0 [i_0] [i_1])))))) > (((min((arr_5 [10] [10]), (arr_5 [i_0 - 1] [i_0 - 1]))) / ((223 << (var_6 - 65)))))));
        }

        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            arr_10 [1] [8] = (min((max(-0, 16478774305744459081)), (((-(((!(arr_9 [i_0 - 1])))))))));
            arr_11 [i_0] [16] [i_0] = (arr_7 [i_2 - 1] [17]);
            var_17 = min(44, ((var_9 % ((-(arr_5 [i_0] [0]))))));
            arr_12 [i_0] [i_0] = (min(164, (arr_8 [i_2] [i_0 + 1])));
        }
    }
    var_18 -= ((!((!((min(var_0, 1787084043)))))));
    var_19 = var_8;
    var_20 = var_4;
    var_21 = ((((var_13 ? var_6 : (max(var_13, var_3))))) ? ((-(min(var_13, var_7)))) : var_1);
    #pragma endscop
}
