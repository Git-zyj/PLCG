/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_11 = 4611686018427387900;
                            var_12 = (max(var_12, var_2));
                            var_13 = (((((var_9 ? var_5 : var_8)) | 8589869056)));
                            var_14 = var_10;
                        }
                    }
                }
                arr_9 [i_0] [5] [i_1] = ((1 | (((32767 ^ var_0) ^ var_4))));
                var_15 = (((((-32765 / (-32767 * -32766)))) ? 4 : var_5));
            }
        }
    }
    var_16 = var_10;
    var_17 = (((min(4833403459938486235, 1))));
    var_18 = var_10;
    #pragma endscop
}
