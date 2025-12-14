/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_10 += -32757;
                var_11 *= (((arr_0 [i_1 + 1] [i_0]) ? (min(-3603, ((-7202 ? -3625 : (arr_3 [i_0] [i_0] [i_1]))))) : var_4));
                var_12 += (arr_3 [i_1] [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 = (((arr_4 [i_0]) ^ var_6));
                            var_14 = ((-7216 ? 55521 : (max(((22744 ? 2047 : 3603)), (25314 <= var_1)))));
                            arr_9 [i_0] [i_1 + 3] [i_2 - 2] [i_3] = ((((min(-7202, (arr_0 [i_2 - 2] [i_2 - 1])))) * (((max(-15700, var_1))))));
                            arr_10 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] |= 16384;
                        }
                    }
                }
                var_15 = -12991;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                var_16 *= ((min((24762 * var_6), ((max(var_4, 24762))))));
                var_17 *= max((-32767 - 1), 11843);
            }
        }
    }
    var_18 = ((((((13015 ^ var_4) ^ ((max(var_3, var_5)))))) ? (~var_0) : ((var_0 ? ((max(var_2, var_5))) : ((var_2 ? var_8 : var_7))))));
    #pragma endscop
}
