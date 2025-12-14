/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 = 1;
        arr_3 [i_0 + 2] = (min(((((((arr_0 [i_0]) ? (arr_2 [i_0 - 1] [i_0 + 2]) : (arr_1 [i_0])))) ? (arr_0 [i_0]) : (((!(arr_1 [i_0 + 3])))))), ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))))));
        arr_4 [i_0] = max(var_3, (arr_0 [0]));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_17 *= ((2952615377 ? ((86 ? (arr_2 [i_0] [i_1]) : 1)) : (((!((!(arr_1 [1]))))))));
            var_18 = ((((((~(arr_2 [i_1 - 1] [i_0])))) ? (arr_0 [i_0]) : (arr_1 [i_0 + 2]))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_19 = ((((((min(var_8, -3261767624815413771))) ? ((min((arr_0 [i_0 + 3]), 191))) : ((var_2 ? (arr_12 [i_3] [4]) : (arr_6 [i_0 - 1] [i_2] [i_0 - 1]))))) ^ (((((arr_10 [i_0] [5] [i_2] [i_0]) ? (arr_11 [i_3] [i_1] [i_1] [i_3]) : (arr_12 [i_3] [i_3])))))));
                        var_20 = (~-122);

                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            var_21 = (max(var_21, ((((min((arr_6 [i_0] [i_0] [i_3]), 123)) - (arr_12 [i_2] [i_1 + 1]))))));
                            var_22 = -1;
                            var_23 = ((1 ? -9130915333604696477 : 8191));
                        }
                        var_24 = (((((((arr_11 [9] [i_1 + 1] [i_2] [i_3]) ? 34269 : (arr_5 [i_0 + 2]))))) ? 4294967295 : (arr_14 [i_0])));
                    }
                }
            }
            var_25 = (arr_7 [i_0]);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_26 = (arr_17 [i_0]);
            arr_18 [i_0] [i_0] |= (max((arr_13 [i_0] [5] [i_0] [5] [i_5]), 8184));
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_21 [i_6] = 14;
        arr_22 [6] |= (((((6593846761055766191 << (arr_20 [16] [i_6])))) ? (((max((arr_19 [i_6]), (arr_19 [13]))))) : 82));
    }
    var_27 = ((max(var_2, ((var_2 ? var_1 : 109)))));
    #pragma endscop
}
