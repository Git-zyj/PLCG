/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!15487945182295374337);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_18 = (arr_1 [i_0] [i_2 - 1]);
                        var_19 = (max(var_19, ((max((arr_2 [i_0] [i_3]), (arr_3 [0] [i_1]))))));
                    }

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_20 = (min(-3364, var_0));
                        arr_11 [i_0] [i_4] [i_2] [i_0] [i_4] = (min((arr_2 [i_4] [i_1]), (((-(var_0 <= 3475757734310563424))))));
                        arr_12 [i_0] [i_0] [0] [i_2 - 2] [i_4] &= (arr_3 [i_1 + 1] [i_1 + 1]);
                    }
                }
            }
        }
    }
    var_21 = (50065 ? ((0 ? (~-3475757734310563423) : -var_9)) : 7466634879914033146);
    var_22 &= var_9;
    #pragma endscop
}
