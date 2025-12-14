/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (14876 != -40);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 &= (((((((var_8 ? -179305064 : 25)) + 2147483647)) >> ((((min(42, 39))) - 17)))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_0 - 1] [i_1] [1] [i_2] = ((((((((var_5 ? (arr_7 [i_1] [i_1]) : -25))) ? var_5 : ((min((arr_4 [i_1] [i_1]), (arr_7 [i_1] [11]))))))) || (((-(!var_7))))));
                    arr_9 [3] [i_1] = (arr_5 [13]);
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_16 = (max(var_16, 15));
                            var_17 = (min(var_17, ((((-8360 / 33554431) ? 1 : ((~(~1))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
