/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_5);
    var_16 |= (min(var_12, (~var_4)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = min(((min((max(1, (arr_0 [i_0] [i_0]))), (((var_4 || (arr_0 [i_0] [i_0]))))))), ((~((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
        var_17 = (~var_3);
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        var_18 = 7340032;
        arr_5 [i_1] = ((var_12 ? 7340032 : (!var_6)));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_19 = ((((var_6 ? ((min((arr_11 [i_4] [i_2] [i_2] [i_4]), var_12))) : (((!(arr_6 [i_1]))))))) / (arr_6 [i_4]));
                        arr_13 [i_4] = ((min((arr_6 [i_1]), (arr_11 [i_4] [2] [i_3] [i_4]))));

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_20 = ((!((((1334601563 / -6878379736242244581) ? ((0 / (arr_9 [i_1] [i_2] [4]))) : (((var_6 ? -116 : 1))))))));
                            var_21 -= (max(((min((arr_4 [i_1 + 3]), (arr_10 [i_1 - 3] [i_5] [i_1 + 1])))), (arr_4 [i_1 - 3])));
                            var_22 = ((549755813888 ? 31 : var_5));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_23 = ((33550336 ? (arr_9 [i_1] [i_1 - 3] [i_2 - 1]) : 1601408647));
                            var_24 = (min(var_24, (!1)));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        arr_20 [i_7 - 1] [i_7] &= (-116 / 92);
        arr_21 [i_7] = (var_12 && 0);
    }
    #pragma endscop
}
