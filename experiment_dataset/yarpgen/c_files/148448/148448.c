/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [7] = (~15769);
        var_13 = ((~(~var_5)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_14 -= (max((((arr_3 [i_1] [i_1]) & 100690496)), (((!(arr_4 [15] [i_1]))))));

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            arr_7 [i_1] = 6508721128475757338;
            var_15 = (((((6291456 != 4015636313040496159) ^ (arr_6 [i_2 + 3]))) | ((~((~(arr_4 [i_2] [i_2 + 2])))))));
        }
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            arr_11 [i_3 - 1] = (((((arr_3 [i_3 + 1] [i_3 - 1]) ^ (arr_3 [i_3 + 1] [i_3 - 1]))) < 756903895));
            var_16 = (~-90);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_17 = (max(4294967295, (min(((((arr_16 [i_1] [i_1] [i_4] [i_4] [i_4] [16]) != (arr_4 [i_3] [i_5])))), (min((arr_13 [i_6] [i_5] [i_4] [i_1]), (arr_5 [15])))))));
                            var_18 = 4;
                        }
                    }
                }
            }
            var_19 -= (min(1297277694, ((((4294967282 || 234) || (3538145784714464869 / 1297277689))))));
        }
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            arr_22 [i_7] [i_7] [i_7] = ((((+(((arr_3 [i_1] [0]) ? 268304384 : var_1)))) % ((min(((~(arr_13 [i_1] [i_1] [i_1] [i_1]))), var_3)))));
            var_20 = (min(var_20, (min(((((!(arr_9 [i_1] [14] [i_7]))))), ((((arr_4 [i_1] [12]) > (arr_4 [9] [i_7 + 3]))))))));
            var_21 = ((~(~26453)));
        }
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_26 [i_8] [i_8] = ((((max(26453, (arr_20 [i_8]))) * (!90))));

        /* vectorizable */
        for (int i_9 = 3; i_9 < 14;i_9 += 1)
        {
            var_22 = (min(var_22, (61462 & 234)));
            var_23 = (arr_24 [3]);
            var_24 = ((((((!(arr_25 [13] [i_8]))))) == 4294967282));
        }
    }
    var_25 = (~75987202);
    #pragma endscop
}
