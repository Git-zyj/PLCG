/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_7);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 = ((!(!var_9)));
                                var_13 ^= (max(((var_6 ? var_5 : var_4)), var_2));
                                var_14 = (min(var_14, ((max(12, -var_2)))));
                                arr_14 [i_0] [i_1] [3] [i_3] [i_1] [i_1] [3] = (((((((4 ? -1677197177641808292 : var_8)) & (-65 > 244)))) ? ((((11 ? var_10 : 7683810731396955831)) << ((((min(-32751, var_6))) + 32754)))) : (-2147483647 - 1)));
                                var_15 = (min(var_15, (max(var_1, -3516683499931117208))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1 - 1] = var_6;
            }
        }
    }
    var_16 = var_10;
    #pragma endscop
}
