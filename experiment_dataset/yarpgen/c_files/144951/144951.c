/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min((~110), ((min(65523, var_12)))))) ? (((274877906943 ? 1 : 788))) : (((min(144115188075855871, var_6)) / (((var_4 + 9223372036854775807) << (((-1013 + 1050) - 36))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = ((((max(((1415993585 ? (arr_2 [i_0]) : (arr_2 [i_0]))), 481435772))) ? (((14070452116258243007 ? ((~(arr_0 [i_0]))) : (((arr_1 [i_0]) ? -7205496655959103435 : 124))))) : ((-1 * (arr_2 [i_0])))));
        var_17 = (min((~var_13), ((max(((var_2 ? var_8 : (arr_0 [i_0]))), ((((arr_2 [i_0]) ? 18912 : 20593))))))));
        var_18 = (max((-2147483647 - 1), 23080));
    }
    #pragma endscop
}
