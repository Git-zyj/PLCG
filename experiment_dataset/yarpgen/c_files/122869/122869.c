/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((((((var_4 ? 1 : 1))) ? -67 : (var_6 < var_11)))) - ((var_9 ? 2997254991643660595 : 1)))))));
    var_15 ^= (~var_6);
    var_16 *= var_5;
    var_17 = ((max(var_5, ((1 >> (var_3 - 51805))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_18 -= ((!(((10208894779048588960 ? ((((arr_0 [i_0] [i_0]) == var_1))) : ((60 * (arr_3 [i_0]))))))));
        var_19 = (((min((arr_3 [i_0 - 1]), ((var_3 ? 2501 : var_9)))) >= (((var_5 ? (!var_5) : ((min(var_3, var_2))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_20 ^= (((((+(((arr_1 [i_1]) ? var_11 : (arr_5 [i_1] [i_1])))))) ? (((!(((arr_2 [i_1]) == (arr_0 [i_1] [i_1])))))) : ((1 ? 1 : 12716))));
        var_21 = (~16447);
    }
    #pragma endscop
}
