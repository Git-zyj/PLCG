/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(3805279130982509376, var_10)) > (var_14 < var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (((arr_1 [i_1 - 1]) ? (((arr_0 [i_0] [i_0]) % (arr_1 [i_0]))) : (((((arr_1 [i_0]) + 9223372036854775807)) >> (((arr_0 [i_0] [i_1 - 1]) - 1631844756))))));
                var_21 = var_9;
                var_22 = (max(var_22, (((0 >= (min(var_10, 8056423899521609560)))))));
            }
        }
    }
    var_23 *= ((var_2 ? var_7 : 15345724261343325166));

    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_24 = var_16;
        var_25 = 1652;
        var_26 |= min((((((arr_4 [i_2]) ? (arr_4 [i_2]) : 3101019812366226476)))), (arr_5 [i_2] [i_2]));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_27 = var_11;
        arr_9 [i_3] = 3101019812366226457;
    }
    #pragma endscop
}
