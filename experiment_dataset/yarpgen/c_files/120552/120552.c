/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((!var_7) ? 4750705850392604 : ((((var_2 * -95) ? var_10 : (132 % 10))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 ^= max(((((((-86 + 2147483647) >> (11322712753928466113 - 11322712753928466097))) << (((arr_0 [i_0]) - 9996869031730078884))))), (((arr_0 [4]) * (var_2 + 7124031319781085502))));
        arr_2 [1] [1] = ((4750705850392604 << (15491 - 15482)));
    }
    var_13 &= ((~(((~104) ? -121 : ((max(var_8, (-127 - 1))))))));
    var_14 &= max(((~(var_1 + -123))), var_2);
    #pragma endscop
}
