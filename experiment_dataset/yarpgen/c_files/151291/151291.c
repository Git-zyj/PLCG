/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] = arr_0 [0];
                arr_6 [i_1] [i_1] = arr_3 [i_1];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 = var_3;
                            var_18 = ((((((arr_3 [i_1]) + 9223372036854775807)) << ((((1073741824 ? (arr_1 [i_0] [i_0]) : 3400851671)) - 1824934833)))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (((-((var_11 ? var_8 : 1)))));
    #pragma endscop
}
