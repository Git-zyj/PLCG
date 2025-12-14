/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_7;
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((((max((arr_1 [i_0]), (arr_11 [i_0] [i_1 - 1] [i_2] [i_3] [i_4]))) >= (((((arr_1 [i_2]) + 9223372036854775807)) >> (181484956 - 181484894))))))));
                                arr_12 [i_3] [i_3] [i_3] [i_3] [i_1] = ((0 < (max((arr_11 [i_0] [i_0] [i_4 - 2] [i_4 - 2] [i_1 - 1]), var_11))));
                                var_16 |= (((((arr_8 [i_0]) || var_8)) && (arr_8 [i_0])));
                                var_17 = (min(var_17, (arr_9 [i_2] [i_4 + 3])));
                            }
                        }
                    }
                }
                var_18 = var_5;
                var_19 = (arr_3 [i_0]);
            }
        }
    }
    #pragma endscop
}
