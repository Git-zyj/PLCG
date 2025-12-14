/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 |= (((arr_0 [i_2 - 1]) ? ((var_2 << (-1 && 255))) : (arr_5 [i_0] [i_1] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2 + 1] [i_2 + 1] &= ((-(((arr_10 [i_4] [i_4] [i_0] [i_2 - 3] [i_1] [i_0]) ^ var_8))));
                                var_14 = ((16 * ((((min((arr_10 [i_2] [0] [i_2] [i_2] [i_2] [i_2]), 1))) ? (arr_9 [i_2] [i_3] [i_3]) : 3))));
                            }
                        }
                    }
                    var_15 = (255 / -20011);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    arr_21 [i_5] [i_5] [i_5] [i_5] = ((((min(((max(16497, -13044))), (~13)))) ? ((((max(var_8, 113))) ? -224 : (32729 / -11312))) : ((var_6 / ((max(var_3, -13053)))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_16 = (arr_10 [14] [5] [5] [i_8] [5] [8]);
                                var_17 = (((((((min((arr_20 [i_5] [i_5] [i_5] [5]), 16500))) % (((arr_24 [i_6] [i_6] [i_8]) ? 3210 : -3922))))) ? ((min((arr_10 [3] [3] [3] [i_8] [14] [i_8]), (arr_10 [i_5] [i_6] [i_5] [i_7] [i_8] [i_9])))) : -13044));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
