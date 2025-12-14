/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 6;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((((var_8 - 17707238135497361832) - -var_12)) + var_12)))));
                            var_19 = -var_5;
                        }
                    }
                }
                var_20 = (max(var_20, ((((((var_15 ? var_12 : var_8))) ? -878445977 : (var_14 || var_9))))));
                var_21 = ((1 % (var_8 % var_5)));
            }
        }
    }
    var_22 = var_12;
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_23 = (((((max(var_17, var_3)))) ? (min(-9240, var_9)) : var_11));
                    var_24 = var_5;
                    var_25 = ((var_16 ? 8446733044393395653 : var_12));
                    var_26 = (((((739505938212189793 ? 17707238135497361823 : 17707238135497361840))) ? (((!var_17) ? 739505938212189784 : (!var_0))) : 1975302757));
                }
            }
        }
    }
    #pragma endscop
}
