/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_13 ? var_3 : (min((-9223372036854775807 - 1), 0))));
    var_16 = (min(7, (-9223372036854775807 - 1)));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_17 = max(((((var_13 ? (arr_2 [i_1] [i_1] [i_1]) : (arr_3 [i_0] [i_1]))))), (max((((arr_1 [i_0] [i_1]) ? var_12 : 6)), 37563)));
            arr_4 [i_1] [1] = (((arr_2 [i_1] [i_1] [i_1 + 2]) ? 352725144 : ((-(arr_2 [i_1] [i_1] [i_0 + 1])))));
            var_18 = (((((((max((arr_0 [i_1]), (arr_1 [i_0] [i_1])))) && 125829120))) > -7224));
        }
        var_19 = (min(var_19, ((max((arr_0 [i_0 + 1]), (max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1]))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_7 [i_2] &= arr_5 [i_2];
        arr_8 [i_2] [i_2] &= var_9;
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = 4169138202;
        var_20 = (min(var_20, (-9223372036854775807 - 1)));
        var_21 = (((min((arr_10 [i_3]), (arr_5 [i_3])))) ? ((((arr_5 [i_3]) ? (arr_10 [i_3]) : (arr_10 [i_3])))) : (((arr_10 [i_3]) / 1494370299415240167)));
    }
    #pragma endscop
}
