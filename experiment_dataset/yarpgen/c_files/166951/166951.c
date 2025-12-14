/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = var_10;

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_1] = (4895 && -1);
            var_20 = 60619;
            var_21 = 246958834;
            var_22 = (max((246958843 / 6151), ((-117266392 ? var_8 : 15517))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_23 *= var_2;
            var_24 *= ((((45 ? 1 : 15936687476090446943)) >> (var_4 + 2229223011422000244)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        var_25 = var_0;
                        arr_12 [i_0] [i_2] [i_2] [i_3] [i_3] [i_4] = ((var_5 ? 1 : 1));
                        arr_13 [i_0] [i_2] [i_3] [i_2] = (!51095);
                        arr_14 [i_0] [i_2] [i_3] [i_2] = var_1;
                    }
                }
            }
        }
        var_26 = ((-(1 != 1)));
    }
    var_27 = (((((var_2 < ((5013220584332026125 << (97 - 97)))))) & ((var_1 ? ((970658533 ? var_6 : var_10)) : var_11))));
    #pragma endscop
}
