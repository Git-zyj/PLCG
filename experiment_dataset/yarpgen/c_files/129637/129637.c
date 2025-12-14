/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 52266742;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = min(var_1, (((!(arr_1 [i_0] [i_1])))));
                                var_14 &= (((min(((101477038 ? 422855429 : (arr_9 [i_0] [i_1] [i_2] [i_2] [i_0]))), 35))) ? 422855442 : (min((max((arr_6 [i_0] [i_1] [i_2] [i_2]), (arr_5 [i_0] [i_1] [i_3]))), (min(422855427, 422855426)))));
                            }
                        }
                    }
                    var_15 = (max(var_15, (((((arr_5 [i_0] [i_1] [i_2]) ? (arr_3 [1] [8] [i_2]) : -2147483640))))));
                    var_16 = (min(2147483647, 84));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((-(arr_13 [i_0] [i_0] [6] [5] [5])))));
                                var_18 = (arr_7 [i_0] [12] [i_0] [i_1] [11]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
