/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((min(1, 891146428))) ? 4294967290 : 1)) << ((((min(90, 4294967290))) ? ((min(var_1, var_12))) : var_1))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_20 &= (var_1 ? ((4294967290 ? (arr_1 [8] [6]) : ((max(57459, 32767))))) : var_15);
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    var_21 = (((!var_2) ? (((18446744073709551615 || var_11) ? ((var_3 ? 1 : 1222121291)) : ((var_11 ? 7 : var_17)))) : ((((!(1 <= var_10)))))));
    #pragma endscop
}
