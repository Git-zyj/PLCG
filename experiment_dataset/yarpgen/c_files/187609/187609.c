/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((!((max(-19095, 36542))))))));
    var_18 = 20326;
    var_19 = 36542;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = (max((max((((-20327 ? 20351 : -20329))), (max(-6345280041388223942, 6345280041388223942)))), 396099605));
        var_21 = ((~((min((((!(arr_1 [i_0])))), (arr_0 [i_0]))))));
    }
    #pragma endscop
}
