/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [10] [i_3] [12] [i_2] [i_3] [i_3] = (max(((var_8 ? 103 : (arr_2 [i_0 - 1] [i_1]))), (((arr_8 [i_2 - 1] [1] [i_2 - 1] [i_2 + 2]) ? (~0) : (arr_1 [i_0] [i_0])))));
                            arr_12 [i_3] = var_11;
                            var_12 = (min(var_12, (((~(max((var_5 << 0), (~var_11))))))));
                            var_13 = (((16760832 ? 24 : -1)));
                            arr_13 [i_0] [i_0] [i_2] [i_3] = (min(var_3, (((arr_3 [5] [i_1] [i_3]) + ((((var_10 >= (arr_3 [i_1] [i_1] [3])))))))));
                        }
                    }
                }
                arr_14 [1] [i_1] [i_1] &= (arr_9 [4] [i_1] [8] [i_0 - 2] [i_0] [i_0 - 2]);
                arr_15 [i_0] [i_1] = (((((~(arr_7 [1] [1] [i_0 + 1] [i_0] [i_0 + 2] [9])))) ? ((min((arr_7 [i_0] [i_0] [i_0 + 1] [1] [i_0 + 2] [i_0]), (arr_7 [i_0] [i_0] [i_0 + 1] [9] [i_0 + 2] [i_0 + 1])))) : (~10)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                var_14 = (max((arr_16 [i_5] [i_4]), 18));
                var_15 = min((((~1) ^ 5896452624679003685)), ((((arr_16 [i_4] [i_4]) >> (((arr_17 [i_4] [i_5]) - 2652135438082074886))))));
                var_16 = (min(var_16, ((((max(-1, 24)) % (~-71))))));
            }
        }
    }
    #pragma endscop
}
