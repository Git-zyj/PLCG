/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((!(((-2768941246285848744 << ((((var_8 ? var_3 : var_16)) - 70043876694659307)))))));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = (((arr_2 [i_0]) + (arr_2 [i_0 + 1])));
            var_21 = (~-235268017);
            var_22 = var_8;
        }
        var_23 = (min(((((min(var_13, (arr_1 [i_0]))) % (max(-35, var_6))))), (arr_2 [i_0 + 1])));
        var_24 = (min(var_24, ((((-23823 + 2147483647) >> ((((-23828 ? 60265 : 30)) - 60258)))))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        var_25 = (((arr_6 [i_2]) >> (-28 + 41)));
        var_26 = (217 || -6502536196000568231);
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_27 = (((-(arr_10 [i_3]))) % (arr_10 [i_3]));
        var_28 = (((((min((arr_4 [i_3] [17] [i_3]), (arr_4 [i_3] [i_3] [12]))))) << (((max((arr_1 [i_3]), var_14)) - 1365894844))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {

                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        arr_19 [i_6 + 1] [i_6] [i_6] [i_3] [i_6] [i_3] = (((arr_17 [i_6] [i_6 + 4] [i_5] [i_6] [i_6]) ^ ((-(1 <= -23823)))));
                        var_29 = (max((arr_3 [i_3]), (max(-28, (arr_10 [i_5])))));
                        arr_20 [i_3] [i_3] [i_4] [i_6] [i_5] [0] = -31;
                        var_30 = (((((arr_18 [i_5] [i_6 + 2] [i_6] [i_6] [i_6]) ? (arr_18 [i_4] [i_6 + 3] [i_6] [i_4] [i_6 + 3]) : (arr_18 [i_5] [i_6 - 1] [i_6] [i_5] [i_6]))) - (((arr_18 [i_4] [i_6 + 4] [i_6 + 4] [i_6] [i_6 + 1]) << (arr_18 [i_6] [i_6 + 2] [3] [i_6] [i_6])))));
                    }
                    arr_21 [i_5] = var_14;
                    var_31 = (min(var_31, (11054901161038311007 < 142134093479808804)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                {
                    var_32 = (-198175993 ^ 158);
                    arr_26 [i_3] [i_3] [1] [10] = (37125 ? 117 : 1);
                }
            }
        }
    }
    var_33 ^= var_4;
    #pragma endscop
}
