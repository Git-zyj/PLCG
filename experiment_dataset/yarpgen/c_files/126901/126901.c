/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] |= (0 - -32758);
        var_15 = (((min((arr_1 [i_0]), 12)) != (((!var_10) ? (!var_1) : (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [8])))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = (min(((var_9 ? (arr_6 [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0]))), (((arr_4 [i_1] [i_0]) - (arr_4 [i_0] [i_1])))));
            arr_8 [i_1] = ((((((var_0 >> (var_7 - 1181960137))))) != var_7));
        }
        arr_9 [i_0] [i_0] = ((~(arr_5 [4])));
        var_16 = ((+(min(((((arr_0 [i_0] [i_0]) << (((arr_6 [16] [i_0] [i_0]) - 1227))))), (min(var_2, (arr_3 [i_0] [8])))))));
    }
    #pragma endscop
}
