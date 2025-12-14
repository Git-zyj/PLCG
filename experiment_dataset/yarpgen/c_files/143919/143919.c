/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_3] [4] [i_2] = (min(127, ((-28846 ? (arr_12 [i_0] [i_3] [4]) : ((((arr_6 [i_0] [7] [4]) % 452504699)))))));
                                arr_14 [i_0] [i_0] [0] [i_0] [i_0] [i_0] [i_0] = 7365690245249241044;
                                var_20 = (max(var_20, ((max((~11), -116)))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] [i_1] [i_0] = (((arr_16 [i_1] [i_1 + 1] [i_5]) ? (arr_9 [i_1 + 2] [i_1 + 2]) : (min((arr_4 [i_0] [i_1 + 3]), ((59216 ? 7365690245249241044 : 22))))));
                    var_21 = (max(17, 83));
                    var_22 += (((11634954106747235282 > 4150145072) + ((max(32097, 14654)))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_23 &= (arr_6 [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_25 [i_8] [i_8] [i_6] [i_0] [i_8] = (4294967295 ? -96 : 15127400357349304691);
                                arr_26 [i_0] = (((((arr_22 [i_8] [i_7] [i_6] [i_6] [i_0] [i_0]) <= -23366)) ? (((arr_11 [i_8] [9] [i_0] [i_1 + 1] [i_0]) | (arr_23 [3] [i_1 + 2] [i_6] [i_0]))) : (((arr_1 [i_1 + 1] [i_6]) ? (arr_23 [5] [i_1] [i_6] [i_0]) : (arr_0 [i_0])))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    var_24 += ((((((arr_11 [i_9] [i_9] [i_1] [i_0] [i_0]) ? 11 : (arr_0 [i_1])))) ? (((arr_22 [i_0] [i_0] [8] [7] [8] [i_0]) ? 127 : (arr_3 [i_0]))) : (((57 > (arr_4 [i_1] [i_1]))))));
                    var_25 = 107;
                    arr_30 [i_9] [i_0] [i_9] [i_9] = (((arr_1 [i_1] [i_1 + 2]) ? (arr_10 [i_0] [i_0]) : -107));
                    var_26 = (((((arr_11 [4] [2] [i_0] [i_1 - 2] [i_1 - 2]) ? 62914560 : (arr_27 [i_9] [i_1 - 2] [i_0])))) ? 17924 : (arr_4 [i_0] [i_0]));
                }
            }
        }
    }
    var_27 = ((((-(var_5 == 7561658917565767377)))) || var_5);
    #pragma endscop
}
