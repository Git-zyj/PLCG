/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (~233887429468886864);
        var_19 = (max(var_19, (((((((!32763) ? var_6 : -32763))) ? (((((((arr_0 [i_0]) < 9223372036854775807))) + 32763))) : ((-9278 ? 9223372036854775783 : 32763)))))));
    }
    var_20 = (max(var_20, var_7));
    var_21 = (max(var_21, (((var_6 || (32767 || -9223372036854775793))))));

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = 9223372036854775781;
        arr_6 [i_1] = (((((((min(var_7, (arr_4 [i_1] [i_1])))) ? (1 + 9223372036854775781) : ((((arr_3 [i_1]) ? 278164976 : var_16)))))) ? var_6 : (((var_1 % (arr_3 [i_1]))))));
    }
    #pragma endscop
}
