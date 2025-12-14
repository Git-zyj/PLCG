/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((min((max(-7555643391778771110, (-127 - 1))), (((-32765 ? 18438 : 18446))))), (((((min(1, 1)))) & (min(-5035235136572630757, 923553680))))));
    var_11 -= ((18438 ? ((max((-32765 / 18453), (1 < 8065972922569055275)))) : (min(1, 0))));
    var_12 = (max(var_12, ((max(((((-31140 < 12136) < (266412026 == -104)))), (min((7297435990026048445 < -404456146), (min(-114, 1)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = 65273;
        arr_4 [i_0] [i_0] = 1;
        var_13 -= (3298288798 / -17409);
        var_14 *= -127;
    }
    var_15 -= 22011;
    #pragma endscop
}
