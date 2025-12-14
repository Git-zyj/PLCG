/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 3189904425;

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = max((9883470790671674691 - var_5), ((var_8 ? (arr_2 [i_0 - 4]) : (arr_2 [i_0 - 4]))));
        var_11 = (min(var_11, ((-(((arr_1 [i_0 - 4]) & (arr_1 [i_0 - 4])))))));
        var_12 = (max(var_12, (((!((min((8563273283037876941 && 1906934620), 8563273283037876941))))))));
    }
    var_13 = max((max(7074386240592980129, 8563273283037876936)), (max((338183699 >= 2993434278), (min(17540549967155855565, 9883470790671674680)))));
    #pragma endscop
}
