/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 ^= (~var_18);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                var_20 = (max(var_20, 18446744073709551606));
                                var_21 = 18804;
                                var_22 = (((~var_8) & ((((max(var_9, var_2))) ^ (1 | 18446744073709551613)))));
                            }
                            arr_14 [i_0] [i_0] [i_2] [i_3] = 238;
                        }
                    }
                }
            }
        }
    }
    var_23 = (((((((var_14 | 21) < 0)))) & var_12));
    #pragma endscop
}
