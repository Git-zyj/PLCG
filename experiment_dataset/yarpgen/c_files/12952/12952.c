/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 ^= ((((((var_1 && (arr_1 [i_0]))) && 18367531012042911546)) ? (((max((arr_4 [2] [i_1]), var_7)))) : ((min((arr_3 [i_0 - 1] [7]), (((!(arr_1 [i_0])))))))));
                arr_5 [14] [6] [14] = (((min(79213061666640069, 79213061666640057)) + (-1216514977 + 2609861477704592414)));
                var_16 = var_11;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 *= (max(1, 18446744073709551613));
                                var_18 = var_7;
                                arr_14 [1] [i_4] [i_2] [i_4] [i_0] = max(((((((arr_6 [6] [6] [i_2] [6]) ? var_1 : var_14))) ? (~4136097133) : (arr_13 [i_0 + 1] [i_4] [i_3 - 1] [i_3 + 1] [i_4 - 1]))), (((~((min((arr_9 [1] [i_1] [10] [i_1] [i_1]), (arr_8 [i_3 + 1] [i_2] [i_1] [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(18446744073709551596, ((min(17, -19)))));
    var_20 = (((((~9506973974718047911) & (~191))) ^ var_11));
    var_21 = var_3;
    #pragma endscop
}
