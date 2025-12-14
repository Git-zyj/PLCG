/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((!(!var_2)))));
    var_19 = ((~((~(~var_8)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, -var_9));

                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        arr_13 [i_2 - 3] [i_2 - 3] [i_2] [i_2 - 1] [i_2] [i_2] = (!-var_17);
                        var_21 = ((~(!var_2)));
                        arr_14 [7] [i_0] [7] [10] = (!187);
                    }
                }
            }
        }
        arr_15 [i_0] = (~946395988636804492);
        var_22 = (max(var_22, (!17988396050937053748)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                {
                    arr_23 [i_4] = ((-(~var_1)));
                    arr_24 [i_0] [i_0] [i_4] [i_5 - 1] = (!122);
                    var_23 = ((!(~var_1)));
                    arr_25 [i_0] [i_4] [i_5] [i_4] = (~-var_5);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        arr_29 [i_6] = (~var_16);
        var_24 = ((~(~var_7)));
        arr_30 [i_6] = (!2866665611994999223);
        arr_31 [i_6] = ((~(!-5764118355872755820)));
    }
    #pragma endscop
}
