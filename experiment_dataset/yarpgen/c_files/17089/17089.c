/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = (arr_0 [i_0] [7]);
        arr_2 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : ((9888871030209850282 ? (min(8557873043499701323, 24)) : var_2))));
        arr_3 [i_0] [i_0] = (((((arr_0 [i_0] [i_0]) ? ((0 ? 9888871030209850282 : 9888871030209850283)) : (((((arr_1 [i_0]) != (arr_1 [i_0])))))))) ? (~var_14) : var_11);
        arr_4 [i_0] = ((var_18 ? (!var_15) : ((min(var_4, (arr_1 [i_0]))))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_22 -= 4;
            arr_7 [i_0] [i_0] [i_1] = (arr_1 [i_0]);
            arr_8 [i_0] [i_0] [i_0] = ((((1 || (((-127 - 1) && 9888871030209850282)))) && (((min((arr_5 [i_1]), (arr_5 [i_0]))) && (!var_17)))));
        }
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_23 = max(11, (14477 / 72));
        var_24 = (((arr_9 [i_2] [i_2]) > var_4));
        arr_12 [i_2] = ((var_4 ? (arr_9 [i_2] [i_2]) : var_17));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_17 [i_3] = 118;

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_25 += ((+(((arr_19 [i_3]) & 8557873043499701302))));

                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    arr_23 [i_3] [i_3] = 8557873043499701319;
                    arr_24 [i_3] = (var_7 - 27474);
                }
                var_26 = 0;
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_30 [i_3] [i_3] [i_3] = (67 ^ -8925701113760002531);
                    arr_31 [1] [i_3] [i_2] = 4294967287;

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        arr_35 [i_3] [i_6] = (((((var_16 ? 16 : (arr_21 [i_2])))) || 1));
                        arr_36 [i_2] [i_3] [i_3] [i_3] [i_8] = var_11;
                        var_27 += (arr_29 [4] [0] [i_8]);
                    }
                }
                arr_37 [i_2] [i_3] [i_3] [i_6] = (~var_0);
                arr_38 [i_3] [i_3] = 65534;
            }
            for (int i_9 = 2; i_9 < 22;i_9 += 1)
            {
                var_28 = (((arr_29 [19] [i_3] [i_3]) ? ((var_8 ? var_19 : 0)) : ((8557873043499701319 ? var_17 : var_12))));
                var_29 = (arr_28 [1] [i_3] [0] [1]);
            }
        }
    }
    #pragma endscop
}
