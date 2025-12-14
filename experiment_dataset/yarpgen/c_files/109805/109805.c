/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_10 = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, (((((((-((var_5 ^ (arr_9 [i_4] [i_4 - 3] [i_2] [4] [i_2] [i_4 - 1]))))) + 2147483647)) >> ((((((-(arr_6 [i_0 + 2] [i_0 + 2] [i_0]))) - ((var_3 ^ (arr_7 [i_1] [i_1] [i_1] [i_1]))))) + 51885)))))));
                                var_12 -= ((min(-8785790074121032921, 8785790074121032920)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = ((((!(((var_7 ? 10632 : -23))))) ? ((((!var_1) | var_5))) : (~8407867283422921419)));
    #pragma endscop
}
