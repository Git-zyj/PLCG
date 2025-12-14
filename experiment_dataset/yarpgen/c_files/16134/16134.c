/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_11);

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_16 = (((min(var_8, ((-(arr_1 [16] [i_0 - 2]))))) == ((max((((!(arr_0 [i_0] [i_0])))), 22862)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = ((((3260233216003379953 ? (((arr_1 [i_0] [i_2 - 1]) ? (arr_0 [i_0] [i_1]) : 1125899906842623)) : -var_10)) <= (((((min(251830370, var_7)) > ((var_6 ? (arr_0 [i_0] [i_1]) : 0))))))));
                    var_18 = (max((arr_3 [i_0]), (!-9223372036854775800)));
                    var_19 = ((((var_10 - (arr_2 [i_0 - 1]))) ^ (!var_11)));
                }
            }
        }
        var_20 = (max(var_20, (!var_4)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_21 = (((((arr_6 [i_3] [i_3] [i_3]) + 9223372036854775807)) << (((arr_6 [i_3] [i_3] [i_3]) - 2286310674))));
        var_22 = var_12;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_23 = (((arr_13 [i_4]) ? (arr_10 [i_4]) : (arr_3 [i_4])));
        arr_16 [i_4] [i_4] = ((~(arr_9 [i_4])));
    }
    var_24 = ((1445764263770200240 ^ (!var_1)));
    var_25 = (var_0 | var_14);
    var_26 = var_4;
    #pragma endscop
}
