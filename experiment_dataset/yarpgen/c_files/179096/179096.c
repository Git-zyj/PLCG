/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = ((((min((((arr_7 [19] [i_2 + 1] [i_3] [i_2 + 1]) ^ var_7)), (((0 ? 0 : 6)))))) ? (((~(arr_10 [i_2 + 1] [i_0] [i_3] [i_2 + 1] [i_1] [i_0] [i_0])))) : 3721117838));
                                var_19 = (((((!(((arr_8 [i_0] [i_1] [i_2] [i_0]) == 8384512))))) > 844686223));
                            }
                        }
                    }
                }
                var_20 = (((((-((((arr_8 [i_0] [i_0] [i_0] [i_0]) && 0)))))) ? ((0 ? (arr_6 [i_0] [4] [i_1] [i_1]) : (arr_10 [i_0] [5] [i_0] [5] [i_0] [5] [i_1]))) : ((((((!(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])))) <= var_0)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    var_21 -= ((((8384495 ? 8384512 : (arr_9 [12] [i_6] [i_7] [i_6]))) ^ (arr_10 [i_7] [i_6] [i_5] [i_6] [i_5] [i_5] [i_5])));
                    arr_20 [i_5] [i_7] = (arr_13 [i_5] [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
