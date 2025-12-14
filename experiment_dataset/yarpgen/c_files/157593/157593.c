/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_6 || ((min(((255 ? var_4 : var_12)), (min(11, var_2)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = var_0;

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_16 = ((3635579862 & (arr_3 [i_0])));
            arr_6 [i_0] [i_0] [i_0] = ((var_3 ? (arr_3 [i_0]) : (arr_0 [i_1 - 2])));
            arr_7 [3] = 87753084627060079;
            arr_8 [i_0] [i_0] [12] = var_10;
        }
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_17 ^= 127;
            var_18 = ((-(arr_10 [i_0] [i_2 - 2] [i_2])));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            arr_15 [i_3] = (((arr_3 [i_3]) ^ (arr_5 [i_0] [i_3] [i_3])));
            var_19 = (arr_4 [i_0] [i_3]);
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_4] [i_0] = var_3;
            arr_20 [12] = (arr_1 [i_0] [i_0]);
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                {
                    arr_25 [i_0] [14] [i_0] [i_6] = (((arr_10 [i_0] [i_0] [i_0]) ? ((51338 ? 4294967278 : 127)) : (~2147418112)));
                    arr_26 [i_0] [i_5] [0] = (arr_3 [i_0]);
                }
            }
        }
        arr_27 [i_0] [i_0] = var_8;
    }
    var_20 = ((2097151 ? ((-((min(-8278, 104))))) : (((((6 ? var_6 : var_11))) ? ((min(-110, var_0))) : ((var_7 ? (-127 - 1) : var_9))))));
    #pragma endscop
}
