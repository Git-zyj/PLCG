/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (max(((max(((~(arr_5 [i_2 + 1] [11]))), (max(var_4, var_5))))), (var_7 * var_11)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = 9223372036854775807;
                                var_19 = (arr_11 [i_0] [i_1 - 2] [i_1] [i_4 - 2]);
                                var_20 = ((-(max((max(var_8, var_7)), (((-(arr_5 [i_0 - 1] [i_4]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 *= -4294967295;
    var_22 = min(var_10, (~var_13));
    #pragma endscop
}
