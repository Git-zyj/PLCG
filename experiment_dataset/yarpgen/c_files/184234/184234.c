/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_16);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_0] = ((((((!68) << (arr_1 [i_0] [i_2 - 2])))) == (arr_8 [i_2] [15])));
                    arr_10 [i_2] [i_2] [i_2] [i_2] = (((arr_4 [i_1 - 1] [i_1 - 1]) ? (max(228, (!var_6))) : var_0));
                    var_20 = (arr_5 [i_0] [i_1] [16]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = var_14;
                                var_22 &= ((!(((1369046984 / ((-2106845557308037768 / (arr_6 [1] [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_3;
    var_24 = (max((var_14 == var_15), var_7));
    #pragma endscop
}
