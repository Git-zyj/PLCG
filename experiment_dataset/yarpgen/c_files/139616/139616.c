/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (-var_11 + 1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (1 || 15)));
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) >= -1001977791));
        arr_3 [8] [3] = 15360;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_22 *= 36;
        var_23 = (((-20091 + 66) ^ (4035225266123964416 <= var_8)));
        var_24 ^= (63 + var_12);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_25 -= 1;
                    arr_11 [i_2] [2] [2] [7] = (((arr_10 [i_2 + 1] [i_2 - 3] [i_1]) <= var_18));
                    arr_12 [i_2] [i_2] = (((arr_6 [i_1] [i_1]) - var_5));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_26 = ((!(arr_1 [i_2 - 2] [i_2 - 1])));
                                var_27 ^= (1 == 511);
                            }
                        }
                    }
                }
            }
        }
        var_28 -= (~var_6);
    }
    #pragma endscop
}
