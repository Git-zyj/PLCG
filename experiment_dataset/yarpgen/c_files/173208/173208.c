/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((!((min(0, var_8)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (min(var_12, (((!(((771995289 ? 5013 : 34383))))))));
        var_13 = ((var_8 << (((max(5, 771995289)) - 771995288))));
        var_14 = ((var_0 ? (arr_2 [i_0] [i_0]) : (var_7 / var_3)));
        arr_3 [1] [13] |= (max((((!(arr_0 [i_0])))), (((arr_0 [i_0]) ? (arr_0 [i_0]) : -771995309))));
        var_15 = (max((((min((arr_0 [i_0]), -771995288)))), (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));
    }
    #pragma endscop
}
