/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((1259501094 | ((31 / (min(1259501087, 1259501094))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 -= (arr_7 [i_4] [i_2] [i_2]);
                                var_21 = arr_5 [i_1] [i_3] [i_4];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_20 [i_0 + 3] [i_0] [i_0] [i_2] [i_0] [i_0] [i_6 - 2] = (min(3035466202, (((~(arr_9 [i_1] [i_2] [i_2] [i_0]))))));
                                var_22 = 1259501094;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_23 = (((((min(31, 155)))) + 5090107448535906106));
                                arr_26 [i_0] [i_0] [i_1] [i_0] = 17043723201988504931;
                                var_24 = (max(1443519100, (((arr_5 [i_0] [i_0] [i_8]) ? -1811842684 : 3035466202))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
