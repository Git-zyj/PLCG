/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = 1;
        arr_3 [i_0] [i_0] = (((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 1)) + 2147483647)) << (var_12 > 1)));
        arr_4 [i_0] = (((((~(!var_9)))) ? (((!((min(-5229749990081639908, -5229749990081639912)))))) : (min((((arr_1 [i_0]) ? (arr_1 [14]) : var_4)), ((1 << (var_13 - 63166)))))));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] [i_1 + 1] = (min(0, ((max((max((arr_1 [i_1]), var_4)), var_3)))));
        var_17 = arr_1 [i_1];
        var_18 -= (max((((arr_1 [i_1 - 1]) - (arr_1 [i_1 + 1]))), (max(-1222524096, (arr_1 [i_1 - 1])))));
    }
    var_19 = var_5;
    var_20 = (((!var_1) << (var_5 - 7770085967029281198)));
    #pragma endscop
}
