/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (arr_0 [i_0])));
        var_16 = -var_13;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = (min(4, 13319182510757947084));
        var_17 &= 5127561562951604532;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 -= (((arr_2 [i_1]) ^ 1));
            var_19 *= (arr_3 [i_1] [0]);
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_20 *= arr_3 [2] [1];
        var_21 ^= (min(13319182510757947083, 0));
    }
    var_22 = 13319182510757947100;

    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        var_23 = (~5127561562951604537);

        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            var_24 = (min((min(0, (arr_13 [i_5]))), (arr_13 [i_4 + 3])));

            for (int i_6 = 4; i_6 < 14;i_6 += 1)
            {
                var_25 = (arr_14 [i_4] [i_4] [2]);
                var_26 = (max(var_14, ((~(arr_14 [i_4] [i_4 - 2] [i_5 - 1])))));
                var_27 *= ((var_12 && ((min(((-(arr_17 [i_4] [i_5 - 1] [1] [i_6]))), -1)))));
            }
        }
        var_28 &= 13319182510757947084;
    }
    var_29 = (min(50309, var_12));
    #pragma endscop
}
