/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_13, (min(((var_12 ? 0 : var_3)), -var_6))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = (arr_8 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = ((((((arr_3 [i_4 + 1]) ? (arr_3 [i_4 + 3]) : 32427))) ? (min((arr_3 [i_4 + 2]), (arr_3 [i_4 + 2]))) : (min((arr_3 [i_4 + 3]), (arr_3 [i_4 - 1])))));
                                var_16 = var_1;
                            }
                        }
                    }
                    arr_16 [i_1] [i_0] [i_2] = ((-(((arr_2 [i_0]) ? (-32767 - 1) : (arr_11 [i_0] [1] [i_2])))));
                    arr_17 [i_0] [i_1] [i_0] = ((-113 ? (((max((max((arr_12 [4] [4] [i_2] [i_0] [i_1]), -32432)), (min(5, var_8)))))) : (arr_1 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
