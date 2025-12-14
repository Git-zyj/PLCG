/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_11 = (max(var_11, 3857367239802742275));
        var_12 = (min(var_12, (((!((max(((14589376833906809338 << (3857367239802742277 - 3857367239802742268))), (min(3857367239802742275, 1))))))))));
        arr_2 [2] = ((((((((-3506335609212795707 + 9223372036854775807) << (((arr_1 [i_0]) - 397))))) ? (min((arr_0 [i_0]), -3506335609212795715)) : 1130575032191892608)) - (((-3506335609212795715 ? -24047 : -113)))));
    }
    var_13 &= var_10;
    var_14 = var_5;
    var_15 = ((var_7 ? 1 : (1 || 530436055)));
    #pragma endscop
}
