/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_10 |= (((~var_9) || (((15477397832643696573 ? ((min(0, 12))) : var_6)))));
                arr_4 [5] [i_0 - 1] [i_1] = (((6089746931684355555 != -8) | (max(var_5, 30757))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_11 = 0;
                            var_12 = 255;
                            var_13 *= ((max(var_5, -var_6)));
                            var_14 = -1176674391100816144;
                            var_15 -= (var_9 < var_8);
                        }
                    }
                }
                arr_14 [i_2] = ((((((var_3 || (3437386163 < var_4))))) + (min((((0 - (-32767 - 1)))), (~18446744073709551615)))));
            }
        }
    }
    #pragma endscop
}
