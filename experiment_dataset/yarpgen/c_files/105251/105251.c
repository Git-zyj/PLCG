/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_14 += ((((1771288179584446859 ? 3176716661308054448 : 5075)) < (arr_3 [i_0])));
            arr_4 [6] = (min((arr_3 [i_0]), var_6));

            /* vectorizable */
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                var_15 = (arr_6 [i_0] [i_0] [i_0]);
                arr_7 [i_1] [i_0] = ((-(arr_5 [i_2 + 2] [i_2] [i_2] [i_2 - 2])));
                var_16 = (max(var_16, (((arr_5 [i_0] [i_1] [i_2 + 1] [i_0]) ? (arr_6 [i_2 + 2] [i_1] [i_2]) : (arr_2 [i_2 + 1] [i_2 - 2])))));
                arr_8 [i_0] [i_0] [i_0] [i_0] = 37415;
            }
            var_17 = (max((((!((max(var_1, (arr_1 [i_0] [i_1]))))))), var_4));
        }
        var_18 = ((((((min(5, var_9)))) > (max(-8895263593670282187, (arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_19 = var_5;
        arr_12 [i_3] = ((0 ? ((2 ? 44100 : 13886917402350118084)) : ((((arr_11 [i_3]) ? (arr_10 [i_3] [i_3]) : var_8)))));
        arr_13 [i_3] = 4526820038966665093;
        var_20 = (((((~0) + 2147483647)) << (((arr_10 [i_3] [i_3]) - 4294967267))));
        arr_14 [i_3] [i_3] = ((!(((var_10 ? 2377342595 : (arr_10 [1] [i_3]))))));
    }
    var_21 = 67108863;
    #pragma endscop
}
