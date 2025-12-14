/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) > var_5));
        var_17 = min((((2269814212194729984 <= var_0) ? (~-437535761) : var_7)), 176);
        arr_3 [i_0] = (((var_7 + 9223372036854775807) << (((min((min(679019224, 1623056995)), var_11)) - 110))));
        arr_4 [i_0] = (-5 ? ((min(var_2, (var_4 ^ var_3)))) : (max(((4811277554809645532 ? -7830498968864120754 : 4194300)), (4522079432997473287 || var_3))));
    }
    var_18 &= (-var_0 >= (var_6 <= 31));
    var_19 = (~102);
    #pragma endscop
}
