/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (max(((var_9 + ((var_0 ? var_5 : var_8)))), ((var_9 / (~var_7)))));
    var_11 += (var_9 < var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = (arr_1 [i_0] [i_1]);
                    var_13 = (max((((-(((arr_0 [i_0]) ? (arr_1 [i_0] [i_2]) : (arr_3 [i_2] [i_1] [i_0])))))), (arr_4 [i_0] [i_0] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 ^= (((arr_0 [i_1]) + (max((arr_6 [i_0] [i_3] [i_4]), (((!(arr_5 [i_0] [i_0] [i_0]))))))));
                                var_15 = (max((0 % 17629740631962690215), ((((((-(arr_2 [i_4] [i_1] [i_0])))) ? ((-(arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) : ((~(arr_2 [i_0] [i_3] [i_4]))))))));
                                arr_11 [i_4] [i_1] = (max((max((arr_9 [i_4]), ((~(arr_6 [i_0] [i_2] [i_2]))))), ((min((arr_9 [i_4]), (arr_5 [i_1 - 1] [i_3 + 1] [i_4]))))));
                                var_16 = (min(((((min((arr_1 [i_1] [i_2]), (arr_6 [i_0] [i_0] [i_0])))) ? (max((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_1 - 1] [i_2]))) : (arr_9 [i_4]))), (arr_6 [i_2] [i_3 + 1] [i_4])));
                            }
                        }
                    }
                    arr_12 [i_0] [i_1] [i_2] = ((-(arr_9 [2])));
                }
            }
        }
    }
    var_17 = (!var_9);
    #pragma endscop
}
