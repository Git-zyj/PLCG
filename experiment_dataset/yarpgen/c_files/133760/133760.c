/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((var_5 != ((var_3 >> (var_2 + 84))))), (((((var_9 << (var_8 + 31177)))) && var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 = min(((((((-(arr_7 [i_1] [i_3] [i_4])))) && (((arr_12 [i_1] [i_0] [i_2] [i_0] [i_4]) && (arr_11 [i_2] [i_4] [i_4] [i_4])))))), ((((min((arr_6 [i_3]), var_4))) ? ((~(arr_5 [i_1] [i_1] [i_2] [i_1]))) : ((var_1 ? (arr_7 [i_2] [i_3] [i_3]) : (arr_5 [i_0] [i_1] [i_2] [i_3]))))));
                                var_12 = (arr_8 [i_1] [i_1] [i_2] [i_2] [1] [i_4]);
                            }
                        }
                    }
                }
                var_13 = (min(var_13, ((max((arr_12 [i_1] [i_1] [i_1] [i_1] [17]), ((max((arr_8 [i_1] [12] [i_0] [i_1] [i_1] [i_0]), var_6))))))));
                arr_13 [13] [i_1] [i_1] = var_5;
                var_14 = ((-(min(2350021451031584065, 1199809916))));
            }
        }
    }
    var_15 = var_6;
    #pragma endscop
}
