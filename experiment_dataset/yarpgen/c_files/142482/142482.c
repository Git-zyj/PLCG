/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (((((((min(3123293634203280118, var_0))) ? (~var_4) : 1059776503))) && ((max(((288195191779622912 ? 13704 : 28355)), (!var_10))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 -= 255;
        var_17 &= (max((max(((var_11 ? var_10 : -1419310099)), 47087)), (9031355574320801984 ^ 12961)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_18 = var_9;
        var_19 = (min(var_19, ((min(663881028, ((var_11 ? var_12 : 18235)))))));
    }
    var_20 = (min(8960827836959896200, 20959));
    #pragma endscop
}
