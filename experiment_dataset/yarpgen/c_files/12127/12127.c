/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((max(((var_10 ? var_10 : 31)), var_9))), (min((min(var_4, var_13)), var_0))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_17 = ((-(((arr_0 [i_0]) ? var_12 : (arr_0 [i_0])))));
        var_18 -= (var_1 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_19 = (((((((arr_4 [i_1]) ? var_14 : (arr_0 [i_1])))) ? -24 : (arr_3 [i_1]))));
        var_20 = (((((arr_0 [i_1]) ? (!8266395893238427107) : ((var_3 ? (arr_4 [i_1]) : (arr_2 [i_1] [1])))))) ? 2973131853 : ((((-127 > (arr_0 [i_1]))))));
        var_21 = (min((~var_9), (~842)));
    }
    var_22 &= var_12;
    #pragma endscop
}
