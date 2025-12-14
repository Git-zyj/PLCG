/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, 27610));
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_14 = ((-(!255)));
                var_15 = 1278370032;
            }
        }
    }

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_9 [4] |= ((~(max((!var_0), 0))));
        var_16 = (~1329);

        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            var_17 = -1278370023;
            arr_13 [i_3] |= ((((max(-12, (arr_10 [i_3])))) ? 1 : 32746));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_18 *= 0;
            var_19 ^= (max(6601, 7));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                var_20 = 41081;
                var_21 *= (arr_10 [i_6]);
                var_22 = 0;
                arr_22 [i_2] [i_6] [i_6] |= (min((6601 <= -1278370029), (1 & 1)));
            }

            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                var_23 = ((min(-6803701666916918896, (-8 | -9))) | ((min(0, 0))));
                arr_25 [i_2] [i_2] [i_7] = 2475564546;
            }
        }
        var_24 = (max(var_24, (((65535 ? 1 : 6601)))));
    }
    #pragma endscop
}
