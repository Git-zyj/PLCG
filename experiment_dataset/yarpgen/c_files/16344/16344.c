/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += 16261;
    var_20 = -1477358853443819385;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_21 += (arr_3 [i_3] [i_3] [i_3]);
                            var_22 = (((arr_2 [i_1 - 1] [i_1]) && (arr_2 [i_1 - 1] [i_1])));
                        }
                    }
                }
                arr_10 [i_1] = max(((2500894679 ? (((~(arr_2 [i_1] [i_1])))) : var_7)), (var_15 % 2500894679));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_23 = ((-1197285001922329288 ? (((arr_5 [2] [i_1] [i_0]) ? -8 : 1794072616)) : (min(2500894679, 238))));
                            var_24 += 18136;
                            var_25 = (((((41413 / (arr_4 [i_1 - 1] [i_1 - 1])))) ? (min((((arr_6 [i_0] [8] [i_1]) % 1083700847)), (arr_9 [12] [10] [10] [i_5] [i_5] [i_5]))) : (max(-8, 3885796985))));
                        }
                    }
                }
                arr_18 [i_1] = (((((-(max(30647, -5957012426131122262))))) ? (((arr_11 [i_1]) ? ((((arr_2 [i_1] [i_1]) <= (arr_15 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1])))) : (((!(arr_8 [i_1] [i_1] [0] [i_0])))))) : (~30647)));
            }
        }
    }
    #pragma endscop
}
