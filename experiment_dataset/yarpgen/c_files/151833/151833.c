/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((var_5 ? (!8145217848287513460) : ((min(5876, 172)))))), ((-2294 ? -1931868951751348427 : 1931868951751348427))));
    var_15 = (min(var_15, (((((((1931868951751348427 / var_8) / var_5))) ? var_10 : var_12)))));
    var_16 = (((((var_10 * (242598364 / -1931868951751348421)))) ? -var_7 : -var_9));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 += max((((((min((arr_1 [i_0] [i_0]), var_5))) || var_6))), ((((min((arr_0 [8]), 62))) ? (((min(46, (arr_3 [i_0]))))) : (max((arr_1 [i_0] [i_0]), 4217770447)))));
        arr_4 [i_0] = (((min(var_9, (arr_2 [i_0] [i_0])))) % ((~(((1 >= (arr_3 [i_0])))))));
    }
    #pragma endscop
}
