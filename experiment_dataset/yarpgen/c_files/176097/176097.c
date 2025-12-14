/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 = (((((+((((arr_1 [i_0]) >= (arr_0 [i_0] [i_0]))))))) == ((((arr_1 [i_0]) ? 803635472 : 0)))));
        arr_2 [i_0] = (min((min(var_1, (arr_1 [i_0]))), var_11));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_18 = (((((-(((152 || (arr_3 [i_1] [0]))))))) ? ((-(-20 || 10481622833459314974))) : var_4));
        arr_6 [i_1] [i_1] = ((1680858206076642728 ? 3735901828867978460 : 2523002435));
        arr_7 [i_1] [i_1] = ((var_8 ? (((~(~var_6)))) : (((arr_3 [i_1] [i_1]) ? var_2 : (1014097301229939416 * 2016)))));
    }
    var_19 = (min(var_2, var_5));
    #pragma endscop
}
