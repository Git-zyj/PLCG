/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 = ((((min(((min(var_5, 48276))), (12858724667896808030 / var_11)))) ? 56226 : (+-10)));
    var_17 = var_2;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((+(((arr_0 [i_0]) * (arr_1 [i_0])))));
        var_18 = (((arr_0 [i_0]) ? 2930743542 : (((~(((arr_0 [22]) << (((arr_0 [8]) - 55)))))))));
        var_19 = ((~((max(((2191276002274961416 > (arr_1 [i_0]))), (215 <= 1628820944225638760))))));
        arr_3 [13] [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_2));
    }
    var_20 = var_6;
    #pragma endscop
}
