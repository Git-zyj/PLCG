/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_4 && (((827523787 ? 0 : var_8)))))));
    var_20 = (max(var_20, ((max(var_8, (((7 > (!var_11)))))))));
    var_21 += (((((var_4 ? (max(var_11, 8589934591)) : -var_3))) ? ((max(((max(var_18, -827523787))), ((var_9 ? var_15 : var_5))))) : (((max(-7116792261149996510, var_0)) << ((((max(7936, (-127 - 1)))) - 7882))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_22 = (min(var_22, var_4));
        arr_2 [13] = 827523787;
        var_23 = -7116792261149996527;
        arr_3 [i_0] = ((((max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) ? (146 & 116) : var_13));
        var_24 = (max(var_24, (((-7116792261149996510 ? -8703825475509269590 : 4)))));
    }
    #pragma endscop
}
