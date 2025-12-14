/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (arr_0 [i_0]);
        var_14 = (max(var_14, (arr_1 [i_0])));
        arr_4 [i_0] = (min((((((var_7 * (arr_3 [i_0] [i_0])))) ? ((((var_6 && (arr_3 [i_0] [i_0]))))) : ((var_6 - (arr_1 [i_0]))))), (min((!var_6), (max((arr_1 [i_0]), var_4))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_11 [i_1] [i_1] = (arr_5 [i_1] [i_1]);
            var_15 = (arr_10 [i_1] [i_1]);
            arr_12 [0] [i_1] = ((6473 ? (min(-var_6, ((-(arr_1 [i_1]))))) : (arr_5 [i_1] [i_1])));
            var_16 = ((!(arr_7 [i_1])));
            var_17 = (min(var_5, ((((min(var_6, var_2))) ? (var_9 / -6008) : ((var_7 / (arr_5 [4] [i_1])))))));
        }
        var_18 = (arr_8 [i_1] [12] [i_1]);
        var_19 = (((168 - 2523300842216418528) / ((max(var_3, var_4)))));
    }
    var_20 |= -var_4;
    var_21 = (((((min(var_4, var_2))) ? ((max(var_11, 10))) : var_3)));
    var_22 = (max((var_8 != var_7), (3014923629 - 38128)));
    #pragma endscop
}
