/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 ^= (((((1 * (var_4 + 3627709181)))) ? -34509 : (min(1433093037, (arr_5 [i_1 + 2] [i_0] [i_0])))));
                            arr_9 [i_0] [i_0] [i_3] [i_0] = (((~(arr_1 [i_0]))));
                        }
                    }
                }
                var_20 = (min(var_20, -var_0));
                arr_10 [i_0] [1] [i_1] = (arr_4 [i_0] [i_1] [i_1 - 2]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 13;i_5 += 1)
        {
            {
                var_21 = (max(((((((65535 ? 35 : 65535))) != 4025173876))), 2097152));
                var_22 = ((arr_15 [i_5 - 4] [i_5 + 3] [i_5 - 1]) | (max((arr_15 [i_5 + 2] [i_5 - 4] [i_5 + 2]), (arr_11 [i_5 - 2] [i_5 + 2]))));
                arr_17 [i_4] = ((-(min((arr_16 [i_4]), (arr_16 [i_4])))));
                arr_18 [i_4] [12] |= ((~(((!(arr_16 [4]))))));
            }
        }
    }
    #pragma endscop
}
