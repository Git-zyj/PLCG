/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-59 - -31367) ? (var_9 - 1) : (max(4467, ((var_3 ? 4473 : var_8)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_14 |= (arr_1 [i_0]);
        var_15 = (61074 > -31384);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = (max(506667800, 1));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_17 = -438808466;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_18 = (((1084376578 ? var_7 : 70)));
                            var_19 ^= 68;
                            var_20 = (arr_6 [i_5] [i_4]);
                            var_21 *= 23554;
                        }
                    }
                }
            }
        }
    }
    var_22 = var_10;
    #pragma endscop
}
