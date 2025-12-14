/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (((((-(arr_2 [i_0])))) >= ((-(arr_1 [i_0])))));
        var_17 = (min(var_17, ((min(((((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))), 0)))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_18 = (((!6595701623229305674) * 196));
        arr_6 [i_1] = ((arr_3 [i_1] [i_1]) ? ((((~53) - ((-(arr_3 [i_1] [i_1])))))) : (max(-3350872672980219174, (arr_4 [i_1]))));
        var_19 = (min(var_19, (max(((((arr_3 [i_1] [i_1]) && (arr_5 [14] [i_1])))), (((min(var_13, (arr_5 [i_1] [i_1]))) ^ (min(var_4, 17530864631116117203))))))));
    }
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        var_20 -= var_1;
        var_21 &= (arr_8 [9] [i_2]);
    }
    var_22 -= (~var_3);
    #pragma endscop
}
