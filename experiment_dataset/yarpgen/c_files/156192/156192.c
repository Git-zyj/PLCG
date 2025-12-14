/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_6 * var_8);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 - 2] [i_0 - 3] = (min((arr_0 [i_0 - 1]), 35884));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, (arr_0 [i_2])));
                            var_13 = 51;
                            var_14 = arr_6 [i_1] [i_1] [i_1] [i_0 - 4];
                            arr_10 [i_0] |= -26;
                            var_15 -= 511;
                        }
                    }
                }
                var_16 = (arr_1 [i_1]);
            }
        }
    }
    #pragma endscop
}
