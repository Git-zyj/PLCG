/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_10 = ((((((arr_3 [i_0] [8]) >= (arr_7 [i_0])))) == (!-4621751568125739774)));
                    var_11 = ((arr_6 [i_0] [i_0] [5] [i_0]) ? (arr_2 [i_0]) : ((((arr_0 [i_0]) / 20757))));
                    var_12 ^= ((20762 == (((arr_1 [i_0] [i_0]) ^ 0))));
                }
                var_13 = 0;
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_14 = (min(var_14, ((((((4338 / (arr_9 [i_3 + 1] [i_3 + 1] [i_3])))) ? (min((arr_1 [i_0] [i_3 + 1]), (arr_9 [i_3 - 2] [i_3 - 1] [i_3]))) : (((max(-1, 20757)))))))));
                            var_15 |= 20757;
                        }
                    }
                }
            }
        }
    }
    var_16 ^= (!var_5);
    var_17 = (((57289 ? (var_2 ^ -4621751568125739761) : ((var_7 ? 61212 : var_6)))));
    #pragma endscop
}
