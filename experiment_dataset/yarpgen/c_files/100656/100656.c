/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max((((var_6 || var_6) | 7282405668665401847)), var_5);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((!((min((var_4 ^ 8), (max(11164338405044149768, var_0)))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_12 = (((arr_1 [i_0] [i_1]) != var_6));
                        var_13 = (arr_6 [i_0]);
                        arr_11 [i_1] [i_3] [i_0] [i_3] = (min((min(7282405668665401875, (((arr_9 [i_0]) & (arr_6 [i_1]))))), (arr_9 [i_0])));
                        var_14 -= 7349851527577709418;
                        var_15 &= -7282405668665401848;
                    }
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_0] = (!1);
                        var_16 = (((((-(arr_4 [i_0])))) * (min(7282405668665401889, 7282405668665401856))));
                        arr_15 [i_0] [i_1] [i_2] [i_2] [i_0] = ((max(((max(var_4, var_1))), ((-(arr_5 [i_0] [i_1] [i_1]))))));
                        arr_16 [i_0] [i_1] [i_2] [i_0] = (arr_5 [i_0] [i_0] [i_1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
