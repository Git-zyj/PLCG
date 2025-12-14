/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_1] = (((min((arr_1 [i_0 + 2]), (arr_4 [i_0 + 2])))) ? (((((arr_0 [i_0 + 2]) < var_0)))) : (arr_1 [i_0 + 2]));
                    var_12 = (arr_3 [i_0 - 1] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = (((((((((arr_1 [6]) ? var_9 : var_0))) ? ((((!(arr_4 [i_0]))))) : (arr_0 [i_1])))) ? (min((((arr_4 [i_0]) ? (arr_3 [i_1] [i_0] [i_4 + 2]) : -1468854299238786569)), ((~(arr_4 [0]))))) : 189));
                                var_14 = ((((((!(((var_2 ? (arr_9 [i_0] [i_0] [8] [i_0]) : (arr_6 [i_0] [1] [i_2] [i_3])))))))) >= var_0));
                                var_15 ^= ((((min(9, (max(179, (arr_9 [i_0] [i_1] [i_0] [i_2])))))) / (min(-1332049187, 123))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_5 - 1] [i_6] = 1332049186;
                                var_16 |= (max(((((!2937076456295213473) <= -1))), ((var_10 ? var_7 : ((min((arr_8 [6] [i_2] [i_2] [i_2]), var_4)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_1;
    var_18 = (max(-var_8, var_0));
    #pragma endscop
}
