/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_13 ? ((var_10 ? var_9 : var_11)) : 1));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_15 = 714559842;
            var_16 = var_8;
        }
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            var_17 = (arr_3 [2]);
            var_18 = (max(var_18, (min(((((arr_9 [i_2]) > (((4077506225 ? 217461062 : 4077506225)))))), (arr_2 [i_0])))));
            arr_10 [11] [11] = 4077506234;
            arr_11 [i_0] |= var_7;
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_14 [i_0] [9] [i_3] = (min((arr_9 [i_0]), var_9));
            var_19 *= ((((((!(arr_4 [i_0] [i_0] [9]))))) | (max((arr_4 [8] [i_3] [i_3]), (arr_4 [i_0] [i_0] [i_0])))));
            arr_15 [i_3] = ((((min(4077506234, ((53430 ? 4077506222 : (arr_7 [i_3])))))) ? (arr_1 [i_3]) : ((((242 ? 12106 : 53430)) ^ 53429))));
            var_20 = (max(var_20, var_3));
            var_21 = (arr_6 [1] [13]);
        }

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_22 = (min((arr_0 [i_4]), 53429));
            arr_20 [13] [13] = (((arr_7 [i_0]) % 53432));
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        arr_25 [i_5] = (arr_6 [i_5] [i_5]);
        var_23 *= var_3;
        arr_26 [1] |= 0;
        var_24 = (arr_12 [i_5] [6]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_25 *= var_11;
        var_26 = (arr_5 [i_6] [i_6] [i_6]);
    }
    var_27 &= var_0;
    #pragma endscop
}
