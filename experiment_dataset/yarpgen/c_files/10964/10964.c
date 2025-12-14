/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = (((((((var_10 ? var_6 : var_6))) ? ((var_12 ? var_0 : var_6)) : (!var_10))) << ((((var_14 ? (((var_2 + 2147483647) >> (var_0 + 6502393872198277704))) : (var_9 | var_6))) - 134217705))));
    var_18 ^= (!var_0);
    var_19 |= (((((~(((-9223372036854775807 - 1) | -2147483639))))) ? ((3449717000723894931 ? 11835 : ((419150075 ? -5 : 16344640056633404539)))) : ((((!4026531840) ? (((4068612192 ? var_15 : var_12))) : ((var_12 ? var_0 : var_9)))))));

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_20 = (255195582812261036 != -1);
        var_21 = (!(((((((-9223372036854775807 - 1) ? (arr_2 [i_0] [i_0 - 2]) : var_8))) ? (~var_2) : (((arr_2 [i_0] [i_0 + 3]) + var_12))))));
        arr_3 [i_0] = ((((960 ? var_4 : var_15))) ? (((arr_2 [i_0 + 4] [i_0]) ? -660776600 : var_8)) : (((var_4 != (arr_1 [i_0])))));
    }
    #pragma endscop
}
