/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (arr_0 [i_1] [i_1])));
                    var_17 = (max(var_17, (arr_7 [i_2] [i_1] [15])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                var_18 = (max(var_18, (min(((((((-(arr_6 [i_3] [1] [i_4])))) ? var_7 : 0))), ((146033129 ? (max(var_8, (arr_1 [i_3]))) : (var_2 || var_13)))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_20 [i_7 + 1] [i_3] [i_5] [i_3] [i_3] = (arr_14 [i_5]);
                                arr_21 [i_3] [6] [i_5] [13] [i_4] [i_3] = ((arr_11 [i_3]) ? (arr_14 [6]) : ((-(arr_18 [0] [i_5] [0] [i_3]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
