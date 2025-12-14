/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_17 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((((((arr_1 [i_0] [i_0]) ^ (arr_1 [i_0] [i_0])))) ? ((((arr_1 [i_0] [i_0]) & (arr_1 [i_0] [i_0])))) : (var_9 & 1416688163)));
        var_18 = ((var_8 ? ((((-1416688180 ? var_7 : var_1)))) : ((~(var_15 != var_5)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_19 = (arr_0 [i_2]);

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                var_20 = (((arr_7 [i_1] [i_1] [i_1]) && (~var_4)));
                var_21 *= (arr_9 [i_1] [i_2] [i_3 - 1]);
                var_22 = (-2147483647 - 1);
                var_23 = (min(var_23, (((var_11 ? (arr_8 [i_3 - 1]) : (~var_11))))));
            }
        }
        var_24 *= ((((var_14 ? (arr_7 [i_1] [i_1] [i_1]) : (arr_5 [14] [14]))) | (arr_5 [i_1] [2])));
        var_25 = ((17629 << (((((arr_8 [i_1]) ? 2253099835 : var_0)) - 2253099820))));
        var_26 = 13636;
    }
    var_27 = (min(var_27, var_9));
    #pragma endscop
}
