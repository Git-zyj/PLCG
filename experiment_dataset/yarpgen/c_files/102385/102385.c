/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(((max(-14389, 1))), var_0);
    var_15 = (max(48592, -26229));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [1] [i_1] = (arr_4 [i_0] [i_0] [i_1]);
            var_16 = 17576;
            var_17 += 1152921504606322688;
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_0] = (var_7 ^ -var_13);
            arr_11 [i_0] [i_2] [i_2] = ((~(19056 ^ var_5)));
            var_18 = ((-1 ? 2080374784 : -28215));
            var_19 = ((((var_1 ? (arr_7 [i_2] [i_2]) : -127)) / (arr_8 [i_2] [i_0])));
        }
        arr_12 [7] [7] = ((~(arr_1 [i_0])));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_20 = (!-1426655023594468501);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_21 += -26275;

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_26 [i_3] [i_4] [i_5] [i_5] [i_7] = (!(~25962));
                            var_22 += (((max((var_5 | 12), (-366677529 | var_10))) <= (!24186)));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            arr_29 [i_3] [i_4] [i_5] [i_6] [i_8] = ((var_8 > (var_11 - 603181299)));
                            var_23 = (max(var_23, var_4));
                            arr_30 [i_3] [i_4] [i_4] [i_6] [i_8] [i_8] [i_5] = 92;
                            arr_31 [i_3] [i_4] [i_5] [i_6] [3] = 70027249;
                        }
                        var_24 = (max(var_24, -32748));
                    }
                }
            }
        }
    }
    var_25 = var_2;
    #pragma endscop
}
