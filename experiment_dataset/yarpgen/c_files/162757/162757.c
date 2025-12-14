/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((var_7 * -90767326), -4542482536729554484));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((~(max(2078427657, 4542482536729554483))));
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
        var_17 = -4542482536729554500;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = -2078427651;
        var_18 = -4542482536729554483;
    }
    var_19 = var_8;
    var_20 = ((var_9 == -111559778) ? -var_7 : var_11);
    var_21 = ((-(var_1 >= var_7)));
    #pragma endscop
}
