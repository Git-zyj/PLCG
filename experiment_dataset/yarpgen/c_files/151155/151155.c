/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_11 >= (~374319138));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, ((((max(1267579942072336293, (arr_9 [1] [i_0] [i_2 + 1]))) & ((((arr_7 [i_0] [i_0] [i_2 - 1]) >> (((arr_10 [i_2 + 1] [i_1] [8] [i_3]) + 24945))))))))));
                            var_17 = (max(var_17, (((+(max(-1267579942072336291, (((arr_1 [i_0] [i_0]) ^ var_9)))))))));
                        }
                    }
                }
                var_18 &= var_13;
                var_19 = (max(((((arr_8 [i_0]) * (arr_8 [i_0])))), -var_5));
                var_20 = (min(var_20, ((((((((((arr_11 [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_11 [0])))) ? var_11 : (arr_5 [i_0] [i_1] [i_1])))) ? var_5 : (((47812 ? (arr_10 [i_0] [i_0] [i_1] [5]) : (arr_10 [i_0] [i_0] [5] [i_1])))))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_21 = ((8191 + ((var_13 ? -52924 : 40950))));
                                arr_20 [i_0] [1] [i_4] [i_5] [i_6] [i_0] [i_5] = (arr_5 [i_6] [i_6] [i_6]);
                                var_22 = ((((var_13 - (arr_12 [i_0] [i_5 - 1] [7] [i_5 + 1]))) - ((-1 ? 12607 : -8180))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
