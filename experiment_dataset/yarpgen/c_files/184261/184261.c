/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((min((min(var_14, -5)), var_16))), ((((min(var_12, var_2))) ? -var_17 : (min(255, 0))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0] [i_0]) ? 0 : (arr_2 [i_0] [i_0])));

        for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_0] = ((!(((20 ? (arr_7 [4] [i_1] [i_0]) : var_17)))));
            var_19 = (((arr_5 [i_1] [i_1 - 1] [i_1 - 1]) | (arr_5 [i_1] [i_1 + 2] [i_1 + 1])));
        }
        for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                var_20 = (((arr_9 [i_2 + 1] [i_2 - 1] [i_3 - 1]) ? 2147483647 : (arr_1 [i_2 + 1])));
                var_21 = (((arr_7 [i_2] [i_2 + 1] [i_2 - 1]) != ((-1 ? 10 : (arr_9 [i_0] [i_0] [i_0])))));
                arr_14 [i_2] [i_3] = (!0);
            }
            var_22 += (((arr_2 [i_2 + 2] [i_2 + 2]) ? (arr_2 [i_2 + 2] [i_2]) : (arr_2 [i_2 + 2] [i_2 - 1])));
            arr_15 [i_2] = 26;
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_23 = ((-(arr_6 [i_4] [i_4] [i_4])));
        arr_18 [i_4] = (((0 != (arr_7 [i_4] [i_4] [i_4]))));
    }
    var_24 = (max((((((min(var_12, var_16)))) % (min(var_8, 32767)))), -1));
    var_25 = (0 ? (((16777215 ? 32767 : var_13))) : var_17);
    #pragma endscop
}
