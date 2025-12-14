/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_3 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_20 = ((-(arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_21 = (arr_4 [i_0] [i_1] [i_0]);
            var_22 -= ((arr_4 [i_0] [1] [i_1]) ? (arr_1 [i_0]) : (((524032 ? 31476 : 683927941))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_23 = var_5;
            arr_8 [i_0] = -359594142;
            arr_9 [i_0] = (((arr_4 [i_0] [i_0] [1]) >= (arr_4 [1] [i_0] [i_2])));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_24 = (arr_1 [i_0]);
            arr_12 [i_0] = (((!var_10) ? ((var_10 ^ (arr_0 [i_3]))) : (arr_4 [i_0] [i_0] [i_3])));
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_25 = (((arr_15 [i_4]) ? ((~(arr_6 [i_4] [i_4] [i_4]))) : (((((arr_15 [i_4]) >= (arr_6 [i_4] [i_4] [6])))))));
        arr_16 [i_4] = (arr_13 [i_4] [i_4]);
        var_26 *= ((var_4 ? ((((!((((arr_10 [i_4]) ? (arr_5 [2]) : var_0))))))) : (arr_6 [i_4] [i_4] [i_4])));
        var_27 = (max(var_27, 65535));
    }
    var_28 = var_5;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            {
                var_29 = (max(var_29, (((((((arr_20 [i_6 - 1]) ? (arr_20 [i_6 - 3]) : (arr_20 [i_6 + 2])))) ? (((arr_18 [0] [i_6 + 1]) ? (arr_18 [i_6] [i_6 - 3]) : 16379)) : (((-(arr_22 [i_6 - 2] [i_6 + 1] [i_6 - 3])))))))));
                arr_23 [10] [10] [i_6] = ((-((max((arr_21 [i_6 + 1] [i_6 - 2]), (arr_21 [i_6 + 1] [i_6 - 2]))))));
            }
        }
    }
    var_30 = var_16;
    var_31 = (!var_10);
    #pragma endscop
}
