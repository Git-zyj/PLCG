/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 1] [i_1] = 195;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 ^= ((((((arr_12 [i_3 + 3] [i_3 + 1] [i_3 + 3] [i_3 - 1] [i_3 + 1]) ? ((~(arr_8 [i_0]))) : (arr_9 [i_0] [i_0] [0] [i_0 + 1])))) && (arr_12 [i_0 - 1] [1] [i_2] [i_3] [i_4])));
                                var_19 = (((arr_11 [i_0 + 1] [i_1] [i_2] [1] [i_2 - 1]) ? (arr_11 [i_0] [i_1] [i_0] [1] [i_2 - 1]) : (arr_11 [i_0] [i_1] [i_0 + 1] [i_1] [i_2 - 4])));
                            }
                        }
                    }
                    var_20 = ((min(((1574739440 ? (arr_0 [i_0]) : (arr_8 [i_0 - 1]))), (arr_11 [1] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) + 922669244);
                    var_21 = (((arr_3 [i_0] [i_0]) ? 922669244 : -18));
                    var_22 = 1152921504606846975;
                }
            }
        }
    }
    var_23 = -2;
    var_24 = ((var_15 ? -2 : var_8));
    var_25 = ((var_11 ? ((3190 ? var_1 : -14)) : var_1));
    #pragma endscop
}
