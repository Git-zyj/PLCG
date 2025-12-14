/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_3;
        arr_3 [i_0] = max(((var_7 / (arr_1 [i_0]))), -136);
        var_11 = var_6;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_12 = (min(var_12, ((min(((max((var_6 - 1), ((160 ? 511 : var_9))))), (min(13, 4045941367785783547)))))));

        /* vectorizable */
        for (int i_2 = 4; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_13 = 7737539843766431133;
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_5] [i_5] [i_1] = ((var_0 == (((123 ? 119 : (arr_15 [15] [i_2 - 4] [i_4]))))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_14 = (arr_23 [i_2 - 4] [i_2 - 2] [i_2 - 4]);
                            var_15 ^= (arr_18 [i_8] [i_7] [i_6]);
                        }
                    }
                }
            }
            arr_24 [i_1] [i_2] &= (((~var_1) ? var_9 : 13213));
        }
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            var_16 = (min(var_16, ((((((var_2 < ((var_8 << (248024771 - 248024768)))))) & (((!(((var_10 ? (arr_10 [i_1]) : 45)))))))))));
            var_17 = (max(var_17, var_6));
        }
        var_18 *= ((((((119 - var_8) ? 136 : var_1))) - (max((max((arr_9 [i_1] [i_1]), var_3)), 132))));
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
    {
        var_19 = ((~(arr_16 [i_10] [i_10])));
        arr_31 [5] = (((((min((arr_6 [i_10]), var_6))) >= (!127))));
    }
    var_20 = var_4;
    var_21 = (((--0) ? ((((((max(var_5, var_6))) && -1)))) : ((-66 ? (min(var_8, 6477686172103110019)) : (((var_2 ? var_5 : 66)))))));
    var_22 = (max((~var_6), (~var_3)));
    #pragma endscop
}
