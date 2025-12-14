/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 |= (min(((var_14 / (((18114 ? -1631383374 : 56))))), var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 -= (((((((((arr_3 [14] [i_1]) / (arr_0 [i_0])))) ? ((var_7 << (1196549848 - 1196549845))) : (min(1196549848, -1196549847))))) ? -3482 : -1196549846));
                var_18 = (max(((((arr_2 [i_1] [i_0] [i_0]) && 7390))), (((arr_2 [i_0] [i_1] [i_1]) ? (arr_2 [i_0] [i_0] [i_1]) : (arr_2 [i_1] [i_1] [i_0])))));
                var_19 = ((!((!((!(arr_0 [12])))))));
                arr_4 [i_1] [i_1] [i_0] = (arr_0 [i_1]);
                arr_5 [i_0] [i_1] = (((!8285169326579046480) != 50900));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_20 = (min((min((~-6), (~54))), (((arr_17 [i_2] [i_3 + 1] [i_4] [i_3 - 3] [i_6]) & (arr_17 [i_2] [i_3] [11] [i_3 - 1] [i_5])))));
                                var_21 = (max((((!((min(var_11, -1196549848)))))), (max((arr_7 [i_3 - 3]), (arr_7 [i_3 - 1])))));
                                var_22 = (max(((((min((arr_13 [i_6] [i_4] [i_3] [i_2]), -1196549847))) ? var_7 : (arr_8 [i_4]))), (arr_7 [i_6])));
                                var_23 = (-(max((arr_17 [0] [i_3] [i_3] [i_3] [i_3 + 1]), 504910820)));
                                arr_20 [i_2] [i_3] [2] [i_5] [i_6] = (((((max((arr_10 [i_3 - 4] [i_3 - 3]), (arr_10 [i_3 - 4] [i_3 - 3]))))) ^ (((~300886664434947095) >> (((!(arr_6 [i_2]))))))));
                            }
                        }
                    }
                }
                arr_21 [i_2] [6] &= ((max((((-1196549857 ? -1377788252 : 2009880837))), (2055684934 ^ 12))));
                arr_22 [i_2] [i_3] = ((~(max((max(27236, (arr_9 [0] [i_3]))), (arr_14 [i_2] [i_2] [i_2] [i_2])))));
                arr_23 [i_3] [i_3] [i_3] = (((((var_12 ^ (~var_13)))) ? ((max((arr_14 [13] [i_3 - 1] [i_3] [13]), (arr_14 [i_3] [i_3 - 2] [i_3] [i_3])))) : var_10));
                var_24 ^= ((((-1196549847 ? ((2855506689 ? 3 : 573546767)) : -2055684939))) ? (min((arr_11 [i_3] [i_3 - 4] [i_2]), var_6)) : (arr_17 [i_2] [i_2] [i_3] [i_3] [i_3 + 1]));
            }
        }
    }
    #pragma endscop
}
