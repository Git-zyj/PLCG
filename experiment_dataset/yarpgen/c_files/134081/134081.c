/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] = 245;
                    arr_8 [i_0] [i_2] |= 16245;
                    arr_9 [i_0] = var_5;
                    var_13 = (min(var_13, (((-(min(1, 9181676823485987809)))))));
                }
            }
        }
    }
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_4] = ((((((var_4 ? var_2 : 1)))) + ((-(1 * 42809)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_15 = (((!11) ? ((min(63329, var_0))) : (((arr_4 [i_4]) ? (1 / 1942296102) : -11))));
                            var_16 = ((~(arr_16 [i_3] [i_4] [i_5])));
                            arr_21 [i_6] [i_3] [i_3] = ((((-(arr_2 [i_5] [i_6]))) >> ((((-((min(56227, var_11))))) + 43466))));
                            arr_22 [i_3] [i_5] &= (arr_2 [i_6] [i_3]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
