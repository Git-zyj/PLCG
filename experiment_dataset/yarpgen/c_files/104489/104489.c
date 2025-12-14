/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_10 = (max(var_10, ((max((((arr_1 [i_0]) ? (((1 ? (arr_1 [i_0]) : 19558))) : (max(8668482586811465767, (-2147483647 - 1))))), (arr_1 [i_0]))))));
        var_11 = (max(var_11, (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = (~((((arr_1 [i_0]) * (arr_0 [i_0])))));
        var_12 += ((~(arr_0 [i_0])));
        arr_3 [i_0] [i_0] = (((((((arr_1 [i_0]) / 3462164508)))) ? (arr_0 [i_0]) : ((274877874176 ? (max(1115368079657744588, var_0)) : (~2147483647)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_8 [18] |= 15;
        var_13 |= (arr_7 [i_1]);
    }
    var_14 = (var_6 ? var_3 : -var_2);
    var_15 = var_0;
    var_16 += var_2;
    #pragma endscop
}
