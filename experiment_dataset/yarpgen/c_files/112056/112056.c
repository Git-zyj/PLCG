/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = ((var_2 ? ((~(arr_0 [i_0]))) : (((((max(var_5, (arr_1 [i_0] [i_0])))) ? var_0 : 859792884)))));
        var_13 = ((((((((var_11 ? -1950191680 : var_9)))) + 2147483647)) >> (min(((-859792884 ? 1 : 53981)), ((1738630577 ? 10029 : 0))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_14 = (((-((12404 ? -859792884 : -31201)))));
        var_15 &= ((((max(var_7, (arr_4 [i_1])))) ? (((((1 ? -26 : (arr_4 [i_1])))) ? 2556336719 : (((var_1 ? var_1 : (arr_4 [i_1])))))) : var_2));
        var_16 = (max(((((12404 ? 19946 : 3282530712)) >> (((((-7262983494262666955 + 9223372036854775807) << (((-1946048732 + 1946048771) - 38)))) - 3920777085184217698)))), 2450811835));
        var_17 = (min(((1012436584 ? (-2128562612 & 2556336719) : (((max(24092, -28251)))))), ((max(var_4, (arr_4 [i_1]))))));
        var_18 = (max((((var_0 <= (var_0 / 57017)))), (((0 ? (arr_2 [i_1] [i_1]) : 0)))));
    }
    var_19 = ((min((((-27516 ? 1 : 0))), var_11)));
    var_20 = (max(15637, ((((((var_2 ? var_8 : var_11))) || 44924)))));
    #pragma endscop
}
