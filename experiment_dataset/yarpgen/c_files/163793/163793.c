/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, -65535));
                                var_20 = (max(var_20, ((max(127, (((((0 && (arr_11 [0] [i_2] [i_1] [0])))) << (var_16 - var_16))))))));
                                arr_14 [i_0] [i_1] [6] [i_3] [i_0] = (max((min(var_15, (max(1149731198088973054, (arr_3 [i_0]))))), ((((!var_5) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : -var_9)))));
                            }
                        }
                    }
                }
                var_21 = ((~(arr_13 [i_0] [14] [4] [14] [i_0] [i_0 - 3] [i_0 + 2])));
            }
        }
    }
    var_22 &= 127;
    #pragma endscop
}
