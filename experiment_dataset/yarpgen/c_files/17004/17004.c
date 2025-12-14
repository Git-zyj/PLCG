/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (max((((!(!var_9)))), ((((max(1, 4294967292))) ? (((1 ? 4646 : 1))) : var_2))));
        var_17 = ((((min(((min((arr_0 [i_0]), -4646))), ((var_6 ? 1 : var_6))))) ? var_1 : ((((((arr_0 [12]) ? (arr_0 [i_0]) : 4649))) ? var_3 : 67108863))));
        arr_3 [i_0 + 1] [i_0] = (min(((max((!4646), (min(4646, var_9))))), ((((min(-4646, 4227858432))) ? (min(var_4, (arr_0 [i_0]))) : -8869801547045468943))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_18 = (min((((((max(3592383654, 4227858433))) ? 33554431 : (((60117 || (arr_1 [i_1]))))))), 4227858416));
        var_19 = (min(((-3436353517594890824 ? (1 >= -4647) : (((var_8 + 2147483647) >> (1354208048 - 1354208029))))), (~var_1)));
        arr_8 [i_1] = ((16752 ? 1 : 33554431));
    }
    var_20 = 0;
    #pragma endscop
}
