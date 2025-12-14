/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((((max((!var_7), var_7))) ? (min(((var_9 ? var_7 : 0)), (min(var_2, var_3)))) : var_0));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 = (max((arr_3 [i_0] [i_2]), ((((arr_3 [i_0 + 1] [i_1 - 2]) > (((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_1] [i_2]) : (arr_3 [i_0 - 3] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] = ((((((arr_5 [i_0 - 3] [i_0]) ? 0 : -870791235))) ? (((((arr_1 [i_0]) ? (arr_2 [i_0 + 1] [i_1]) : (arr_1 [i_0]))))) : (((arr_3 [i_0 - 2] [i_0 + 1]) ? -9082889821595766754 : (arr_9 [i_0 + 1] [i_1] [i_3] [i_0])))));
                                var_12 *= ((+(((max((arr_6 [i_4] [i_3] [i_2] [i_0]), (arr_2 [i_1] [i_1])))))));
                                var_13 ^= (((248 != 8) ? ((+(((arr_2 [i_2] [i_3]) * (arr_11 [i_0 - 3] [i_0] [i_0] [i_0 - 1] [i_0]))))) : 6554));
                                var_14 = (((((((arr_5 [i_2] [i_3]) > (arr_4 [i_2] [i_0]))))) - ((((!(arr_9 [i_0] [i_0] [i_0] [i_0]))) ? ((((!(arr_11 [i_1 - 1] [i_1] [i_2] [i_2] [i_1]))))) : ((42553 ? (arr_0 [i_0] [i_4]) : (arr_0 [i_2] [i_4])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_15 = (((((((max((arr_10 [i_6] [i_5] [i_2] [i_1] [i_0]), (arr_4 [i_0] [i_0])))) > (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]) : -345821865))))) | (min((!65), (arr_2 [i_0 + 1] [i_0 - 2])))));
                                arr_19 [i_0] [i_0] [i_0] = ((((((((arr_9 [i_0] [i_0] [i_0] [i_0]) & (arr_6 [i_0] [i_0] [i_0] [i_0 + 1])))))) / (arr_0 [i_6] [i_2])));
                                var_16 = 0;
                                var_17 = (max(var_17, (((((((arr_14 [i_0] [i_0] [i_0] [i_0 - 1] [i_0]) ^ (arr_18 [i_0] [i_0])))) ? ((~(arr_14 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 2] [i_0]))) : (((arr_18 [i_0] [i_0]) ? (arr_14 [i_0 - 3] [i_0] [i_0] [i_0 - 2] [i_0 - 3]) : 42545)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
