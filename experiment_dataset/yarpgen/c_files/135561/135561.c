/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (((((((min(1, var_8))) / var_10))) ? ((-376723123 ? (max(-110, var_1)) : var_10)) : 4294967295));
    var_12 &= (-14194 > (((3918244173 | 1) - (1 >> var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((2802144964 ? 65535 : (arr_4 [0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_14 = (arr_10 [i_0] [i_0]);
                            var_15 = (((119 ? 1 : (max(1, var_2)))) > 1);
                            var_16 &= ((var_0 ? ((~((13 ? -69 : 1)))) : var_6));
                            var_17 = 376723123;
                        }
                    }
                }
                var_18 = ((min(255, ((1 ? -120 : 770538929)))));
            }
        }
    }
    #pragma endscop
}
