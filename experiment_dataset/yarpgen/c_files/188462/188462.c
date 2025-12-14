/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((((var_7 / var_6) ? -1 : -var_9))), ((var_10 / (((max(var_12, 1))))))));
    var_15 *= (((((min(4178714765, var_13)) % ((-56 ? 1 : 4294967278)))) << (((-9223372036854775806 - -9223372036854775795) + 30))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [1] [1] [i_0] = (((((arr_6 [i_0] [i_1] [i_0] [i_0]) * 1018006369)) << (((arr_0 [1] [i_1]) ? -4212072550 : var_13))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_2] [i_2] [i_1] [i_0] [i_0] &= (1 % 18);
                                var_16 = (min(var_16, (((!((max(((var_7 ? (arr_12 [i_0] [i_0] [i_0] [4] [i_0] [i_0]) : 4294967277)), 1))))))));
                            }
                        }
                    }
                    arr_16 [i_0] [5] [i_0] = ((((max(0, var_4))) != ((((var_6 ? var_11 : var_4)) >> (((2333200452 % 240) - 107))))));
                    arr_17 [i_0] [1] [i_2] [i_1] = (4178714765 & 82894738);
                }
            }
        }
    }
    #pragma endscop
}
