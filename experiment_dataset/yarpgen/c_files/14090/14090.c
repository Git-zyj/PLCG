/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((24 < var_15) + (var_11 == 1)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 += ((((min(-62, -80))) ? ((((var_2 >= var_4) < ((var_2 ? 61 : -59))))) : ((0 ? var_16 : -1))));
        var_22 ^= ((359376900 ? ((var_11 ? var_13 : (arr_0 [1]))) : (((max(var_17, -74))))));
        arr_2 [i_0] [i_0] = (max((min(((max(-85, var_13))), ((3935590389 ? -71 : 5995937031688887269)))), (max(var_18, (((8732 ? -8733 : -59)))))));
    }
    var_23 = (((!var_11) + 359376900));
    var_24 = (max(var_24, ((((((-(0 ^ 18446744073709551614)))) ? (((2361186089 | var_2) ? var_6 : ((var_7 ? var_18 : var_3)))) : (max(((min(3935590395, 3400301537))), var_9)))))));
    #pragma endscop
}
