/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((max((!var_5), (min(225, 65535)))), (!225)));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_17 = ((((var_7 ? (((min(-25, 0)))) : (var_15 - 9212724200275517050))) + (((min((min(-14, var_13)), (-32757 == 2)))))));
        var_18 &= -var_12;
        arr_2 [i_0] [i_0] = 64;
        var_19 = var_3;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_20 *= ((((((9 ? var_6 : 33421)))) ^ ((min(var_6, var_8)))));
        var_21 = ((((min(238, 14))) ? (~6916223810539318194) : ((((min(-32754, -114641316)))))));
    }
    #pragma endscop
}
