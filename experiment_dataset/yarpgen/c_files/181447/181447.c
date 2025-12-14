/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [6] [i_0] [i_0] = (((-32767 - 1) + 0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 -= ((((65408 == (10612797558841958827 || 65516)))));
                            var_14 = 0;
                            arr_14 [i_0] [i_1] [i_1] [5] = 16950379704578660281;
                            var_15 *= 2198;
                            var_16 = var_4;
                        }
                    }
                }
                arr_15 [5] [19] = (-23720 % 20);
            }
        }
    }
    var_17 ^= min(((237 ? ((16950379704578660281 ? 65500 : 1496364369130891332)) : -9)), (((197 ? 36 : -14537))));
    #pragma endscop
}
