/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] [i_0 - 1] = (arr_1 [i_0]);
        arr_5 [i_0 - 1] = (((((arr_2 [i_0 - 1]) - (arr_2 [i_0 - 1])))) ? 532676608 : -1);
        arr_6 [i_0] [i_0] = 1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 = 1;
        arr_9 [i_1] [i_1] = ((!-1) ? var_6 : var_6);
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_17 = (((arr_10 [i_2]) ? ((0 ? (!var_6) : 0)) : (arr_11 [i_2] [i_2])));
        arr_12 [i_2] = ((((!(~var_11))) && 5222));
        var_18 = min(((((-1 ? -5232 : 69)))), (arr_10 [i_2]));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_19 = (min((((arr_0 [i_3] [i_3]) ? ((var_9 * (arr_2 [i_3]))) : (arr_7 [i_3]))), 1));
        var_20 = (!(((0 ? (arr_13 [i_3]) : 59027))));
        var_21 = (max(((((((arr_2 [i_3]) ? (arr_13 [5]) : (arr_11 [i_3] [i_3])))) ? (!237) : ((-537470205 ? (arr_1 [i_3]) : -989153465)))), ((65526 ? 65535 : 1))));
        var_22 = (max(((((max((arr_10 [i_3]), 127))) ? 13100744743888085037 : (((var_12 ? 4 : var_6))))), (-32767 - 1)));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_23 = (arr_0 [i_3] [i_4]);
            arr_17 [i_3] = (arr_8 [i_4]);
        }
    }
    var_24 = (((max(18446744073709551615, 65535))));
    #pragma endscop
}
