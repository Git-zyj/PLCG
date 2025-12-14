/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((63899 ? 12800 : 126)) | (((arr_1 [i_1 + 3] [i_1 + 1]) ? (arr_1 [i_1 + 3] [i_1 - 1]) : (arr_1 [i_1 - 1] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 ^= 1523;
                                var_16 = (~var_6);
                                arr_15 [i_2 - 1] [i_0] [i_2 - 1] [i_0] [i_0] = (min(((((((-(arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2])))) ? (arr_5 [1] [i_1 + 1]) : ((var_9 ? (arr_0 [i_1]) : var_8))))), (min((6138594344243065525 || 1523), (arr_4 [i_1 + 3] [i_1 + 2] [i_0] [i_1])))));
                            }
                        }
                    }
                    arr_16 [i_0] = (min(((((arr_14 [i_1 + 1]) > var_0))), var_0));
                }
            }
        }
    }
    var_17 = var_5;
    #pragma endscop
}
