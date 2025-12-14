/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -1136187718630485893;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = max(((max(1, 26285))), (((~18446744073709551615) ? -3895448845961786100 : (((~(arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 -= (arr_10 [i_1 + 2] [i_1 - 1] [i_1 + 3]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_20 = arr_4 [i_0] [i_1 - 3];
                        var_21 *= ((!(arr_6 [i_0] [4])));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_22 = (max(var_22, 15));
                        arr_17 [5] [5] [5] [4] [i_4] [i_0] = -var_1;
                        arr_18 [i_0] [i_1] [i_1] [i_0] = (max(((((var_7 ? 17116194241586271907 : 39265)) * (((max(246, 240)))))), (((!(arr_16 [i_2] [i_2] [i_0] [i_2] [i_0] [i_1 + 1]))))));

                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            arr_21 [1] [i_1] [i_2] [i_4] [i_0] [i_4] [i_5] = ((26285 != (arr_6 [i_5 + 1] [i_1 - 2])));
                            var_23 = (min(var_23, (arr_16 [i_1 - 2] [i_1 + 1] [i_4] [i_1] [i_1 - 3] [i_1])));
                            arr_22 [i_0] [i_0] [i_0] [7] [i_0] = (((arr_7 [4]) >> (((arr_6 [i_5 - 1] [i_5]) - 5128965994944556508))));
                        }
                    }
                    for (int i_6 = 3; i_6 < 6;i_6 += 1)
                    {
                        var_24 = (max((((((((arr_14 [i_1] [1] [i_1] [i_1] [i_1] [i_0]) / var_4))) && (((~(arr_9 [i_0]))))))), (max((arr_2 [i_2]), 26261))));
                        var_25 ^= (arr_1 [i_1 + 1]);
                    }
                    var_26 = (min(var_26, (((max(3842710392482425741, 15612))))));
                    var_27 |= (min(2764971283, (1 * 15619)));
                }
            }
        }
    }
    for (int i_7 = 3; i_7 < 23;i_7 += 1)
    {
        arr_31 [i_7] = 15612;
        var_28 = ((65535 ? (var_3 < -32753) : -1010536116));
        arr_32 [i_7] [i_7] = ((((15 ? -1010536141 : 2044))));
        arr_33 [i_7] = 15612;
    }
    var_29 = var_10;

    /* vectorizable */
    for (int i_8 = 1; i_8 < 8;i_8 += 1)
    {
        arr_36 [i_8] = 13772794821905876350;
        arr_37 [i_8] [i_8] = ((arr_16 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8 - 1]) ? (arr_8 [i_8] [i_8] [i_8] [i_8 + 2]) : (arr_16 [i_8] [i_8] [i_8] [i_8] [i_8 + 2] [i_8]));
        arr_38 [i_8] [i_8] = -15608;
        var_30 = -63;
        var_31 = (max(var_31, -1917789236));
    }
    var_32 = (max(4, 0));
    #pragma endscop
}
