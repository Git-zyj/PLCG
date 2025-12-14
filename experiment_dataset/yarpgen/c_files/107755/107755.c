/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_1 - 1] = ((var_18 ? ((var_7 ? var_3 : 867240767)) : 4031429379236520437));
            arr_5 [i_0 + 1] [i_1] [i_0] = (((((arr_1 [i_0 + 2]) / 1)) / ((93 ? 203 : 252))));
        }
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                {
                    arr_13 [i_0] [i_2] [i_2] [i_0] = (arr_8 [14]);
                    arr_14 [i_3] = 93;
                    arr_15 [i_3] = (((((((var_18 ? 1222688088 : var_9))) + ((52 ? (arr_11 [i_0 + 4] [7] [i_3 + 1]) : 0)))) > (((((162 ? var_12 : -30300)))))));
                    arr_16 [i_3] [i_0 + 3] [i_0 + 3] = ((!((((arr_1 [i_0]) * var_17)))));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_21 [i_0] [i_2] [i_3] [10] [8] [1] |= ((((((-9223372036854775807 - 1) ? var_2 : -1)) | var_5)) + ((((!(arr_7 [i_0] [i_0] [i_0]))))));
                                arr_22 [i_0] [i_0] [i_0] [3] [i_5] [i_0] = (max(var_12, (((((max(var_6, var_4))) <= ((-3630519638691738401 ? -1 : 108086391056891904)))))));
                                arr_23 [1] [i_5] = 867240767;
                                arr_24 [i_5] [i_5] [i_3] [i_3] [i_2] [i_5] [i_0 + 3] = (max(13595, (max((max(0, var_13)), (6424 | var_17)))));
                            }
                        }
                    }
                }
            }
        }
        arr_25 [i_0] = var_8;
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
    {
        arr_29 [i_6] = var_14;
        arr_30 [i_6] = 163;
    }
    var_20 = ((~(max(var_13, ((var_2 ? var_17 : 44196))))));
    var_21 = ((((((-1 ^ -1) ? 3072279191 : 14))) ? (3072279217 / var_2) : -60160));
    #pragma endscop
}
