/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (arr_2 [i_0])));
                arr_8 [12] [i_1] [i_1] = ((((max(-120, (!var_14)))) <= (!var_12)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_18 = (((((((arr_9 [i_2] [i_3]) | (arr_9 [i_2] [i_3]))) + 9223372036854775807)) >> (-23 || -1)));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_19 = (((((0 ? (max(22, (arr_11 [i_2] [i_5] [i_3]))) : (!var_12)))) ? (arr_12 [i_2]) : (!-124)));
                                arr_20 [i_5] [i_6] [i_3] = (((((!var_14) ? (arr_12 [i_2]) : 104)) != (max((arr_16 [i_2] [i_3] [9] [i_5] [i_6]), var_10))));
                                var_20 = (max(177, ((36871 ? 40094 : ((min(65531, 18330)))))));
                                var_21 = 1061233285;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_22 *= ((((max((arr_19 [i_7 + 1] [i_7 + 2] [i_7] [i_7] [i_7] [i_7]), 55))) ? (((((arr_19 [i_7 - 1] [i_7 - 1] [i_7] [i_7 + 4] [2] [i_2]) > (arr_19 [i_7 + 1] [i_2] [15] [i_7] [i_7 + 1] [i_2]))))) : (max((arr_19 [i_7 + 1] [5] [i_7] [i_3] [5] [5]), (arr_11 [i_2] [i_7] [i_2])))));
                            arr_25 [i_2] [i_2] [i_3] [i_7] [i_3] = ((((((max(var_14, var_14))) || (((var_5 ? (-32767 - 1) : (arr_24 [i_2] [i_3] [15] [i_8])))))) || ((max((!1196041708), 104)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
