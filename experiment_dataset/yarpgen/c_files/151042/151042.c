/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((~(max(-1972588151, 4294967288))));
        var_16 &= (min(((min(((4197 ? 4218 : 54107)), (4197 || 4229)))), (((((var_10 ? 61333 : 7726507074071537292))) ? (((max(var_9, var_2)))) : (arr_2 [i_0])))));
        arr_4 [i_0] = (((((4220 ? 4231 : 0)))) ? (max((arr_2 [i_0]), var_10)) : ((56106 ? (((((arr_3 [i_0] [i_0]) == var_7)))) : var_0)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_8 [i_0] [i_0] [i_1] = (((((!(arr_5 [8] [i_1] [i_1])))) & ((var_4 ? (arr_7 [1] [i_1]) : 1))));
            var_17 = (((arr_5 [i_0] [i_1] [i_1]) ? (arr_5 [i_0] [i_0] [i_0]) : var_2));
            var_18 = 27;
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_0] [17] [i_2] = (((max(4244, ((61312 ? 1 : (arr_5 [i_0] [i_2] [i_2]))))) + ((max((arr_0 [i_0] [i_2]), (arr_5 [i_0] [i_0] [i_0]))))));
            var_19 = (max(var_19, 4226));
        }
        arr_12 [i_0] = (min(4250, 4294967295));
    }
    var_20 = var_4;
    #pragma endscop
}
