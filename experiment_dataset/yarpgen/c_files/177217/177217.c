/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += -5727637326279021886;
    var_20 = (min(var_20, (((~(min(((((var_13 + 2147483647) >> (-5727637326279021869 + 5727637326279021883)))), var_15)))))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_21 = ((arr_1 [i_0 + 2]) ? 5727637326279021886 : var_2);
        var_22 = (min(var_22, -5727637326279021888));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_23 = ((!(((arr_5 [i_1] [i_1]) < (arr_5 [i_1] [i_1])))));
        var_24 += ((+((((var_11 << (((arr_5 [i_1] [i_1]) + 5857298986216617487))))))));
    }
    #pragma endscop
}
