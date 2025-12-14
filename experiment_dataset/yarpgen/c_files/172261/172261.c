/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, -104));
    var_21 *= ((((max((min(0, -1595701632089066130)), (!59740)))) ? 8590062459314590407 : var_1));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_22 = (min(var_22, ((((((~7223531198522467906) % -149)) & ((min(((0 ? 3 : 0)), ((26 ? 36 : -48))))))))));
        var_23 = ((((14318473965420213038 ? 4046170534 : 17)) >= (4294967276 % 36)));
        var_24 = ((0 & ((max((-2096 || 0), ((2305843009213693951 ? 0 : 1)))))));
    }
    #pragma endscop
}
