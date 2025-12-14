/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_14 *= var_6;
        var_15 = (((min(((-877000925819420742 ? 0 : 0)), var_8)) <= ((max(((-(arr_1 [i_0]))), ((var_1 - (arr_1 [i_0]))))))));
        var_16 &= (min(var_6, ((((var_0 & var_9) >= (((arr_2 [i_0]) & var_8)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [1] |= (((((max(var_1, var_13)) ? (var_12 <= var_8) : (var_13 || var_5)))));
        var_17 = ((((((((arr_5 [i_1]) ? var_12 : (arr_5 [i_1])))) || ((max(var_6, (arr_0 [i_1] [i_1])))))) ? ((max(var_8, ((var_8 ? var_7 : var_9))))) : ((~(arr_5 [i_1])))));
        var_18 = (((max((((arr_5 [i_1]) % (arr_4 [i_1]))), (((var_2 ? var_3 : var_0))))) < (((arr_1 [i_1]) ? (var_4 >= var_3) : (min((arr_5 [i_1]), var_5))))));
    }
    var_19 = var_13;
    #pragma endscop
}
