/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_17 = (((((((arr_1 [i_1]) + 9223372036854775807)) << (((((arr_1 [i_0]) + 6135831015051357336)) - 35)))) & ((0 ? var_5 : (arr_1 [i_0])))));
                            var_18 = (max(var_18, (arr_2 [i_1] [i_2] [i_3])));
                        }
                    }
                }
                var_19 = ((~((~(arr_1 [i_0])))));
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
