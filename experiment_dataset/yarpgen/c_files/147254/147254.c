/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_1 ? var_1 : ((246 ? 228 : 15931328040387118934))));
    var_14 = max(((((var_4 ? var_3 : var_10)))), 15473478289164291591);
    var_15 = (((min(var_12, ((2973265784545260025 ? 9 : 9)))) / -var_5));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_16 = ((var_7 >= ((var_8 ? var_3 : 50))));
        var_17 *= ((15931328040387118934 ? -1 : -31922));
        var_18 = (min(var_18, -26130));
        arr_2 [i_0] = (-274877906943 * ((((arr_0 [i_0 - 1]) * 228))));
        var_19 = ((+((((arr_0 [i_0]) & 137)))));
    }
    #pragma endscop
}
