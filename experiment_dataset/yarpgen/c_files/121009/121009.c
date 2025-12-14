/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_0] [i_0] [i_0] = -24;
                            var_16 = (min(((-18 ? -18060 : 1)), (arr_8 [i_0] [i_0] [i_1] [i_0])));
                        }
                    }
                }
                arr_11 [i_0 + 1] [i_0] = (min(((((var_10 == 18052) ? ((-750852832 & (arr_9 [i_1] [i_0] [i_1] [2] [i_0] [i_0]))) : (arr_2 [i_0])))), 29782));
                var_17 = (min(var_17, (((~((-1 / ((-(arr_5 [i_0] [2] [2]))))))))));
                var_18 ^= (-2946751511054653433 != 62133);

                /* vectorizable */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_19 &= (arr_1 [i_0] [i_0 + 1]);
                    arr_15 [i_4] [i_0] [i_0] |= var_7;
                    var_20 = ((19331 | (~var_13)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 24;i_6 += 1)
        {
            {
                var_21 -= (arr_19 [i_5] [i_6] [i_5]);
                var_22 = -18051;
                var_23 = (max(var_23, (max(((((!(arr_20 [i_5]))) ? ((max(-32753, var_9))) : (arr_16 [i_6 + 1] [i_5 - 3]))), var_9))));
                var_24 = (((max(-32747, 3641891033))));
                var_25 = var_11;
            }
        }
    }
    #pragma endscop
}
