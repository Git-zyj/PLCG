/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (max(var_18, ((min((((~(~1)))), ((((min(769534143840068674, 769534143840068686))) ? (max((arr_1 [i_0] [i_0]), (arr_0 [i_0]))) : (((-207915605699255230 ? 46838 : 1480689262))))))))));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            arr_14 [i_1] [15] [4] [i_1] [i_1] = (8658 < var_0);
                            arr_15 [i_0] [i_1] [i_2] [i_3 + 1] [i_0] [i_2] = 2905058117;
                        }
                    }
                }
            }
            arr_16 [i_1] [i_1] = 16;
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_19 = 2147483643;
            arr_23 [i_6] = (~-14120);
            var_20 |= (~1964849641);
        }
        var_21 = (((arr_7 [i_5] [i_5]) ^ (1 ^ 116)));
    }
    #pragma endscop
}
