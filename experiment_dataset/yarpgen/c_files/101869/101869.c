/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (min(2147483646, -682274132));
    var_14 = -var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1 + 2] [i_1] &= (arr_1 [i_1]);
                arr_6 [i_0] [i_1] [3] = var_7;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, (((-682274144 ? var_3 : ((((((min(682274132, 53462))) <= ((var_1 ? (arr_8 [i_3]) : var_3)))))))))));
                            var_16 = (min(var_16, (((var_9 ? (max(var_7, var_12)) : var_1)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
