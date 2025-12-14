/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(var_0, ((12482 ? 4310218912483187239 : 65535)))) > ((12786 ? var_2 : (((max(-7331, 12116))))))));
    var_11 = (min(var_11, var_5));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_12 = (arr_1 [i_0 + 2]);

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_6 [0] [i_1] |= (min(var_6, (((((-7352 ? 7331 : var_2))) ? 7331 : (((arr_1 [i_0 - 1]) ? 7331 : (arr_1 [i_0])))))));
            var_13 |= ((((max(((((arr_2 [4]) ? var_3 : var_0))), (max((arr_5 [i_0]), var_6))))) ? (((min((max(107, (arr_3 [i_1] [12] [i_0]))), var_3)))) : (((arr_0 [2] [i_1]) ? (min(var_5, 2995762565)) : ((((!(arr_1 [i_1])))))))));
            arr_7 [i_0] [i_0] = 65535;
        }
        var_14 = (min(var_14, ((((((var_2 ? var_7 : (((arr_4 [i_0]) ? 656853222 : var_9))))) ? (max(1, 2995762583)) : ((((7330 < (arr_4 [i_0]))))))))));
    }
    for (int i_2 = 3; i_2 < 24;i_2 += 1)
    {
        var_15 = ((arr_9 [i_2] [i_2]) ? (((arr_8 [i_2 - 2] [i_2]) ? (arr_8 [i_2 - 2] [i_2 - 2]) : (arr_8 [i_2 - 3] [19]))) : ((((arr_9 [i_2] [12]) % (((!(arr_9 [20] [i_2 - 1]))))))));
        arr_10 [i_2] = ((arr_8 [i_2] [i_2]) ? (((((65535 ? 30 : 31))))) : (arr_8 [i_2 - 3] [i_2 - 2]));
        var_16 = (min(var_16, 1));
        arr_11 [i_2] [7] = var_7;
    }
    #pragma endscop
}
