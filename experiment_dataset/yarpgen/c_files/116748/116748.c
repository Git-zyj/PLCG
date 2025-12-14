/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (min(((((var_18 > 77) < var_15))), (((var_8 > var_11) - var_1))));
    var_20 = var_5;
    var_21 = (max(var_21, ((((max((3581956192 == 78), 5778174479895350195)) << ((((((65535 ? (8191 - 16548) : var_10)) + 8415)) - 58)))))));
    var_22 = var_11;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 - 3] [i_0] = (((arr_0 [i_0 - 3] [i_0 + 1]) || (arr_1 [i_0 - 1])));
        var_23 = var_7;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1 + 1] [i_1] = ((-5778174479895350210 ? 63 : -5778174479895350173));
        var_24 = (!var_0);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_25 = (arr_4 [i_1 + 1] [i_3]);
                    var_26 = (arr_7 [i_2]);
                    arr_10 [i_1] [i_1] [5] [i_1] = (((arr_7 [i_3]) - (arr_4 [i_1] [i_1])));
                    var_27 |= ((var_4 ? (arr_9 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 - 1]) : -15));
                }
            }
        }
        var_28 = (((arr_7 [i_1]) < 56194));
        var_29 = (min(var_29, ((((arr_6 [i_1] [i_1] [i_1 + 2]) ? (arr_6 [i_1 - 1] [i_1] [i_1 - 1]) : (arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 1]))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_30 = (arr_8 [i_4] [i_4] [i_4] [17]);
            var_31 = (65523 == 67108864);
        }
        var_32 = (min(var_32, (((max((((arr_11 [0]) - 14)), (arr_6 [i_4] [3] [i_4])))))));
    }
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        var_33 = (max((((65535 - var_13) ? ((max((arr_3 [i_6] [i_6]), var_10))) : ((66 ? 1 : var_14)))), (min((var_14 < 39122), -1))));
        var_34 = 5778174479895350185;
        var_35 = (max((((21958 ? (arr_18 [i_6 - 1]) : (arr_7 [i_6 - 1])))), (max(((-5778174479895350191 ? var_9 : 5778174479895350173)), (((arr_19 [14]) ? 5778174479895350154 : (arr_7 [14])))))));
    }
    #pragma endscop
}
