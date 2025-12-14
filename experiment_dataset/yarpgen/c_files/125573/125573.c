/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-(max(69644475016083314, ((max(31423, (arr_2 [0]))))))));
        arr_4 [i_0] = max(-14362, 69644475016083304);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_14 = ((-14370 ? (((((arr_6 [i_1]) ? 69644475016083304 : -965175134)))) : 1104958901));
        var_15 *= ((2930741680299767781 && (arr_6 [10])));
    }
    var_16 -= (var_5 || var_8);
    var_17 = (max(var_17, var_6));
    var_18 = (max((var_1 <= 69644475016083286), ((((max(1104958901, var_1))) ? (max(0, 18446744073709551615)) : var_5))));

    for (int i_2 = 3; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_19 = (max(var_12, (max((arr_9 [i_2 + 2] [i_2]), (-965175125 ^ 1839239394)))));
        var_20 = (max(10397321973584803393, -121));
    }
    for (int i_3 = 3; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] = (arr_12 [1]);
        arr_15 [i_3] = var_5;
        var_21 &= 69644475016083292;
    }
    #pragma endscop
}
