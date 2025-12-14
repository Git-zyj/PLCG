/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_19 = 16082;
        var_20 = ((((min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))) ? ((~((min((arr_0 [i_0]), (arr_0 [20])))))) : (((!((max(var_5, 90))))))));
        arr_2 [i_0] = (((arr_1 [i_0 - 1]) ? (((((95 / (arr_1 [4])))) ? (arr_0 [i_0 + 2]) : 85)) : (arr_1 [6])));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_21 = 8344;
            arr_7 [i_1] [20] = (arr_3 [i_1] [i_1] [i_0 + 2]);
            var_22 = (max(((((min(62, (arr_6 [i_1] [i_1 - 1])))) == var_1)), ((-1 && (arr_4 [i_0] [i_1 - 1] [i_0 - 1])))));
        }
        var_23 = (arr_5 [20]);
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        arr_11 [i_2] = ((((1 ? ((((arr_6 [12] [i_2]) || 48119))) : ((var_7 ? 212 : (arr_10 [i_2] [i_2])))))) || ((!(((127 ? var_3 : -19759))))));
        var_24 = (min(((var_17 & ((~(arr_3 [20] [i_2 - 1] [i_2 + 1]))))), ((~(arr_6 [0] [i_2 - 2])))));
    }
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        var_25 = var_15;
        var_26 = var_18;
    }

    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        var_27 = ((~(((arr_15 [i_4]) | ((~(arr_10 [i_4] [i_4 - 1])))))));
        var_28 = (max(var_16, ((max((arr_12 [i_4 - 1]), 115)))));
    }
    var_29 = (max((min((max(var_3, (-2147483647 - 1))), ((-48 ? var_10 : var_10)))), (min((~var_14), ((max(var_16, var_9)))))));
    var_30 = (min(6, ((~(~var_18)))));
    #pragma endscop
}
