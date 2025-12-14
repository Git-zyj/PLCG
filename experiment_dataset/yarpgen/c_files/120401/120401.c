/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((-1241550096 < var_6) ? var_10 : ((min(var_11, var_5)))))));
    var_14 = ((~((var_9 ? ((30670 << (var_0 - 20782))) : (min(-1241550117, -1241550117))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_15 = ((!(arr_1 [i_0 - 1])));
        arr_2 [i_0] = ((9443 & (min((~255), var_0))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_0 + 1] [i_1] [i_1] = (((((arr_3 [i_0 + 3]) - (arr_3 [i_0 - 1]))) + ((max((arr_3 [i_0 - 1]), var_4)))));
            var_16 = ((((var_8 == ((var_9 ? var_10 : var_12)))) || (((-(arr_5 [i_0 - 1] [i_0 - 1] [i_0]))))));
            var_17 = var_3;
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_18 = (var_3 - var_10);
            var_19 = ((-1241550123 ? (arr_3 [i_2 - 2]) : (arr_8 [i_2])));
            var_20 = (i_2 % 2 == zero) ? (((var_7 << (((arr_9 [i_2 - 1] [i_2]) - 124))))) : (((var_7 << (((((arr_9 [i_2 - 1] [i_2]) - 124)) + 86)))));
        }
    }
    var_21 = var_6;
    var_22 = (min(var_22, var_12));
    #pragma endscop
}
