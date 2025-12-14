/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [3] = ((+(((arr_0 [2]) ? 31 : (arr_1 [i_0])))));
        var_13 = 54888;
        var_14 ^= 4294967292;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    var_15 = (((4 ? 5 : 4294967270)));
                    arr_10 [i_1] [i_1] [i_3] = (arr_3 [i_3] [i_1 + 2]);
                    var_16 |= 4194303;
                }
            }
        }
        var_17 = (((arr_9 [i_1 - 1] [i_1 + 1]) ? 3 : 0));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_14 [i_4] = 4294967267;
        var_18 = (((max(((max((arr_7 [i_4] [i_4] [i_4]), 6598816101373257275))), var_12)) / (138 * var_9)));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_19 = ((var_11 ? 16 : 86));
            var_20 &= 27737;
            var_21 &= ((arr_16 [1]) + ((-83 ? 6338790019095520743 : 15202627139858002838)));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_22 = (arr_7 [i_5] [i_5] [i_5]);
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_23 = var_7;
                            arr_32 [i_5] [i_7] [i_7] = var_0;
                            var_24 = ((((((1234181940 / 1922426232) <= var_10))) << ((((max(-108, 86))) - 73))));
                        }
                    }
                }
            }
            var_25 = 1427378220;
        }
        arr_33 [i_5] = (arr_16 [i_5]);
        var_26 = 22;
        var_27 = (min(var_27, (((~(((arr_17 [i_5]) | (((~(arr_11 [i_5] [i_5])))))))))));
    }
    var_28 = ((4294967270 ? ((max((var_9 <= var_5), (var_7 && 17)))) : 0));
    #pragma endscop
}
