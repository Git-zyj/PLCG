/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 |= (min(var_12, (((((var_4 ? -20761 : 31428))) ? (-21015 > var_6) : (max(1, var_10))))));
                                var_14 *= (((max(var_5, var_5)) != (((0 / ((max(-21015, var_12))))))));
                            }
                        }
                    }
                    arr_13 [i_2] = 9473;
                    var_15 = (max(var_15, (var_3 & -21015)));
                    arr_14 [7] [5] [i_1 + 3] [10] = (min((((((max(32744, -21008))) || (((var_4 ? 21007 : (arr_10 [2] [i_2] [i_2] [1] [i_0]))))))), (arr_1 [i_1] [4])));
                }
            }
        }
    }
    var_16 = var_6;
    var_17 = (max(((56062 - ((var_9 ? 15 : var_10)))), -21));
    #pragma endscop
}
