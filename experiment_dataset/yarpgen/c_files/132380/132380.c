/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((max((((arr_4 [0] [0] [i_1 - 2]) || (arr_4 [12] [12] [i_1]))), ((((min(-23, var_15))) && (((2047 ? -3927 : (arr_1 [12])))))))))));
                arr_6 [i_0] = ((((arr_4 [i_0] [i_1 - 2] [i_1 - 1]) / (arr_5 [i_0]))));
                var_19 = -1;
                var_20 = (min(var_11, (max((5469217135743256264 < 0), (arr_5 [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_2] [i_3] [i_2] [i_5] [i_5] [i_2] = (max((max(248, ((-1047860244 ? 0 : 549755813887)))), ((((arr_17 [i_5] [i_2] [i_2] [i_5 - 1] [i_5 + 2]) % 262143)))));
                                arr_19 [i_2] [i_2] [i_2] [i_6 + 1] [i_6 + 1] [i_3] [i_2] = (var_4 != var_12);
                                var_21 = ((-(max((max(-352977987705538746, 108)), 128))));
                            }
                        }
                    }
                    var_22 = (min(var_22, var_8));
                }
            }
        }
    }
    #pragma endscop
}
