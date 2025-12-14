/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    var_20 = (((~(var_10 <= var_3))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 &= ((!(((-2147483647 - 1) >= (var_15 & 127)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_3] [i_3] [i_3] [i_3] [i_3] = (((arr_5 [i_2]) > (arr_5 [i_0])));
                        var_22 += 5;
                    }
                    arr_13 [i_2] [i_2] [i_2] [i_2] = ((-(var_10 - -127)));
                    arr_14 [i_0] [i_0] [i_1] [i_0] &= var_3;
                    var_23 = var_17;
                    var_24 -= (((-((2147483647 ? -27705 : 21075)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {
        arr_18 [i_4 + 2] [i_4] = ((~(arr_9 [i_4 + 1] [i_4 + 2] [i_4] [i_4] [i_4 + 2])));
        var_25 = (arr_16 [i_4 + 1]);
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_26 ^= (~32761);
        var_27 = (arr_4 [i_5] [3] [i_5]);
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        arr_26 [i_6] = ((!(arr_25 [i_6])));
        arr_27 [i_6] [i_6] = (((max((arr_2 [i_6] [i_6]), (arr_2 [i_6] [i_6]))) - (max(var_14, (arr_2 [i_6] [1])))));
        var_28 = ((7489 ? -15064 : (-127 - 1)));
    }
    #pragma endscop
}
