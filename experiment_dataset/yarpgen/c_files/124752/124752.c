/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = var_0;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, ((((((((max(var_9, (arr_8 [i_0])))) == (~var_1)))) >> (((arr_10 [8] [i_3]) - 97)))))));
                            var_14 = (arr_6 [i_0] [i_0] [i_2]);
                            arr_12 [i_3] [12] [i_1] [i_1] [i_0] [i_0] = (((((((((arr_6 [i_2] [1] [i_0]) ? 511 : 1))) ? ((-31 ? 3927836984530581460 : var_1)) : 2011921535))) ? (((((var_10 ? 2011921535 : var_0))) ? var_7 : 28595)) : (((arr_9 [i_3] [i_0]) ? var_1 : ((var_4 ? 11603 : var_4))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
