/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 811626386;
    var_16 = (((max((~var_3), var_9)) * ((-var_8 ? (var_13 % 3536) : (max(18446744073709551589, var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = 127;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = 62000;
                                var_19 += (((((((var_1 + var_0) < (min(933935742, (arr_1 [i_1 + 1]))))))) == (min((var_4 < 16), ((33 ? var_2 : 10943846851605363947))))));
                                var_20 = (arr_5 [i_0] [1]);
                                arr_14 [i_1] [i_0] = (!var_7);
                            }
                        }
                    }
                }
                var_21 = var_7;
                var_22 = (((var_14 ? ((9718570459286733273 ? 3535 : 27)) : (min(7502897222104187669, var_2)))));
            }
        }
    }
    #pragma endscop
}
