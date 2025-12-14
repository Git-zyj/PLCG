/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            arr_14 [i_0] [2] [i_0] [i_3 + 1] [i_4] [i_0] = ((65535 ? ((-27010 ? 2344 : 0)) : (max((min((-127 - 1), 18446744073709551615)), (((27010 ? -27020 : 217)))))));
                            var_17 = var_10;
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_18 = (((26997 & 1152476092) ? (min(((var_8 ? (arr_15 [i_0] [i_2]) : var_5)), (arr_3 [i_3 + 2] [i_3 + 2]))) : var_2));
                            var_19 = arr_7 [i_0] [i_0] [i_0];
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_6 + 2] = ((29321 + (arr_13 [i_6 + 1])));
                            var_20 += (arr_8 [11] [14] [i_2] [11] [11] [11]);
                        }
                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 14;i_7 += 1)
                        {
                            var_21 = (((arr_13 [i_3 + 2]) ? (!-56) : -1152476115));
                            arr_25 [i_7] [i_3] [i_3] [i_1] [i_2] [i_1] [i_0] = (arr_6 [i_0]);
                            var_22 = ((!(arr_12 [i_1] [i_0])));
                        }
                        var_23 = (((((arr_17 [i_2] [i_2] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 1]) / (arr_17 [i_0] [i_0] [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 2])))) ? (((min(var_7, 2194529730)))) : ((~(max(14452513400882766855, 13734)))));
                        var_24 += (max(((min((arr_16 [i_3] [i_3] [7] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]), (arr_16 [i_3 + 1] [7] [10] [10] [i_3 + 3] [14] [i_3 + 1])))), ((-88 ? 235 : 1))));
                        var_25 = (arr_24 [i_0] [i_1] [i_1] [i_1] [i_3 - 1] [i_1]);
                    }
                }
            }
        }
        arr_26 [i_0] = var_0;
        arr_27 [12] = (2305825417027649536 >= var_5);
        arr_28 [12] = (arr_23 [i_0] [10]);
    }
    var_26 = var_14;
    #pragma endscop
}
