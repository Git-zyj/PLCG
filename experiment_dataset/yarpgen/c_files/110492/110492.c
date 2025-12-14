/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        var_17 = (min(var_17, var_9));
                        var_18 = (((((max((arr_10 [i_0] [5] [i_0] [i_2] [i_3]), 9223372036854775807))) || 32759)));
                        var_19 = 2043508106;
                    }
                }
            }
        }
        var_20 = (min(var_20, (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_21 = (arr_13 [i_4]);
        var_22 -= var_11;
        var_23 = 32759;
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = ((((max(var_15, (arr_17 [i_5])))) ? 3 : var_13));
        arr_19 [i_5] = (max((((32765 && (arr_15 [i_5])))), (arr_15 [i_5])));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 17;i_8 += 1)
                {
                    {
                        arr_28 [i_5] [i_5] [i_5] [i_5] [9] = (127 - var_13);
                        var_24 = ((((arr_25 [i_7 + 1] [i_7 + 2] [i_7 + 1]) >= -1574194197421282201)));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        var_25 = (max(var_25, (arr_30 [i_9] [i_9])));
        var_26 = (min(var_26, (((12849451098732203282 ? (!-32759) : -32767)))));
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_27 = (((arr_13 [i_10]) | -32760));
        var_28 -= ((((max(-7918188025458486952, 1))) ? ((((((~(arr_13 [i_10])))) <= (max((arr_30 [i_10] [i_10]), (arr_29 [i_10])))))) : ((((arr_31 [i_10] [i_10]) >= (arr_14 [i_10]))))));

        /* vectorizable */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            var_29 = (arr_17 [6]);
            var_30 = (arr_21 [i_10] [i_11] [12]);
        }
    }
    var_31 = (max(var_12, var_16));
    #pragma endscop
}
