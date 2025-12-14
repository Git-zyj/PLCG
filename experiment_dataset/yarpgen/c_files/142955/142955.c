/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((1035470850 ? (max(var_11, (1035470850 % 144))) : (~-var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 &= (-1035470850 / -240);
                var_17 = ((((~(max(65535, var_1)))) ^ (~-1035470850)));
                var_18 += (((((max(0, -2045241722)) - ((115 ? var_11 : (arr_1 [i_0])))))) ? (((-1035470850 >= 2147483647) ? 58 : var_12)) : (!28042));
            }
        }
    }
    var_19 = var_5;
    var_20 = (min(var_20, var_4));
    var_21 = (var_12 / (min(((min(var_7, 76))), var_14)));
    #pragma endscop
}
