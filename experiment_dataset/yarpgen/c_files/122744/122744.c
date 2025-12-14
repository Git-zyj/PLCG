/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 18154257074912510543;
        arr_3 [7] = (((max((var_7 > var_18), 0))) ? 1169527043644707871 : (((+((((arr_1 [i_0]) && var_11)))))));
        arr_4 [i_0] = ((4173893143877947277 + 334439796655573384) * ((~((var_8 ? 334439796655573384 : (arr_0 [i_0] [i_0]))))));
        var_19 -= ((18112304277053978231 >> (18446744073709551615 - 18446744073709551608)));
        arr_5 [i_0] = (~var_2);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [23] [i_1] = (((13420852556307999329 >= 16987981393740519673) >= (~var_9)));
        arr_9 [10] = ((~(((-13420852556307999319 != (max((arr_7 [i_1]), (arr_7 [4]))))))));
        arr_10 [i_1] [i_1] = (~((var_10 ? ((var_10 ? 18112304277053978233 : var_4)) : (1569215796389282480 | 1458762679969031943))));
        arr_11 [i_1] = (~(~var_2));
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (max(13000766368134440825, 16768333565798649553))));
        var_21 ^= max((min(var_1, 2478837782010976813)), ((((67108863 ^ var_15) >= var_18))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_17 [1] [i_3] = -1569215796389282480;
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    arr_22 [i_5] [i_4] [i_3] = var_18;
                    arr_23 [i_3] [i_3] = (~(arr_15 [i_3 - 1] [i_3 - 2]));
                }
            }
        }
        arr_24 [i_3] = ((~(!18446744073709551615)));
    }
    var_22 = (-((var_3 ? var_5 : (max(var_10, 18446744073642442746)))));
    #pragma endscop
}
