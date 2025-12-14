/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_18 = ((26 ? var_8 : (((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 3]) : 61970))));
        var_19 = (min(var_19, ((min((arr_1 [i_0 + 1]), (~-2750705817700990404))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_2] [i_1] = (((max(61970, (min((arr_3 [i_1]), (arr_2 [i_1]))))) | (((var_8 / 4294967285) ? (arr_3 [i_1]) : (arr_5 [i_1] [i_1])))));

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_20 = ((max((arr_14 [4]), 61995)) | ((max(((((arr_13 [i_1] [i_2] [i_3] [i_4] [i_5]) | 3565))), (~4409510754571899606)))));
                            arr_16 [i_3] [i_3] [10] [i_1] [10] = 290494800;
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_21 = (4294967287 || 23637);
                            var_22 = ((var_5 ? (arr_17 [i_6] [i_6 + 1] [i_6 - 1] [i_6] [i_6]) : (arr_17 [i_6] [i_6 - 1] [i_6 - 1] [10] [i_3])));
                            var_23 = (min(var_23, 1734242248));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 4294967270;
                            var_24 = var_17;
                            arr_23 [i_7] |= ((4740726119484760386 ? ((4004472496 ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : 290494783)) : 4294967277));
                            var_25 = -7212792693824572218;
                            var_26 = (min(var_26, (((4294967269 ? ((-1200524392 ? var_16 : (arr_7 [i_1]))) : 4294967285)))));
                        }
                        arr_24 [i_1] [6] [i_2] [i_1] = (min((((5643 ? (arr_18 [i_1] [i_1] [9] [9] [i_2] [i_3] [5]) : 4619))), (max(((min((arr_4 [i_1]), 1))), 290494800))));
                        var_27 = -4740726119484760368;
                        var_28 ^= ((((!290494799) ? 65525 : (!268435455))));
                    }
                    var_29 = 1;
                    var_30 = (max(var_30, (((var_3 ? var_2 : ((((((arr_9 [i_1] [i_2] [i_3]) ? var_5 : (arr_20 [4] [0] [i_2] [i_2] [i_3])))))))))));
                }
            }
        }
    }
    #pragma endscop
}
