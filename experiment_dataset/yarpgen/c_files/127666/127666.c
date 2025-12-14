/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = ((((119 << (min(0, -18)))) + ((max(28, (1 > 1))))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_12 &= ((((((-9223372036854775807 - 1) == 91))) >> (-3748 + 3770)));
                    var_13 = (-9223372036854775807 - 1);
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_14 = 1368947151;
                    var_15 -= (!(!-106));
                    var_16 = ((127 ^ ((min(103, 7170)))));
                    var_17 = (max(1100755498807877588, ((max(18, 63954)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_18 += (((((!18) || -83)) ? 17345988574901674025 : -935992892));
                                var_19 = (((31 >= 1) ? (!1) : (1 | 18)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_20 &= (-(min((82 | 12791173681100819933), (115 % 4194303))));
                            var_21 = ((~(min(875498446, -8541663397214998857))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (((var_9 > var_2) != var_3));
    var_23 = (max(var_5, var_7));
    #pragma endscop
}
