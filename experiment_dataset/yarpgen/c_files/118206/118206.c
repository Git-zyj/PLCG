/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(11068147056296244211, (((max(19601, var_9))))));
    var_20 = (min(var_13, 1));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 ^= (max(var_9, (arr_5 [i_0 + 1])));
                    var_22 ^= (!var_13);
                    arr_6 [i_1] [i_2] &= ((((max(56691, -64))) ? ((max(var_15, (arr_3 [i_0 + 1] [i_0 - 2] [7])))) : ((-(!-7987)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 6;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 - 1] [i_1] [i_4] [i_3 + 1] [i_2] [i_2] = (((((~((var_6 ? (arr_5 [i_0]) : var_1))))) ? (((arr_13 [i_4] [i_4] [i_1] [i_2] [i_3] [i_4 + 4]) % -5066444272924075849)) : 45935));
                                var_23 *= max(((18446744073709551615 ^ (((var_0 ? 118813326302139229 : -53))))), (-19648 == 0));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            {
                arr_19 [i_6] [i_6] [i_5 + 1] = ((3923271520329998664 ? 6538597974134583820 : (arr_16 [i_5 + 2])));
                arr_20 [i_5 + 1] = (((((((((0 ? 87 : (arr_17 [i_5] [9])))) >= ((-88 ? (arr_15 [11] [i_6]) : (arr_17 [i_6] [i_6 + 2]))))))) % ((28 ? (arr_15 [i_6] [i_5 - 2]) : 96))));
            }
        }
    }
    #pragma endscop
}
