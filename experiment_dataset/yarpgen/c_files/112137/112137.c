/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = (min((arr_3 [8] [i_1] [i_0]), (arr_3 [i_1 + 1] [i_1] [i_0 - 2])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, (arr_7 [8] [i_2])));
                                var_12 -= ((~(arr_6 [i_0 + 4] [4] [4] [i_4 + 1])));
                                var_13 = ((((((arr_6 [i_0 + 1] [i_1 - 1] [i_1] [i_4 + 1]) ? (((-(arr_0 [i_0 + 1] [i_1 - 2])))) : (((arr_2 [i_1]) ? (arr_8 [i_0] [i_1 - 2] [i_1] [i_4 + 1]) : (arr_4 [i_1])))))) && (((-((~(arr_1 [i_2]))))))));
                            }
                        }
                    }
                }
                var_14 += (((~((min(11510, 1))))));
                var_15 -= (((arr_6 [i_0] [i_0 + 4] [10] [i_0 - 1]) ? (min((min((arr_0 [i_1] [i_0]), (arr_3 [i_0] [i_0] [8]))), (arr_1 [11]))) : (arr_1 [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            {
                var_16 = (max(var_16, ((((arr_14 [i_5 + 2]) ? (arr_11 [i_6]) : ((-(arr_15 [12]))))))));
                var_17 = (min(((+(((arr_14 [i_6]) ? (arr_15 [i_6]) : (arr_13 [i_5 + 1]))))), (arr_14 [i_5])));
                var_18 = (max(var_18, ((((((((((arr_14 [i_5 + 3]) ? (arr_14 [1]) : (arr_16 [i_6 + 1] [3] [i_6])))) ? (arr_16 [i_5] [i_6 - 1] [i_5]) : (arr_16 [i_5] [i_5] [i_5])))) ? (arr_11 [i_5]) : (min((arr_12 [i_6] [i_5 + 3]), (arr_14 [i_5]))))))));
            }
        }
    }
    #pragma endscop
}
