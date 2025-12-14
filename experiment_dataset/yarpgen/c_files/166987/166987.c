/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_2] [i_3] = 1150669704793161728;
                                arr_13 [i_0] [i_0] [i_0] = ((+(((((min((arr_2 [i_2] [i_3]), (arr_6 [i_1])))) || (arr_9 [i_0] [i_0] [i_3] [i_4]))))));
                                arr_14 [i_0] [i_0] [i_0] = var_8;
                            }
                        }
                    }
                }
                var_16 = var_13;
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_19 [i_0] = var_1;
                            var_17 = (min(var_17, (arr_1 [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, (((84 ? -20844 : 1087869022)))));
    #pragma endscop
}
