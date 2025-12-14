/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (14909252350603067889 ^ 40904)));
    var_20 = var_6;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_21 = ((((arr_1 [i_0]) + 65525)) == (arr_0 [i_0] [7]));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = (!(arr_5 [i_0 - 1] [i_0] [i_0 - 1]));
                    var_23 = (!40914);
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        var_24 = ((!(arr_4 [2] [i_3] [2])));
        var_25 = (arr_1 [8]);
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_26 -= ((~((((!(arr_8 [i_4])))))));
        var_27 = ((~((~(((arr_8 [i_4]) | (arr_10 [i_4] [9])))))));
        var_28 -= (arr_10 [i_4] [i_4]);
        var_29 = ((!(arr_8 [i_4])));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_30 = (min(var_30, ((((arr_13 [6] [6]) <= ((~(arr_13 [i_5] [0]))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    var_31 ^= (((arr_18 [i_5]) / (((+(((arr_16 [i_7] [15] [15]) << (((arr_15 [5]) - 8886172913106172691)))))))));
                    var_32 = ((~(((!((((arr_8 [i_5]) / (arr_16 [i_5] [i_6] [i_7])))))))));
                    var_33 += ((!((((arr_13 [i_6] [i_6]) >> (((arr_12 [i_6]) - 46262)))))));
                    var_34 = (arr_14 [i_5]);
                }
            }
        }
        var_35 = (arr_17 [i_5] [i_5] [i_5] [i_5]);
        var_36 = (!1);
    }
    #pragma endscop
}
