/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_21 += (170 == (arr_0 [i_0]));
        var_22 ^= (((arr_2 [i_0 + 1]) - (arr_0 [i_0 - 1])));
        arr_3 [i_0 - 1] = (((arr_2 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : 2));
        var_23 = (!7);
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_24 = ((!(arr_4 [i_1 + 1] [i_1 + 3])));
        arr_6 [i_1] [i_1 - 1] = (arr_5 [i_1 + 2]);

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_25 ^= (((arr_7 [i_2]) - -15));
            var_26 ^= (arr_7 [i_1]);
        }
    }
    for (int i_3 = 3; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_27 = ((-2 >= (arr_7 [i_3 + 1])));
        var_28 = (min(var_28, (((-var_7 ? ((((arr_11 [i_3]) == 5))) : ((((!(0 / var_6))))))))));
    }
    #pragma endscop
}
