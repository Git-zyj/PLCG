/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((var_1 | (var_1 || var_3)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 += (min(11322298810211685691, (((arr_10 [i_0] [3] [i_1 + 1] [i_3]) ? (arr_5 [i_0] [11]) : 7124445263497865926))));
                                var_14 = (max(var_14, (((11322298810211685677 ? ((min(var_0, 57394))) : (((var_0 ? (((arr_11 [i_3] [1]) ? (arr_13 [i_3] [i_2] [i_1 + 1]) : (arr_1 [i_3]))) : (arr_11 [3] [i_0])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_15 += ((((((arr_12 [i_0] [i_1 + 1] [i_1 + 1] [4] [i_1 + 1]) / (arr_7 [i_1 + 1])))) ? ((~(arr_7 [i_1 + 1]))) : (((((arr_7 [i_1 + 1]) <= var_1))))));
                                var_16 = (((max((((arr_13 [i_1] [i_2] [i_1]) ? (arr_2 [16] [15]) : (arr_14 [i_0] [i_1] [18] [20]))), var_6))) ? ((7124445263497865917 - (8407205333772724175 - 7124445263497865908))) : ((((((!(arr_9 [i_1]))) || (arr_16 [i_0] [i_0] [i_1] [i_2] [i_1] [i_6]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (1131696601015009463 * -32748);
    #pragma endscop
}
