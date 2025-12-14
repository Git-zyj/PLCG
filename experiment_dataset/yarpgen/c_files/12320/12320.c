/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 -= ((6538616225179670681 >= ((((1 ? 1 : 1931530303))))));
                                arr_16 [22] [i_1] [i_2] [i_3] = (((arr_4 [i_0 - 3] [i_1] [i_2]) * (arr_12 [i_0 + 4] [i_0 + 3] [i_0 + 2])));
                                var_17 = (((arr_13 [i_0 + 4] [i_0 - 3] [i_0 + 3]) & ((((arr_13 [i_0 + 1] [i_0 + 3] [i_0 + 2]) ? (arr_13 [i_0 - 2] [i_0 - 3] [i_0 - 2]) : (arr_13 [i_0 - 3] [i_0 + 2] [i_0 - 4]))))));
                                var_18 = (min(var_18, (-18840 && 2363437004)));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] = ((~((0 ? 11 : (1931530292 | -760852761)))));
                    arr_18 [7] [i_1] [1] = (arr_1 [i_0]);
                    var_19 += (arr_15 [i_2] [i_1] [i_1] [18] [i_0]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            {
                var_20 -= ((((((arr_12 [i_5] [i_5] [i_5]) != (arr_8 [i_6] [i_6 - 2] [i_5]))) ? (((arr_10 [i_6] [i_6] [i_5] [i_5]) * (arr_1 [i_5]))) : (!151))) & ((((!(((arr_1 [i_5]) > (arr_8 [i_5] [i_6 - 3] [i_5]))))))));
                var_21 = (min(var_21, ((((((((((arr_10 [i_6] [i_6] [i_5] [i_5]) && (arr_5 [i_5]))))) > (min(4294967295, 1)))) ? (arr_2 [i_6 + 3] [i_5]) : (((((arr_13 [i_6 - 2] [i_6 + 1] [i_5]) == (((arr_20 [i_5] [i_6]) ? (arr_8 [i_6 + 1] [i_6] [i_6]) : (arr_1 [i_6]))))))))))));
                var_22 = ((((((((arr_6 [16] [i_5]) > (arr_12 [i_6] [i_6] [i_5]))))) + (((arr_23 [i_5] [i_6 - 2] [i_6]) ? (arr_10 [i_5] [i_5] [i_5] [i_5]) : (arr_2 [i_5] [i_6]))))) * ((((arr_5 [i_5]) ^ (arr_13 [i_5] [i_6 - 3] [i_5])))));
            }
        }
    }
    #pragma endscop
}
