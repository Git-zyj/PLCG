/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = ((!(((((min(var_12, var_6))) ? (min(var_11, var_8)) : ((var_5 ? var_5 : var_4)))))));

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_16 = (((((((var_9 ? (arr_1 [i_0]) : var_13)) << (((arr_0 [i_0 - 1]) - 84))))) ? var_8 : (((min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_17 = (((((!(arr_3 [i_0 - 4] [i_0])) ? (((arr_3 [i_0 - 1] [i_1]) % (arr_0 [i_0]))) : (((arr_5 [i_0] [4] [i_0 - 2]) ? (arr_1 [i_0]) : (arr_1 [i_0 - 2])))))));
            arr_6 [i_0] [i_0] = ((!((min((var_0 % var_12), (arr_1 [i_0]))))));
            var_18 = (max((((arr_5 [i_0 + 1] [i_0] [i_0]) ? (arr_5 [i_0 - 3] [3] [i_1]) : (arr_5 [i_0 - 2] [i_1] [i_1]))), ((min((arr_5 [i_0 - 1] [i_0] [i_0]), (arr_5 [i_0 - 1] [1] [i_0]))))));
            var_19 *= var_1;
        }
        for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_20 = (((!2439458705) ? (min((arr_3 [i_0 - 1] [i_0 + 2]), ((var_0 ? (arr_7 [i_2 - 1] [i_2] [12]) : var_6)))) : ((min((((arr_4 [i_2] [i_0] [i_0]) & (arr_9 [i_0]))), (arr_2 [i_0] [i_2 + 1] [i_2 + 1]))))));
            arr_10 [i_2] = ((((arr_3 [i_2 - 1] [i_0 + 2]) % (arr_3 [i_2 + 1] [i_0 + 2]))) % ((min((arr_3 [i_2 + 2] [i_0 - 1]), (arr_3 [i_2 + 1] [i_0 - 2])))));
        }
        for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_21 = (arr_1 [i_0 - 3]);
            arr_13 [5] [i_3] = (~var_10);
            var_22 = ((((min((arr_4 [i_3] [i_3 + 1] [i_0 - 4]), (arr_4 [i_3 + 1] [i_3 + 1] [i_0 - 4])))) * (((!(arr_4 [i_3 + 2] [i_3 + 2] [i_0 - 3]))))));
        }
        for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_23 = (arr_4 [i_0 - 2] [i_0] [i_0]);
            var_24 = (max(var_24, ((((((((var_11 ? var_8 : (arr_4 [i_4] [i_4] [i_4])))) ? (var_13 & var_11) : (!var_10))) >> (((arr_17 [i_4 + 1] [i_0 - 1]) << ((var_4 ? var_0 : (arr_5 [i_0] [12] [i_4]))))))))));
        }
        var_25 = (arr_11 [i_0 + 1] [i_0 - 3]);
        arr_18 [i_0 - 1] = (((arr_0 [i_0 - 2]) >> ((((min((arr_0 [i_0 + 2]), (arr_0 [i_0 - 3])))) - 56))));
    }
    #pragma endscop
}
