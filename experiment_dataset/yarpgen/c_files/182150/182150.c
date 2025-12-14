/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0 - 1] = (((-127 - 1) * var_7));
        var_15 = (max(var_15, (127 & var_10)));
        var_16 = (max(var_16, (((-(arr_1 [i_0 - 1]))))));
        var_17 = (min(var_17, (((((((arr_1 [i_0]) ? (arr_1 [i_0]) : 7264))) ? var_12 : (arr_0 [i_0]))))));
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] = (-127 - 1);
        var_18 = -1;
        var_19 = (min(var_19, ((((((~2556245146596894962) ^ (~var_3))) << (17520655850582308767 - 104))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_20 = (26805 | 127);
        var_21 &= var_9;
        var_22 = var_11;
        var_23 = (!-14703443610494783990);
        arr_10 [i_2] = ((var_7 > ((var_12 ? 926088223127242852 : 63))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 4; i_4 < 10;i_4 += 1)
        {
            var_24 ^= var_7;
            arr_17 [i_3] = ((var_10 + (((arr_8 [i_4 - 2] [i_4]) + -6581644818442112316))));
            var_25 = (((((65535 ? var_12 : 194092281))) ? 10607187072580862084 : ((((arr_1 [i_3]) / (var_12 ^ var_4))))));
        }

        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            arr_21 [i_3] [i_3] [i_3] = var_13;
            var_26 = (!0);
            var_27 ^= (((((arr_6 [i_5]) ? var_12 : (arr_8 [i_5 + 1] [7]))) >= (arr_9 [i_5 - 3])));
            arr_22 [i_3] [i_3] = arr_18 [0] [10] [10];
        }
        arr_23 [i_3] |= 1;
        arr_24 [i_3] [i_3] = (arr_3 [i_3]);
        var_28 = (((((83605231048658308 ? ((25291 ? 1530273827765998721 : 186196387013805934)) : (((arr_7 [i_3]) & (arr_8 [i_3] [0])))))) ? 6581644818442112309 : (!1)));
    }
    var_29 = ((((~(max(15661959987136525913, 1)))) | var_7));
    #pragma endscop
}
