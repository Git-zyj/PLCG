/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_15 << var_2);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] [i_1] &= 3918725210;
                    var_18 = (arr_4 [i_0]);
                    arr_8 [i_2] [i_1] [i_2] [i_2] = arr_2 [i_0] [i_0];

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_19 = (var_11 != var_3);
                        arr_13 [i_2] = -1;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_2] [i_1] [i_1] [16] [1] [1] = var_1;
                        var_20 += (var_13 * var_11);
                        var_21 = var_5;
                        var_22 &= (arr_10 [i_0]);
                        var_23 = ((-5697 * (arr_16 [i_1 + 2] [i_2] [i_1 - 3] [i_1 + 2])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {
                        var_24 ^= (((arr_5 [i_2] [i_0]) + (~120)));
                        var_25 += (arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_0]);
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] = ((5 ? 5705 : 1));
                        var_26 = (arr_0 [i_1 - 2]);
                    }
                }
            }
        }
    }
    var_27 = ((((((max(-122, 6644))) || var_9))) < (!var_8));
    #pragma endscop
}
