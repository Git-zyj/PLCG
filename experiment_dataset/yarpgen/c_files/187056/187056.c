/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (max((max((min(7801982826245593968, 213)), ((max((arr_0 [i_0]), 6591))))), ((max(var_12, var_11)))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_0] = max((((arr_5 [i_0] [i_0]) ? (((((arr_1 [i_0] [i_0]) && var_6)))) : ((39815 ? (arr_0 [i_0]) : var_4)))), ((((((65535 ? var_10 : 1))) < -var_3))));
            var_16 = (min(var_16, var_7));
            arr_7 [i_0] [i_0] = ((!(((arr_0 [i_0]) && (((arr_1 [i_0] [2]) < (arr_0 [i_1])))))));
        }
        var_17 = min(((-178981513 - (((!(arr_3 [11])))))), ((((var_2 & 2999839009) >= (((~(arr_2 [i_0]))))))));
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        var_18 = ((((-1 ? (arr_5 [i_2] [i_2]) : -1)) << (((min((((0 ? 14889 : (arr_10 [i_2] [i_2])))), ((0 ? (arr_2 [i_2]) : (arr_8 [i_2] [i_2]))))) - 1670779543074976846))));
        var_19 = (max(var_19, (((((max((arr_1 [i_2 + 1] [i_2 + 3]), (max(var_2, var_6))))) ? (arr_2 [i_2 - 1]) : (max((arr_2 [i_2 - 1]), (arr_2 [i_2 + 2]))))))));
    }
    var_20 ^= ((((((-var_14 < (min(var_4, 8495156712876245221)))))) >= (max((max(var_13, var_12)), var_0))));
    #pragma endscop
}
