/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((1 ? 1223957339668693642 : 1));
    var_20 = ((-((~(min(1, 819432581))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = (((~((-(arr_0 [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_22 = (min(var_22, (((~(max(((-(arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3]))), (arr_0 [i_0]))))))));
                            arr_14 [i_0] [i_0] [i_1] [i_2] [1] = (min(1, ((var_6 ? 20316 : (min(0, 3492154721223889862))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, (max(-var_1, (max(var_3, -var_16))))));
    #pragma endscop
}
