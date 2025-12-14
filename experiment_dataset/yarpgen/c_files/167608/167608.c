/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max(var_3, (~127))) % (max(137438920704, -1))));
    var_13 *= (((((var_6 >= (min(7360447696814901367, var_11))))) - var_11));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = ((-((~(arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_15 = -11086296376894650236;
            var_16 ^= (((-(!158))));
            arr_5 [2] [i_1] [2] &= (arr_2 [0] [i_1]);
        }
        var_17 += (((min((arr_1 [i_0] [i_0]), ((7360447696814901356 ? var_7 : (arr_2 [8] [i_0])))))) ? ((((arr_3 [12] [5] [i_0]) && (arr_0 [i_0])))) : (((max((arr_0 [i_0]), (arr_3 [i_0] [i_0] [i_0]))) / (arr_2 [1] [12]))));
    }
    #pragma endscop
}
