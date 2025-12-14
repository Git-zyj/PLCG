/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = 5664465596265799406;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_18 += ((((((arr_1 [i_0]) ? (arr_5 [i_0] [i_1 + 1]) : (arr_5 [i_1 + 1] [i_0])))) == (((arr_5 [i_0] [i_1]) ? (arr_1 [i_1 - 1]) : (arr_5 [i_1 + 1] [i_0])))));
            arr_6 [i_1] = 65535;
        }
        arr_7 [i_0] = 62663;
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_10 [i_2] = ((-(max((arr_0 [i_2]), 253))));
        var_19 = 65535;
        arr_11 [i_2] = ((((((arr_4 [i_2]) | (((arr_2 [i_2]) ? -32758 : (arr_0 [8])))))) ? (((65529 != ((((arr_4 [i_2]) < (arr_3 [i_2] [i_2]))))))) : ((((((arr_2 [i_2]) >> (var_6 - 4379396750020495363))) > (arr_2 [i_2]))))));
    }
    #pragma endscop
}
