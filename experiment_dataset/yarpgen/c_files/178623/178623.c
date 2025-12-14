/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((max(var_12, var_4))) ? var_13 : (~var_6)))) ? 2181843386368 : var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = ((var_11 <= ((167319576 ? 0 : 18446741891866165243))));
        var_19 = (min(var_19, ((((-1 ? -167319577 : 2181843386373))))));
    }

    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        var_20 = (var_15 * 2181843386386);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_12 [i_1] [19] [i_1] = ((+(((arr_9 [i_4] [i_1] [i_3] [i_2] [i_1] [i_1]) % 18446741891866165229))));
                        arr_13 [2] [2] [i_2] [i_1] [2] = ((-(!-var_16)));
                        var_21 = 167319569;
                        arr_14 [i_1] [i_2] [i_3] = (max((65535 - -167319585), (max(((var_14 ? var_9 : (arr_8 [i_1] [i_1] [i_3] [i_4]))), var_14))));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_22 = (max((((-(!66062039)))), (~var_13)));
                        arr_17 [i_1] [i_2] = (min(((101 ? 47640 : var_13)), -7349));
                    }

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_23 = (((((arr_5 [i_1]) < (arr_19 [i_1] [i_1]))) && (((-(arr_19 [i_1] [i_1]))))));
                        var_24 *= (((max((min((arr_18 [i_1 - 1] [15] [i_1 - 1] [15] [i_6] [15]), var_3)), (~8160))) == (((8195147223248736848 ? (-9223372036854775807 - 1) : 37514)))));
                        arr_20 [i_1] [i_1] [i_1] [i_1] = (!var_1);
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_25 = -114;
        var_26 = (max(var_26, (((~((-(arr_19 [i_7] [i_7]))))))));
        var_27 = 4294967289;
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_28 = 18446741891866165229;
        var_29 -= (!-16384);
        var_30 = (max(var_30, var_7));
        var_31 = (((((((arr_6 [i_8]) + 2147483647)) >> (((arr_11 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) - 3288192706360773130)))) * (max((((!(arr_21 [i_8] [i_8])))), var_16))));
    }
    #pragma endscop
}
