/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 738106756;
    var_13 ^= ((~((var_1 ? ((1 ? -89 : var_6)) : (~var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 -= (arr_5 [i_0 - 1] [i_0] [2] [1]);
                    var_15 = (min(1, -25251));
                    var_16 = (32767 ? -1 : 1);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 -= 1;
                                var_18 *= ((-613703917449400163 ? (((arr_2 [i_0] [i_1] [i_4]) ? (((arr_5 [i_0] [0] [i_0] [i_0]) ? -613703917449400164 : -1)) : ((3132256979074686749 ? var_7 : -3784558467735144926)))) : -613703917449400163));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_19, var_2));
    #pragma endscop
}
