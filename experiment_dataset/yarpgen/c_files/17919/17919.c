/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((-9127454597162124931 ? (!var_7) : (-9127454597162124941 - 2001067467))) >= var_12));
    var_18 = (9223372036854775795 + -5776643885976781621);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (arr_2 [i_0] [i_0]);
        var_20 = (max(var_20, (arr_1 [9])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = arr_6 [i_1] [i_1];
        arr_8 [i_1] = (((arr_4 [i_1]) && (((((!(arr_6 [i_1] [i_1]))) ? (arr_3 [i_1]) : (arr_5 [i_1] [i_1]))))));
        arr_9 [i_1] = (((((((9127454597162124917 ? 1512364860 : (arr_0 [i_1])))) ? (arr_1 [i_1]) : (arr_6 [i_1] [i_1]))) ^ (arr_0 [i_1])));
        arr_10 [i_1] [i_1] |= (max(9127454597162124933, 9127454597162124931));
    }
    var_21 += ((((((((var_14 ? var_16 : var_8))) ? var_14 : 250))) ? (((((8449366200757904595 ? var_7 : var_16))) ? ((var_15 >> (var_1 - 49))) : var_12)) : (max(var_3, ((1914534700 ? 196 : var_7))))));
    #pragma endscop
}
