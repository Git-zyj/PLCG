/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 = (max(-0, (arr_1 [i_1 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_0] [i_4] = 1;
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (((((var_6 & var_1) ^ var_6))) ? ((((~1888516045) ? (arr_10 [i_0]) : 2406451251))) : ((2406451267 ? (arr_13 [i_0] [i_1] [i_2] [1] [i_4]) : 67108862)));
                            }
                        }
                    }
                    var_11 = ((~(max(2473549922, ((max(var_5, var_8)))))));
                }
            }
        }
    }
    var_12 ^= ((6466 ? -17885 : 2202437954799242142));
    var_13 |= var_6;
    #pragma endscop
}
