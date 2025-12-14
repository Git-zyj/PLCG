/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (((((((var_9 ? -6595922685449320679 : 6595922685449320679))) ? (max(16578658879276011600, var_0)) : (((var_4 ? var_9 : 2821894854))))) < ((((((var_1 ? var_6 : var_7)) < (max(var_12, var_12))))))));
    var_19 = (min(var_19, ((max(((max(var_9, 1))), (((var_5 ^ 2102601285439696908) % (((0 ? var_17 : var_13))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = (((max((arr_1 [i_0]), (arr_1 [i_1]))) + var_3));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 = (((((0 + ((1 ? (arr_2 [i_4] [i_2] [i_2]) : (arr_3 [16] [i_0])))))) || (((var_9 ^ ((((arr_10 [i_4] [i_4] [i_3 + 1] [i_2] [16] [i_1] [16]) ? var_4 : (-2147483647 - 1)))))))));
                                arr_12 [i_0] [i_0] = ((((max(-var_14, (arr_7 [i_3] [i_2] [i_1])))) ? var_12 : (max((~0), -45184))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
