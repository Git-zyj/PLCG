/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((512309245 ? -512309245 : 863590087)) % (min(((0 ? var_16 : var_16)), (max(var_11, var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [1] = ((-((((max(1, var_18))) ? (~1) : 13))));
                            arr_12 [i_1] [i_1] [i_1] [i_0] = arr_9 [2] [i_0] [i_1] [i_3];
                            arr_13 [i_0] [i_0] [i_0] [i_1] [i_3 - 1] = (((958908030 + 255) ? 2147483647 : ((-1 ? 2147483647 : -0))));
                            var_21 ^= (((max(18, -1951203208))) ? 1 : 16475);
                            var_22 = (~255388076);
                        }
                    }
                }
                var_23 = (((((max(1042960640, 1)) / (15730 - var_14)))) || (((var_9 ? ((-958908030 ? -245489336 : var_16)) : var_4))));
            }
        }
    }
    #pragma endscop
}
