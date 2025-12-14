/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_4;
    var_15 = (!(((min(21956, var_5)) >= (max(var_9, var_5)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = ((((((32742 ? 4294967295 : 51857)))) ? ((((!(((var_6 ? 10458664949799774395 : (arr_0 [i_0])))))))) : ((var_2 ? var_1 : 11515676076061041754))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    {
                        var_17 += -11515676076061041754;
                        var_18 = (min(var_18, (min((((!((max((arr_10 [i_3 + 3] [i_0] [i_0] [i_0]), var_5)))))), ((var_5 % (((max((arr_6 [i_0] [i_1] [i_2] [i_3]), var_1))))))))));
                        var_19 = ((((!((!(arr_2 [i_3]))))) ? (((!((max(11515676076061041754, 0)))))) : (min((((arr_6 [i_2] [i_2] [i_1] [i_0]) % (arr_2 [i_0]))), (arr_3 [9] [9] [i_3 + 1])))));
                        arr_11 [i_3] [i_2] [i_1] [i_3] = ((!(((4528028543230006012 ? (((arr_9 [i_0] [i_0] [i_0]) ? (arr_4 [i_1] [i_3]) : 6104573089883748915)) : 1)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        var_20 = (!(((var_11 ? (arr_12 [i_4] [i_4]) : var_9))));
        var_21 += ((!(((11515676076061041754 ? 2382493310 : 5)))));
        var_22 = (!2382493310);
    }
    var_23 = var_13;
    var_24 = ((+(((var_5 + var_12) ? -var_0 : ((min(var_7, var_11)))))));
    #pragma endscop
}
