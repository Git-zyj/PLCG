/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((7105 ? 210 : -7345293743736079669));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (max(var_11, var_1));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 = ((((((5984 ? (arr_4 [i_2] [1] [i_0]) : (arr_11 [i_0] [i_0] [i_2] [i_3] [i_4]))) == -178136827)) ? (((!(((var_4 - (arr_5 [i_1] [i_1] [2]))))))) : ((var_3 % (arr_5 [i_2 + 2] [i_2 + 2] [i_4])))));
                                var_13 = (((((5984 ? 1 : ((5984 ? (arr_4 [i_0] [i_1] [i_2]) : 1))))) ? (arr_4 [8] [8] [8]) : ((max((arr_5 [i_2] [i_3] [i_2]), ((1 - (arr_7 [i_2] [i_2]))))))));
                                arr_13 [i_0] [i_0] [i_2] [i_1] [i_2 - 1] [8] [i_4] = ((((min(var_1, -5984))) ? 507800650 : (arr_4 [i_0] [i_1] [i_2])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_14 = ((var_0 << ((((((~(arr_2 [i_0])) + 105)) - 18)))));
                            var_15 = (arr_6 [i_5]);
                            var_16 = (min((((((min((arr_0 [12] [i_5]), var_9))) ? (arr_4 [i_0] [i_5] [i_5]) : (((arr_2 [i_6]) ? var_2 : var_9))))), (((arr_12 [i_0] [i_1] [i_1] [i_5] [i_6]) ? var_8 : (((-178136817 - (arr_18 [i_0] [i_1] [i_5] [i_6]))))))));
                            var_17 = (max(var_17, (((!((((((arr_16 [i_0] [i_5] [i_5]) > (arr_14 [i_0] [i_5] [i_6]))) ? 67108800 : -5989))))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(-20412, 16694));
    var_19 = (max(var_19, (((var_0 ? 65526 : var_0)))));
    #pragma endscop
}
