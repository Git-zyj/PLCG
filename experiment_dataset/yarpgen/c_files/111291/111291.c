/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = ((-((-(arr_7 [i_1] [i_2 - 1] [i_2 + 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, (arr_7 [i_0] [10] [i_4 + 1])));
                                var_22 = (min(var_22, (arr_8 [i_0] [i_3] [i_3] [i_3])));
                                var_23 = (min(var_23, ((((arr_4 [i_3] [i_4 - 3] [i_4 - 2]) ^ (arr_1 [7] [i_3]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 &= (min(27, var_14));
    var_25 ^= max(((var_12 ? ((var_9 ? var_3 : var_11)) : var_8)), (((((267911168 << (var_10 - 3122794743801315798)))) ? ((var_5 >> (var_15 - 227))) : ((var_12 ? var_8 : var_11)))));
    #pragma endscop
}
