/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_15 = (((arr_2 [i_0 - 2]) ? ((86 / (arr_0 [0]))) : (arr_7 [i_1 - 1] [i_1] [i_3 - 1] [i_0 - 1])));
                        var_16 = (var_14 || (30750 ^ 46));
                        arr_10 [i_1] [i_1] [12] = (((arr_4 [i_0 - 1]) - -19210));
                    }
                    var_17 ^= ((-(arr_5 [i_0] [2] [i_2 - 1])));
                    var_18 = ((!(((arr_4 [i_1]) != -4682664607505766473))));
                    arr_11 [i_1] = (max((arr_3 [i_0] [i_0] [i_0]), var_10));
                }
            }
        }
    }
    var_19 = -var_14;
    var_20 = ((((max(1, -239065149))) || (!var_4)));
    var_21 ^= (min(-47, (~var_6)));
    #pragma endscop
}
