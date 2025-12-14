/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1295525450;
    var_16 -= (max(var_3, -5962));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 += ((((max(var_4, var_9)) % (max(var_7, var_5)))));
                arr_5 [10] = ((!(((((max(-9130257609423756353, 7915728372362194618))) ? 2107773098765355099 : 10531015701347357010)))));
                arr_6 [i_0] [i_1] = ((!((max(67, var_9)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_18 -= (max((arr_9 [i_2]), 7915728372362194623));
                arr_14 [i_2] [i_2] = (((((((var_14 < (arr_7 [i_2] [i_2]))) ? (max(-89, 7915728372362194622)) : ((max((arr_3 [i_2] [i_2]), var_11)))))) ? (max((((var_10 ? var_14 : var_2))), (max((arr_13 [i_2] [14] [i_3]), 10531015701347357033)))) : (max(((-1445378677 ? 10531015701347356999 : 2472836935202614378)), ((max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_3]))))))));
                arr_15 [i_2] = ((var_7 ? (arr_11 [i_3] [i_3] [i_2]) : (arr_13 [i_2] [i_3] [i_3])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 22;i_6 += 1)
                            {
                                arr_25 [i_2] [i_3] [i_4] [16] [i_5] [i_5] [i_6] = 2329377232;
                                var_19 = 0;
                            }
                            var_20 = ((((!(arr_13 [1] [i_3] [i_2]))) ? ((-(arr_8 [i_5] [i_3]))) : ((((arr_8 [i_2] [i_2]) != (arr_8 [i_4] [i_3]))))));
                            arr_26 [i_2] [5] [i_4] = ((-(max((max(1667559039121808300, (arr_24 [i_5]))), 67))));
                        }
                    }
                }
                arr_27 [i_2] [i_3] = (((-987552239 ? var_1 : var_9)));
            }
        }
    }
    #pragma endscop
}
