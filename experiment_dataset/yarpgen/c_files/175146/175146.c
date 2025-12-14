/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_7 & var_9) ? var_8 : var_10));
    var_13 = ((var_10 - ((var_8 >> ((((var_1 ? var_8 : var_9)) - 216))))));
    var_14 = (max(var_14, var_4));
    var_15 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-((((((arr_2 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))) ? (((arr_1 [6]) | (arr_2 [i_0]))) : (arr_1 [i_0])))));
        arr_4 [i_0] = ((((234 ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0]))) | ((max((arr_0 [i_0] [i_0]), (((92 != (arr_1 [i_0])))))))));
        arr_5 [i_0] = 7385;
        var_16 = (((13 & 244) ? 1 : 1));
        var_17 = (26185 * 7);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_18 = (1 > (arr_8 [i_2]));
            var_19 = ((var_5 ? ((255 ? 30768 : (arr_6 [i_1] [i_2]))) : (arr_8 [i_1])));
        }
        var_20 -= (~var_8);
        var_21 = ((((~(arr_8 [i_1]))) + ((max((arr_8 [i_1]), (arr_8 [i_1]))))));
        var_22 -= (((((arr_9 [i_1] [i_1] [i_1]) < (arr_9 [i_1] [i_1] [i_1]))) && ((((arr_6 [4] [i_1]) % (arr_9 [i_1] [i_1] [i_1]))))));
        arr_11 [i_1] = ((1 ? ((((var_10 == (arr_7 [i_1]))))) : ((((min((arr_10 [i_1] [i_1] [i_1]), (arr_10 [i_1] [i_1] [i_1])))) ? 66 : ((-(arr_8 [i_1])))))));
    }
    #pragma endscop
}
