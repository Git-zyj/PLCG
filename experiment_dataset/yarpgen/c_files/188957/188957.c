/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~(!var_12));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (+((+(((arr_0 [i_0]) & (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = (max(((((arr_1 [i_0]) >> (((((-2147483647 - 1) - -2147483629)) + 38))))), (((((1083109518 ? 4294965248 : -1083109519))) ? (1073741824 & var_11) : ((max(1073741824, -1083109519)))))));
        arr_4 [10] [10] = (max(((min(((1083109517 ? (arr_0 [18]) : 1083109519)), ((((arr_1 [17]) < 0)))))), (max((arr_1 [i_0]), -32759))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [12] &= (min((((arr_1 [i_1]) && -5)), (((arr_0 [18]) || (arr_6 [i_1])))));
        arr_8 [i_1] = (~(arr_5 [20]));
    }
    var_21 = var_17;
    var_22 = ((((((!1) / 767695592))) % -132398041676506333));
    var_23 = ((((((min(3648575423, 255)) + 1083109519))) ? var_3 : (min((-16384 - var_4), var_11))));
    #pragma endscop
}
