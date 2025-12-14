/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(63, ((var_9 ? var_9 : 1))))) <= ((min(var_5, 62449))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_11 [i_1] [4] [i_2] = (((arr_4 [i_1]) - ((~(arr_4 [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_3 + 2] [i_4] = var_7;
                                arr_18 [i_4 - 2] [1] [i_0] [i_1] [i_0] = (min(((((((arr_5 [i_0] [i_0 - 2]) ? var_4 : (arr_14 [15] [i_1] [i_2] [i_3] [11])))) ? (((arr_13 [i_4] [0] [1] [i_0]) - 896)) : 27)), ((-(((arr_8 [i_4] [i_3 + 2] [i_2] [i_1]) + 896))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
