/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (min(((3327170698 ? 17706416917257099248 : 3327170698)), (((arr_0 [i_0] [i_0]) ? (arr_2 [i_0]) : 967796590))));
        var_13 |= 50400;
        arr_4 [2] = (min(4294967287, ((-16384 ? 14520017779153951886 : 22279))));
        var_14 = ((967796597 <= (((min(var_6, (arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_15 = ((((min(((-(arr_0 [i_1] [i_1]))), ((min(var_5, var_5)))))) ? ((-(arr_5 [i_1]))) : -27));
        var_16 = (max((min(((max(var_1, -96))), 96)), ((-((max(8, -8)))))));
        var_17 = 23;
        arr_8 [i_1] = var_7;
        var_18 = (min(var_6, ((var_6 ? (arr_5 [i_1]) : (arr_5 [i_1])))));
    }
    var_19 -= ((4294967279 ? 18446744073709551615 : var_3));
    #pragma endscop
}
