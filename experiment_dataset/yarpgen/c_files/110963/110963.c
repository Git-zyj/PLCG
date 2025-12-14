/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = (min((min((min((arr_5 [i_0]), (arr_10 [8] [i_1] [i_1] [i_2] [i_3] [i_3]))), (arr_10 [i_0] [0] [0] [i_0] [i_0] [i_0]))), (max((min((arr_9 [i_0] [i_1] [i_2] [11]), 6286471769022657958)), 19191))));
                                var_17 = (max(var_17, (arr_7 [1] [1] [10] [10])));
                            }
                        }
                    }
                    arr_14 [i_2] [i_0] [i_0] [4] = -6286471769022657948;
                    var_18 = (min((min(-19191, 0)), (max(((((arr_6 [i_2] [6] [i_2] [i_2]) <= (arr_2 [i_0])))), (arr_2 [i_0])))));
                    arr_15 [i_2] [i_0] [i_2] = (min((arr_4 [i_0]), (arr_3 [i_0])));
                    var_19 *= (min((min(((min(8102544949332356813, (arr_7 [i_0] [i_0] [4] [i_2])))), (max(22518, (arr_8 [i_2] [i_1] [5]))))), (arr_10 [i_0] [6] [i_2] [2] [13] [1])));
                }
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
