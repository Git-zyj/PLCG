/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((((var_5 << (var_7 - 2713161806))) != var_12));
    var_17 = (min((((((max(198, var_5))) < (2372 ^ var_12)))), var_12));
    var_18 = var_0;
    var_19 = ((((-2386 ? var_4 : -var_6)) / var_12));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = ((((((arr_0 [i_0]) - (arr_0 [i_0])))) ? 1487098516 : (arr_0 [i_0])));
        arr_3 [i_0] = (max((max(1031016054, 26)), ((-1278479177 ? 1 : 1))));
        arr_4 [i_0] [i_0] |= (((max(((((arr_1 [i_0]) ? (arr_1 [i_0]) : -16904))), (max((arr_0 [i_0]), (arr_2 [8] [i_0]))))) >= (((((arr_2 [i_0] [i_0]) > -27851))))));
    }
    #pragma endscop
}
