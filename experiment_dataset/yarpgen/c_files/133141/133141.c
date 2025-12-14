/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_13;
    var_17 = (((var_12 ? var_15 : ((var_4 ? var_9 : var_0)))));
    var_18 = ((-var_14 ? 65535 : 6055));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 |= ((-(((arr_7 [i_0] [i_0] [i_1] [i_1 + 2]) ? (arr_7 [11] [14] [14] [i_1 + 2]) : (arr_5 [i_1] [12] [12])))));
                    var_20 = ((((((-(arr_4 [i_2] [i_0]))))) ? (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 - 2]) : (arr_6 [i_0 - 1] [i_1] [i_2 - 1])));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = (arr_0 [i_0] [i_1 - 1]);
                }
            }
        }
        var_21 = (((arr_5 [4] [2] [2]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((arr_4 [i_0 - 1] [i_0 - 1]) ? (arr_4 [3] [i_0 - 1]) : var_15))));
        var_22 = (((arr_5 [i_0] [i_0] [i_0 - 2]) ? var_5 : (max(1, (arr_6 [i_0] [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_23 = ((((((arr_13 [i_0 + 1] [i_0 + 1]) ? var_3 : var_15))) ? (((((var_11 ? (arr_12 [i_0] [i_0] [i_0] [i_5]) : (arr_1 [i_0])))) ? var_13 : (arr_15 [i_0] [i_3] [i_3] [i_0] [i_0] [i_0]))) : (arr_11 [i_0])));
                        var_24 = (arr_13 [12] [i_3]);
                    }
                    var_25 = ((3991635330 ? -1 : 15684353674443465516));
                }
            }
        }
        arr_18 [i_0] = (arr_11 [i_0]);
    }
    #pragma endscop
}
