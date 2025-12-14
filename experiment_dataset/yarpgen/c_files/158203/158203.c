/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((((!(((var_14 ? 51547 : var_9))))) ? (var_3 == var_15) : ((~((var_5 ? 37760 : 53263))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_17 = (8635128749598198931 >= 18446744073709551615);
        var_18 = (((((((min((arr_3 [i_0]), 3409506020)) >= -120)))) ^ (min(-7698762756287750228, ((min((arr_2 [i_0] [i_0]), -120)))))));
    }
    var_19 = (max(var_19, (((((((var_5 ? var_2 : -2097152)))) ? (min((~var_1), var_8)) : ((var_9 << (((var_3 / 2097151) - 765)))))))));
    var_20 += ((~((min(-2097128, (!var_12))))));
    #pragma endscop
}
