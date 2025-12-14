/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((((arr_4 [i_0] [i_0] [14]) ? (arr_0 [i_0]) : (arr_2 [i_1] [1])))) ? (arr_2 [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0]))) > (((min(7233840422946052288, 32767)) + ((min(-1, var_8))))));
                var_11 = (arr_5 [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_12 ^= ((((((arr_9 [i_2] [i_4]) ? ((((arr_0 [i_2]) > (arr_5 [i_3] [i_3])))) : (((arr_9 [i_2] [i_2]) ? (arr_11 [i_2] [i_3] [i_2]) : (arr_12 [i_2] [i_2])))))) || (((((min((arr_12 [i_4] [i_2]), (arr_12 [i_4] [7])))) ? ((((arr_11 [i_2] [i_3] [3]) || (arr_1 [i_4] [i_3])))) : (~var_3))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_23 [i_2] [i_3] [i_4] [i_5] [i_2] = (((((-1345109651 ? 32767 : (arr_21 [i_6] [i_6 - 2] [i_6] [i_6 - 2] [i_4])))) ? ((min((arr_21 [i_6] [i_6] [i_6] [i_6 - 2] [i_6]), var_9))) : (((arr_21 [i_6] [i_6] [i_6 - 2] [i_6 - 2] [i_2]) ? (arr_18 [i_6 - 2] [i_6] [i_6] [i_6 - 2] [i_6 + 1]) : (arr_18 [i_6] [i_6] [i_6] [i_6 - 2] [i_6])))));
                                arr_24 [i_5] [i_5] [i_4] [i_5] [i_6 - 3] [i_2] = -26;
                                arr_25 [i_2] [i_2] [i_4] = (((((arr_16 [i_6 - 2] [3] [i_6] [i_6] [8]) ? (arr_16 [i_6 - 2] [i_6 - 3] [i_6 - 2] [i_6] [i_6 - 1]) : (arr_16 [i_6 - 2] [i_6] [i_6 - 3] [i_6] [i_6]))) < (((((min(-32759, 0))) ? (arr_5 [i_2] [i_2]) : (arr_21 [i_3] [i_3] [i_6 - 2] [i_6 - 1] [7]))))));
                            }
                        }
                    }
                    var_13 = (min((min((min((arr_5 [i_2] [i_4]), var_5)), ((-1731738318 ? 1 : (arr_15 [i_4]))))), (arr_14 [i_3])));
                }
            }
        }
    }
    var_14 = ((~(((var_5 || var_4) + var_6))));
    var_15 ^= ((var_3 > (((((var_1 ? var_7 : var_4))) + 9223372036854775807))));
    #pragma endscop
}
