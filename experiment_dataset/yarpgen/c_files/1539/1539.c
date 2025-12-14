/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_10));
    var_13 = var_9;
    var_14 = ((-((var_1 ? var_10 : (2320261257717842281 || -2320261257717842271)))));

    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        var_15 = (((((~(max(var_0, var_0))))) ? (max((arr_1 [i_0 + 1]), var_9)) : (!var_11)));
        var_16 = ((((var_4 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 4]))) << (((max((arr_2 [i_0 - 2]), -2320261257717842296)) + 57))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_17 = min((((((!(arr_1 [i_1]))) ? (arr_1 [i_1]) : ((min((arr_0 [i_1]), var_4)))))), (max((~151), (((arr_5 [3]) ? 254 : 8809540955663048728)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_18 |= (((-1 + 9223372036854775807) << (((((min((~var_8), (((var_5 ? (arr_5 [i_1]) : 251))))) + 30)) - 11))));
                    var_19 = -2320261257717842281;
                    var_20 = ((((((arr_3 [i_1] [i_3]) ? 64776 : 147))) || (arr_4 [i_3] [i_1])));
                    var_21 = max((max((~var_8), (arr_5 [i_3]))), (((-(((arr_5 [i_1]) ? var_4 : var_6))))));
                }
            }
        }
        var_22 = (max((arr_5 [i_1]), (!2383581412)));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        var_23 = ((1615540557914800889 / (arr_10 [i_4 + 3])));
        arr_12 [i_4] = ((-(arr_9 [i_4 + 2] [i_4 + 1])));
        var_24 ^= 733;
    }
    #pragma endscop
}
