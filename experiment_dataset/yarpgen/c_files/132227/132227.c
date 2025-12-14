/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_14 = (max(((-(((arr_9 [i_3] [i_1] [i_3]) ? 65535 : (arr_6 [i_0]))))), (max((arr_7 [i_0] [i_1] [i_1] [13] [i_3]), ((max((arr_5 [i_0] [i_0]), (arr_9 [i_1] [i_1] [i_3]))))))));
                            arr_10 [i_3] [i_3] [i_3] [i_2] [i_3] = ((-(min((arr_8 [14] [i_3 + 3] [i_3 + 2] [i_3 - 1]), (arr_8 [i_3] [i_3 + 3] [i_3 + 2] [i_3])))));
                            var_15 = var_7;
                        }
                    }
                }
                arr_11 [i_0] = ((7 ? 65535 : 0));
                var_16 = (max(var_16, 65535));
                var_17 = ((((max((arr_0 [i_0] [i_1]), (max((arr_5 [i_0 + 3] [i_1]), var_12))))) ? (((!((32 == (arr_1 [i_1])))))) : (((!(arr_6 [i_0 + 2]))))));
            }
        }
    }
    var_18 = var_13;
    #pragma endscop
}
