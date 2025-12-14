/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]);
                                arr_14 [i_1] [i_1] = 364747455;
                                var_16 = ((+((-var_0 ? (arr_1 [i_0] [i_3]) : ((~(arr_8 [i_0] [i_1] [i_2])))))));
                                var_17 = (max(var_17, 5));
                                var_18 = (max(var_18, ((max((arr_8 [i_0] [i_0] [i_0]), (arr_11 [i_0] [9] [i_1] [16] [i_2] [i_3] [i_4]))))));
                            }
                        }
                    }
                    arr_15 [i_2] [i_1] = 23200;
                    arr_16 [i_0] [i_1] [i_2] = (arr_8 [i_0] [i_1] [0]);
                }
            }
        }
    }
    var_19 |= var_6;
    var_20 -= var_14;
    var_21 = -66;
    #pragma endscop
}
