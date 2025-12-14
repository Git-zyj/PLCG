/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 ^= (((((arr_10 [i_4] [i_4] [7] [i_1 - 1] [i_3 + 2]) && (arr_10 [i_0] [i_0] [i_4] [i_1 - 1] [i_3 + 2]))) && (((arr_10 [i_0] [i_0] [8] [i_1 - 1] [i_3 + 2]) && (arr_10 [3] [i_2] [i_2] [i_1 - 1] [i_3 + 2])))));
                                arr_12 [i_4] = arr_5 [i_0] [i_0];
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_1 - 1] [i_2] = var_8;
                }
            }
        }
    }
    var_13 = ((1099507433472 == (18446742974202118149 - 18446742974202118149)));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            {
                var_14 = ((var_6 && (~16243379483528341435)));
                var_15 = (((1099507433466 * 32) - (((-(arr_15 [i_5 - 1]))))));
                arr_18 [i_6] [i_6 - 2] [i_6] = arr_16 [i_6];
                arr_19 [i_5 + 2] [i_6] = (arr_14 [i_6]);
            }
        }
    }
    var_16 = var_9;
    #pragma endscop
}
