/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 = ((17 * 2144583243) ? ((var_7 * (arr_2 [i_0 - 1]))) : ((((-37 + 2147483647) >> (-1663477249 + 1663477274)))));
        arr_4 [i_0] = 4294967295;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_19 += (1089394421 ? 11037127989718283057 : ((min(-1663477249, (arr_7 [i_1])))));
        var_20 *= 111;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_18 [6] [i_1] [16] [3] [i_4] [11] [i_5] = ((~(arr_13 [i_2 + 1] [i_2 - 2] [i_4 - 1] [i_4 - 1])));
                            arr_19 [i_1] [i_4] [3] [7] [i_5] = 76;
                            var_21 = (((arr_17 [5] [i_4] [i_4] [i_4] [i_4 - 1] [8]) ? (arr_17 [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [4]) : (arr_17 [i_4] [i_4] [9] [i_4] [i_4 - 1] [i_4])));
                            var_22 += (-1089394411 / 12725659318573682337);
                            var_23 = (((~6054803629827173874) << (((arr_14 [14]) - 970460309))));
                        }
                        var_24 += (max(((!(arr_9 [i_2 - 1]))), (((((arr_16 [i_1] [13] [2] [i_4] [1] [0]) ? (arr_15 [i_1] [i_1] [5] [i_1]) : (arr_10 [14] [i_3] [i_1]))) <= var_13))));
                    }
                }
            }
        }
    }
    var_25 = var_4;
    var_26 += ((16 ? 1594889665061684996 : 2150384052));
    #pragma endscop
}
