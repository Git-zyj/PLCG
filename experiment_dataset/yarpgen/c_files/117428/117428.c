/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 ? (var_7 >= var_6) : var_0));
    var_11 *= (!4294967268);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (max(((+(((arr_2 [i_0]) ? 28 : (arr_0 [i_0] [i_0]))))), 2600801707));
        var_13 -= var_9;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_14 = (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])));
        var_15 = (arr_4 [i_1]);
        var_16 ^= ((((var_1 << (((arr_3 [12]) + 2406910566202299372))))) ? (arr_4 [i_1 + 3]) : ((173 ? 22 : (arr_3 [4]))));
    }
    var_17 = ((((var_3 != ((4831924941615425167 ? -2336377341273630768 : -2336377341273630768)))) ? (((var_3 < var_0) ? ((var_8 ? var_5 : var_6)) : var_4)) : (((-41 ? 4294967273 : 28)))));
    #pragma endscop
}
