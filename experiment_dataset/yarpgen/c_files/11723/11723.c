/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = (max(var_19, ((((((var_2 ? var_15 : 4294967295))) ? (((!(((var_4 ? 24 : 1)))))) : (var_9 || var_12))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_20 = ((((~(arr_1 [i_0]))) - (arr_1 [i_0])));
        var_21 |= (((((-1 + 2147483647) >> (962470642795951642 - 962470642795951636)))) ? 1 : 1);
        arr_2 [i_0] = (((arr_0 [i_0 + 1]) ? var_4 : var_1));
    }
    var_22 = var_17;
    var_23 = ((((1382848408128303063 ? 1 : -1)) != ((((62576 >= ((831691082564169127 ? 4294967276 : 7691835120610394209))))))));
    #pragma endscop
}
