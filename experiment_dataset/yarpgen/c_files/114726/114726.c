/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_3;
    var_16 = ((((!(~var_10)))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_17 = ((!(!3208292253751093808)));
        var_18 = (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_19 = -17;
        arr_5 [13] = -var_10;
        arr_6 [i_1] = (((((-(-32767 - 1)))) || ((((arr_0 [i_1 + 2]) ^ (arr_0 [i_1 + 3]))))));
        var_20 *= (var_3 % var_6);
    }
    #pragma endscop
}
