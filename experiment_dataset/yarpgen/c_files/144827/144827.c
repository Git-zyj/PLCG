/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((!(var_9 || 552616146))) || ((!(var_5 || var_7)))));
    var_11 = (((((-(20715 > 20721)))) == (((var_9 | 20721) << (((var_3 - var_5) + 4105369704461098730))))));
    var_12 = ((((-(20721 + -929206825))) | (((((((-32767 - 1) || 929206809))) <= (var_5 || var_0))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = -32767;
        var_13 = ((-(((arr_0 [i_0]) * 20701))));
    }
    #pragma endscop
}
