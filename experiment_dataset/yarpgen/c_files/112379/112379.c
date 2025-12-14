/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = ((((max((arr_1 [i_0]), -1345))) % (((arr_0 [i_0] [i_0]) ? (max(3650595485371134096, 1345)) : var_9))));
        var_11 ^= (~var_1);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_12 = 521107589;
                            var_13 = (min(var_13, (((var_1 / ((((min(-785156390, 349561992))))))))));
                            arr_15 [i_1] [i_1] [i_4] [i_5] = (-1326 - -13079);
                        }
                    }
                }
            }
            var_14 = ((((max((((var_4 ? 0 : 16))), var_5))) ? (8388607 ^ -57) : ((-37585564 ? (((var_0 << (var_7 - 1038880760)))) : 13770385719988818074))));
            var_15 = var_8;
        }
        arr_16 [i_1] = (((arr_8 [i_1] [i_1] [i_1] [i_1]) ? (1 <= 3235797381) : ((8388602 + (arr_8 [i_1] [i_1] [i_1] [i_1])))));
    }
    for (int i_6 = 2; i_6 < 10;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {
                {
                    var_16 ^= 0;

                    for (int i_9 = 3; i_9 < 8;i_9 += 1)
                    {
                        arr_27 [i_7] |= (((arr_13 [i_8 - 1] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ? (((1143417036 ? (arr_13 [i_8 + 1] [i_8 - 1] [i_8] [i_8] [i_8 + 1] [i_8] [i_8]) : var_5))) : ((42261 ? 14797344208149158089 : 13078))));
                        arr_28 [i_6] [i_7] [i_7] [i_7] = (((((var_4 ? (arr_7 [i_6 - 1] [i_6 - 2]) : (arr_18 [i_9 + 3])))) ? ((((arr_7 [i_6 - 2] [i_6 - 1]) && 797581213))) : ((22 ? 29386 : -79))));
                    }
                    var_17 = (arr_17 [i_6 - 1]);
                    var_18 = (!var_0);

                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] = (min((max(13091, (~-1339))), -904658592));
                        var_19 = 229;
                    }
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        var_20 = (((arr_35 [i_6 + 1] [i_6 + 1] [i_7] [i_7] [i_7] [i_7]) ? ((min(-37585564, -79))) : 1));
                        var_21 = 17;
                        var_22 += var_0;
                    }
                }
            }
        }
        var_23 += (max(((((var_4 ? 81 : var_9)) << (-904658588 + 904658607))), ((min(1, 4199)))));
        var_24 = 55;
    }
    var_25 = var_7;
    var_26 = var_5;
    #pragma endscop
}
