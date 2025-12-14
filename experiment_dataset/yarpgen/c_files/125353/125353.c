/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-4076669655 ? var_8 : (var_11 ^ var_12)));
    var_14 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_15 = (((arr_2 [i_1] [i_1 + 1]) > var_8));

            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                var_16 = ((((arr_5 [i_2] [i_1] [1]) ? var_6 : 1474354020)));
                var_17 = (max(var_17, var_5));
            }
            var_18 = (arr_3 [i_0]);
        }
        arr_8 [i_0] [i_0] = ((~(arr_4 [i_0] [i_0] [i_0])));
        var_19 = (((218297641 && var_12) || var_3));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_20 = ((var_7 + (var_2 && var_11)));
        var_21 = ((-(arr_10 [i_3])));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_22 = ((((min(var_12, var_4))) && ((var_1 <= (arr_9 [i_4])))));
        var_23 = (((((var_9 <= var_3) ? var_1 : 218297648))) + (((((var_5 ? 4633193485503706399 : var_0))) ? (var_8 || 4076669655) : (((arr_11 [i_4]) ? 1474354020 : var_11)))));
    }
    #pragma endscop
}
