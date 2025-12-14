/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((~((~(arr_6 [i_0] [i_1])))))));
                var_11 = min(((((arr_2 [7] [i_1]) ? (arr_2 [i_1] [i_0]) : (arr_2 [i_0] [i_0])))), (max(-2945183832558418905, -212076682022047944)));
            }
        }
    }
    var_12 = var_8;
    var_13 = min(var_6, var_4);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_14 = max((((-6167207873377788808 + 9223372036854775807) >> (var_2 - 2379249111200018083))), ((~(~var_3))));
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((~((((arr_0 [i_3]) - var_4))))))));
                                arr_20 [8] [i_3] [i_3] |= 3912023017147669178;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
